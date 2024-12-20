//
//  main.c
//  SAPSigner
//
//  Created by Pedro Tôrres on 2024-05-27.
//

#include <stdio.h>
#include <string.h>

#include "base64.h"
#include "http.h"
#include "mescal.h"

static struct FairPlayHWInfo_ hw_info = {
    .IDLength = 6,
    .ID = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    },
};

// GET https://s.mzstatic.com/sap/setupCert.plist
static const char sign_sap_setup_cert_data[] = {
    0x01, 0x02, 0x00, 0x00, 0x04, 0x16, 0x30, 0x82,
    0x04, 0x12, 0x30, 0x82, 0x02, 0xFA, 0xA0, 0x03,
    0x02, 0x01, 0x02, 0x02, 0x01, 0x1C, 0x30, 0x0D,
    0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D,
    0x01, 0x01, 0x05, 0x05, 0x00, 0x30, 0x62, 0x31,
    0x0B, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06,
    0x13, 0x02, 0x55, 0x53, 0x31, 0x13, 0x30, 0x11,
    0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x0A, 0x41,
    0x70, 0x70, 0x6C, 0x65, 0x20, 0x49, 0x6E, 0x63,
    0x2E, 0x31, 0x26, 0x30, 0x24, 0x06, 0x03, 0x55,
    0x04, 0x0B, 0x13, 0x1D, 0x41, 0x70, 0x70, 0x6C,
    0x65, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66,
    0x69, 0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x20,
    0x41, 0x75, 0x74, 0x68, 0x6F, 0x72, 0x69, 0x74,
    0x79, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55,
    0x04, 0x03, 0x13, 0x0D, 0x41, 0x70, 0x70, 0x6C,
    0x65, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43,
    0x41, 0x30, 0x1E, 0x17, 0x0D, 0x31, 0x31, 0x30,
    0x31, 0x32, 0x36, 0x31, 0x39, 0x30, 0x31, 0x33,
    0x34, 0x5A, 0x17, 0x0D, 0x31, 0x39, 0x30, 0x31,
    0x32, 0x36, 0x31, 0x39, 0x30, 0x31, 0x33, 0x34,
    0x5A, 0x30, 0x81, 0x85, 0x31, 0x0B, 0x30, 0x09,
    0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55,
    0x53, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55,
    0x04, 0x0A, 0x0C, 0x0A, 0x41, 0x70, 0x70, 0x6C,
    0x65, 0x20, 0x49, 0x6E, 0x63, 0x2E, 0x31, 0x26,
    0x30, 0x24, 0x06, 0x03, 0x55, 0x04, 0x0B, 0x0C,
    0x1D, 0x41, 0x70, 0x70, 0x6C, 0x65, 0x20, 0x43,
    0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61,
    0x74, 0x69, 0x6F, 0x6E, 0x20, 0x41, 0x75, 0x74,
    0x68, 0x6F, 0x72, 0x69, 0x74, 0x79, 0x31, 0x39,
    0x30, 0x37, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0C,
    0x30, 0x41, 0x70, 0x70, 0x6C, 0x65, 0x20, 0x53,
    0x79, 0x73, 0x74, 0x65, 0x6D, 0x20, 0x49, 0x6E,
    0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x69, 0x6F,
    0x6E, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66,
    0x69, 0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x20,
    0x41, 0x75, 0x74, 0x68, 0x6F, 0x72, 0x69, 0x74,
    0x79, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0D, 0x06,
    0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01,
    0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0F,
    0x00, 0x30, 0x82, 0x01, 0x0A, 0x02, 0x82, 0x01,
    0x01, 0x00, 0xDA, 0xE0, 0x0F, 0x98, 0x97, 0xCB,
    0x58, 0x29, 0x86, 0x2A, 0x0B, 0xB8, 0x9E, 0x19,
    0x5A, 0x31, 0xC3, 0x2D, 0x0E, 0x6A, 0x2C, 0x52,
    0x01, 0xEE, 0x1D, 0x03, 0xFB, 0x82, 0x41, 0x69,
    0xCD, 0x50, 0x26, 0x36, 0x7A, 0xB7, 0x0C, 0x6F,
    0x0E, 0x39, 0x03, 0xB8, 0xD4, 0x18, 0x56, 0xA3,
    0x08, 0xB2, 0x3C, 0xC3, 0xFB, 0x36, 0x41, 0xE4,
    0xD7, 0xC8, 0x67, 0x60, 0x32, 0x0B, 0x4E, 0x32,
    0x7D, 0x87, 0xF7, 0xFD, 0xCD, 0x53, 0xB0, 0x1A,
    0xBA, 0xFC, 0x1F, 0x6C, 0xC9, 0x45, 0x07, 0xAD,
    0x82, 0x38, 0xF3, 0xA8, 0x7C, 0xC4, 0x4E, 0xC2,
    0xB1, 0x56, 0xD9, 0x3E, 0xB2, 0x6D, 0x6D, 0x04,
    0x41, 0x1A, 0xC1, 0x9A, 0x47, 0xC0, 0xAC, 0x15,
    0x7C, 0x2D, 0x78, 0x91, 0xAB, 0x07, 0xA2, 0x65,
    0xB1, 0x7A, 0x83, 0xDD, 0x98, 0x4B, 0x77, 0x40,
    0xD8, 0xEE, 0x50, 0xEB, 0xC7, 0x6B, 0x58, 0x08,
    0x06, 0x97, 0x57, 0x55, 0x7D, 0x27, 0xF8, 0x0A,
    0xE6, 0xB5, 0x15, 0xE7, 0xA7, 0x93, 0xF9, 0xF1,
    0x80, 0xE6, 0x42, 0x79, 0x3F, 0x16, 0xD3, 0x32,
    0x9D, 0x11, 0x76, 0x41, 0x29, 0x0A, 0x31, 0x09,
    0xEF, 0x0F, 0x5B, 0xF8, 0xF3, 0xA7, 0xA9, 0xF7,
    0x52, 0x0D, 0xBB, 0xF8, 0x2D, 0x74, 0xAC, 0xA6,
    0x49, 0x1F, 0x1F, 0xCE, 0x7B, 0x05, 0xA7, 0x85,
    0x3D, 0xBE, 0xCF, 0xA2, 0xA7, 0xAA, 0x23, 0x85,
    0x66, 0xFE, 0xC5, 0x16, 0x12, 0x7E, 0x5B, 0xE2,
    0x31, 0x77, 0x91, 0x02, 0x09, 0xDF, 0x7E, 0x7E,
    0xE4, 0x8A, 0xE0, 0xEC, 0x41, 0xAC, 0x17, 0x2C,
    0x04, 0xE0, 0xBC, 0x79, 0xA4, 0x89, 0x78, 0x44,
    0x06, 0x8B, 0x3B, 0x4B, 0xA0, 0xBC, 0x84, 0xE2,
    0xB0, 0x82, 0xB5, 0x32, 0xBE, 0x04, 0x1C, 0x03,
    0xED, 0x82, 0x3E, 0x75, 0x37, 0x14, 0xCF, 0x75,
    0x9F, 0x82, 0x31, 0x6D, 0xCF, 0x09, 0x14, 0x86,
    0xD1, 0x27, 0x02, 0x03, 0x01, 0x00, 0x01, 0xA3,
    0x81, 0xAE, 0x30, 0x81, 0xAB, 0x30, 0x0E, 0x06,
    0x03, 0x55, 0x1D, 0x0F, 0x01, 0x01, 0xFF, 0x04,
    0x04, 0x03, 0x02, 0x01, 0x86, 0x30, 0x0F, 0x06,
    0x03, 0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF, 0x04,
    0x05, 0x30, 0x03, 0x01, 0x01, 0xFF, 0x30, 0x1D,
    0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04, 0x16, 0x04,
    0x14, 0xF0, 0x30, 0x73, 0x63, 0xF2, 0xEF, 0x1D,
    0xAC, 0xCC, 0xE6, 0x09, 0x32, 0xC1, 0xFA, 0x79,
    0x7A, 0xB1, 0x69, 0x50, 0x68, 0x30, 0x1F, 0x06,
    0x03, 0x55, 0x1D, 0x23, 0x04, 0x18, 0x30, 0x16,
    0x80, 0x14, 0x2B, 0xD0, 0x69, 0x47, 0x94, 0x76,
    0x09, 0xFE, 0xF4, 0x6B, 0x8D, 0x2E, 0x40, 0xA6,
    0xF7, 0x47, 0x4D, 0x7F, 0x08, 0x5E, 0x30, 0x36,
    0x06, 0x03, 0x55, 0x1D, 0x1F, 0x04, 0x2F, 0x30,
    0x2D, 0x30, 0x2B, 0xA0, 0x29, 0xA0, 0x27, 0x86,
    0x25, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F,
    0x77, 0x77, 0x77, 0x2E, 0x61, 0x70, 0x70, 0x6C,
    0x65, 0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x61, 0x70,
    0x70, 0x6C, 0x65, 0x63, 0x61, 0x2F, 0x72, 0x6F,
    0x6F, 0x74, 0x2E, 0x63, 0x72, 0x6C, 0x30, 0x10,
    0x06, 0x0A, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x63,
    0x64, 0x06, 0x02, 0x04, 0x04, 0x02, 0x05, 0x00,
    0x30, 0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86,
    0xF7, 0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x03,
    0x82, 0x01, 0x01, 0x00, 0x3D, 0x7B, 0x8F, 0xAD,
    0x1F, 0x0C, 0x22, 0x8A, 0x9B, 0x4B, 0xA3, 0xCF,
    0xF8, 0x2B, 0xB0, 0x1F, 0x68, 0xE1, 0x0C, 0xF7,
    0x9C, 0x24, 0x83, 0x16, 0x03, 0x2D, 0xD3, 0xB2,
    0xA8, 0xD0, 0x43, 0xE8, 0xAF, 0x3C, 0x97, 0x26,
    0xC8, 0xAD, 0xD5, 0x2C, 0xC4, 0x4C, 0x55, 0x53,
    0x01, 0x49, 0xD0, 0xE2, 0xB4, 0xFB, 0xE6, 0xDB,
    0x72, 0xD1, 0x98, 0xBB, 0xFC, 0x9B, 0xC8, 0x4E,
    0xB7, 0x8F, 0xCC, 0x65, 0x86, 0x7F, 0x44, 0xB9,
    0xDA, 0x27, 0x2A, 0x4E, 0xDF, 0xCB, 0xDF, 0xD3,
    0x7D, 0xDF, 0x41, 0x71, 0xF8, 0xB3, 0xC0, 0x1D,
    0xA2, 0x0A, 0x33, 0xB9, 0xEC, 0x2B, 0xC5, 0x73,
    0x72, 0xFB, 0xE1, 0xCA, 0x5D, 0x8E, 0x2F, 0x34,
    0xF4, 0x6B, 0xC4, 0x4F, 0x0F, 0xC8, 0x8A, 0xAC,
    0x0F, 0xFB, 0x6F, 0x25, 0x6E, 0xB7, 0xAE, 0x8E,
    0xC7, 0xE4, 0x02, 0xB8, 0x20, 0x4E, 0x5D, 0x56,
    0x4C, 0x49, 0x97, 0xB1, 0x24, 0x74, 0x7E, 0xC9,
    0x93, 0x93, 0x34, 0x8C, 0x99, 0xD1, 0xA7, 0xC0,
    0x1C, 0xD3, 0xD4, 0xC2, 0xAE, 0x69, 0xEB, 0x9F,
    0x9F, 0x57, 0xE2, 0x68, 0xC7, 0xCA, 0xD5, 0xC5,
    0x22, 0x82, 0x64, 0x41, 0x58, 0xFE, 0x78, 0xD1,
    0xCA, 0xC1, 0xF9, 0x36, 0x6A, 0x6B, 0x44, 0xF7,
    0xB3, 0x86, 0x72, 0x7A, 0x64, 0x40, 0x17, 0x31,
    0x9D, 0xBC, 0xAC, 0x75, 0xF0, 0xFA, 0x33, 0x51,
    0xE5, 0xBD, 0x01, 0x6A, 0x58, 0x3F, 0xF0, 0x00,
    0xAE, 0x99, 0x5C, 0x0A, 0xC2, 0xC9, 0xE9, 0x5E,
    0x1C, 0x87, 0x02, 0xEC, 0xA0, 0x08, 0x55, 0x41,
    0x2A, 0x9B, 0x8C, 0x64, 0x85, 0x8E, 0x50, 0x03,
    0xCD, 0xE0, 0x11, 0xAF, 0xCE, 0x72, 0x19, 0xEB,
    0x52, 0xF3, 0xAF, 0x92, 0xAD, 0x93, 0x2E, 0x94,
    0x9D, 0xD6, 0xAF, 0xFF, 0xC0, 0x26, 0xF1, 0xDE,
    0x94, 0x92, 0x1C, 0xD9, 0xBC, 0x3D, 0x36, 0xCC,
    0x55, 0xFA, 0x38, 0xDB, 0x00, 0x00, 0x05, 0x31,
    0x30, 0x82, 0x05, 0x2D, 0x30, 0x82, 0x04, 0x15,
    0xA0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x08, 0x4A,
    0x74, 0x3F, 0xD1, 0x93, 0x3B, 0x63, 0x90, 0x30,
    0x0D, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
    0x0D, 0x01, 0x01, 0x05, 0x05, 0x00, 0x30, 0x81,
    0x85, 0x31, 0x0B, 0x30, 0x09, 0x06, 0x03, 0x55,
    0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x13,
    0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x0C,
    0x0A, 0x41, 0x70, 0x70, 0x6C, 0x65, 0x20, 0x49,
    0x6E, 0x63, 0x2E, 0x31, 0x26, 0x30, 0x24, 0x06,
    0x03, 0x55, 0x04, 0x0B, 0x0C, 0x1D, 0x41, 0x70,
    0x70, 0x6C, 0x65, 0x20, 0x43, 0x65, 0x72, 0x74,
    0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6F,
    0x6E, 0x20, 0x41, 0x75, 0x74, 0x68, 0x6F, 0x72,
    0x69, 0x74, 0x79, 0x31, 0x39, 0x30, 0x37, 0x06,
    0x03, 0x55, 0x04, 0x03, 0x0C, 0x30, 0x41, 0x70,
    0x70, 0x6C, 0x65, 0x20, 0x53, 0x79, 0x73, 0x74,
    0x65, 0x6D, 0x20, 0x49, 0x6E, 0x74, 0x65, 0x67,
    0x72, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x43,
    0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61,
    0x74, 0x69, 0x6F, 0x6E, 0x20, 0x41, 0x75, 0x74,
    0x68, 0x6F, 0x72, 0x69, 0x74, 0x79, 0x30, 0x1E,
    0x17, 0x0D, 0x31, 0x31, 0x30, 0x34, 0x31, 0x34,
    0x32, 0x32, 0x31, 0x31, 0x35, 0x35, 0x5A, 0x17,
    0x0D, 0x31, 0x34, 0x30, 0x34, 0x31, 0x33, 0x32,
    0x32, 0x31, 0x31, 0x35, 0x35, 0x5A, 0x30, 0x69,
    0x31, 0x1D, 0x30, 0x1B, 0x06, 0x03, 0x55, 0x04,
    0x03, 0x0C, 0x14, 0x44, 0x52, 0x4D, 0x20, 0x54,
    0x65, 0x63, 0x68, 0x6E, 0x6F, 0x6C, 0x6F, 0x67,
    0x69, 0x65, 0x73, 0x20, 0x41, 0x30, 0x31, 0x31,
    0x26, 0x30, 0x24, 0x06, 0x03, 0x55, 0x04, 0x0B,
    0x0C, 0x1D, 0x41, 0x70, 0x70, 0x6C, 0x65, 0x20,
    0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63,
    0x61, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x41, 0x75,
    0x74, 0x68, 0x6F, 0x72, 0x69, 0x74, 0x79, 0x31,
    0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0A,
    0x0C, 0x0A, 0x41, 0x70, 0x70, 0x6C, 0x65, 0x20,
    0x49, 0x6E, 0x63, 0x2E, 0x31, 0x0B, 0x30, 0x09,
    0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55,
    0x53, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0D, 0x06,
    0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01,
    0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0F,
    0x00, 0x30, 0x82, 0x01, 0x0A, 0x02, 0x82, 0x01,
    0x01, 0x00, 0xBE, 0x2D, 0x91, 0x77, 0x72, 0x06,
    0xA9, 0xCC, 0xB6, 0x11, 0x2C, 0x44, 0xAE, 0x60,
    0xB7, 0xF8, 0xDE, 0x3F, 0xCD, 0xD6, 0x6F, 0x20,
    0x7A, 0x46, 0x89, 0x6D, 0x3A, 0x58, 0xBF, 0x4C,
    0xFA, 0xFE, 0x0C, 0xF8, 0xA9, 0xC9, 0x15, 0x4F,
    0xA9, 0x29, 0xF7, 0xF7, 0x57, 0x1F, 0x16, 0x23,
    0xD5, 0x00, 0x47, 0x19, 0xFD, 0xDF, 0x0E, 0x23,
    0xC8, 0x5D, 0x4D, 0xCE, 0x60, 0x77, 0x14, 0xDA,
    0xB0, 0x6B, 0xA0, 0xE9, 0x12, 0xE4, 0x0B, 0x4A,
    0x6B, 0x8E, 0xAF, 0xD3, 0x7F, 0xAE, 0xD9, 0x43,
    0x11, 0xB5, 0x5F, 0x4F, 0x36, 0x56, 0xBD, 0x93,
    0xD5, 0x95, 0x99, 0x6B, 0xA8, 0x98, 0x89, 0xDE,
    0x6F, 0xDD, 0x49, 0xAD, 0x33, 0xE7, 0xCA, 0x37,
    0xA5, 0xC2, 0x6F, 0xED, 0xC6, 0x8F, 0x4A, 0x29,
    0x2E, 0xAC, 0x17, 0xC5, 0x3A, 0xE9, 0x6D, 0xFA,
    0x20, 0x8A, 0xB5, 0x4E, 0x6A, 0xBD, 0x9C, 0x22,
    0x52, 0x4E, 0x77, 0x1C, 0x90, 0x8F, 0xE6, 0x42,
    0x66, 0x56, 0xBA, 0x36, 0x1B, 0xE3, 0x05, 0xE0,
    0x83, 0x31, 0x40, 0x8E, 0x32, 0x45, 0x7C, 0xCD,
    0x4E, 0xEA, 0xB4, 0xB2, 0x30, 0x20, 0xBD, 0x2D,
    0x10, 0x65, 0xF5, 0xC2, 0x08, 0x82, 0x51, 0xD6,
    0x0E, 0x96, 0x33, 0x4F, 0x53, 0x58, 0xF5, 0x48,
    0xC1, 0xDE, 0x5A, 0xBB, 0xA1, 0xAA, 0x7E, 0x3B,
    0x63, 0x78, 0xA7, 0x41, 0x13, 0x13, 0x04, 0x6C,
    0x9B, 0xFE, 0x45, 0xFD, 0xA7, 0x52, 0xC4, 0xAA,
    0xB0, 0x5B, 0x12, 0x86, 0x34, 0x4B, 0xF4, 0xD4,
    0xD6, 0x95, 0x7E, 0x05, 0xA6, 0x52, 0xD4, 0x7C,
    0xE4, 0xA1, 0x78, 0xBD, 0x60, 0x9C, 0x8B, 0xD3,
    0xFF, 0x4A, 0xF2, 0x3E, 0x33, 0x2C, 0xD7, 0xFB,
    0xA0, 0xC7, 0x06, 0x16, 0x3E, 0xD3, 0xF9, 0xCE,
    0x90, 0x67, 0x16, 0x12, 0x05, 0x35, 0x01, 0xAE,
    0x3D, 0xEA, 0x50, 0xC4, 0x05, 0x52, 0x4D, 0x76,
    0xE7, 0x35, 0x02, 0x03, 0x01, 0x00, 0x01, 0xA3,
    0x82, 0x01, 0xBA, 0x30, 0x82, 0x01, 0xB6, 0x30,
    0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04, 0x16,
    0x04, 0x14, 0x0C, 0x6C, 0x72, 0x9F, 0x96, 0x33,
    0xC9, 0x46, 0xF3, 0x0C, 0x5D, 0x62, 0x43, 0x67,
    0x16, 0x25, 0x86, 0xB3, 0x5C, 0x54, 0x30, 0x0C,
    0x06, 0x03, 0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF,
    0x04, 0x02, 0x30, 0x00, 0x30, 0x1F, 0x06, 0x03,
    0x55, 0x1D, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80,
    0x14, 0xF0, 0x30, 0x73, 0x63, 0xF2, 0xEF, 0x1D,
    0xAC, 0xCC, 0xE6, 0x09, 0x32, 0xC1, 0xFA, 0x79,
    0x7A, 0xB1, 0x69, 0x50, 0x68, 0x30, 0x82, 0x01,
    0x0E, 0x06, 0x03, 0x55, 0x1D, 0x20, 0x04, 0x82,
    0x01, 0x05, 0x30, 0x82, 0x01, 0x01, 0x30, 0x81,
    0xFE, 0x06, 0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7,
    0x63, 0x64, 0x05, 0x01, 0x30, 0x81, 0xF0, 0x30,
    0x28, 0x06, 0x08, 0x2B, 0x06, 0x01, 0x05, 0x05,
    0x07, 0x02, 0x01, 0x16, 0x1C, 0x68, 0x74, 0x74,
    0x70, 0x3A, 0x2F, 0x2F, 0x77, 0x77, 0x77, 0x2E,
    0x61, 0x70, 0x70, 0x6C, 0x65, 0x2E, 0x63, 0x6F,
    0x6D, 0x2F, 0x61, 0x70, 0x70, 0x6C, 0x65, 0x63,
    0x61, 0x30, 0x81, 0xC3, 0x06, 0x08, 0x2B, 0x06,
    0x01, 0x05, 0x05, 0x07, 0x02, 0x02, 0x30, 0x81,
    0xB6, 0x0C, 0x81, 0xB3, 0x52, 0x65, 0x6C, 0x69,
    0x61, 0x6E, 0x63, 0x65, 0x20, 0x6F, 0x6E, 0x20,
    0x74, 0x68, 0x69, 0x73, 0x20, 0x63, 0x65, 0x72,
    0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65,
    0x20, 0x62, 0x79, 0x20, 0x61, 0x6E, 0x79, 0x20,
    0x70, 0x61, 0x72, 0x74, 0x79, 0x20, 0x61, 0x73,
    0x73, 0x75, 0x6D, 0x65, 0x73, 0x20, 0x61, 0x63,
    0x63, 0x65, 0x70, 0x74, 0x61, 0x6E, 0x63, 0x65,
    0x20, 0x6F, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20,
    0x74, 0x68, 0x65, 0x6E, 0x20, 0x61, 0x70, 0x70,
    0x6C, 0x69, 0x63, 0x61, 0x62, 0x6C, 0x65, 0x20,
    0x73, 0x74, 0x61, 0x6E, 0x64, 0x61, 0x72, 0x64,
    0x20, 0x74, 0x65, 0x72, 0x6D, 0x73, 0x20, 0x61,
    0x6E, 0x64, 0x20, 0x63, 0x6F, 0x6E, 0x64, 0x69,
    0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x6F, 0x66,
    0x20, 0x75, 0x73, 0x65, 0x2C, 0x20, 0x63, 0x65,
    0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
    0x65, 0x20, 0x70, 0x6F, 0x6C, 0x69, 0x63, 0x79,
    0x20, 0x61, 0x6E, 0x64, 0x20, 0x63, 0x65, 0x72,
    0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69,
    0x6F, 0x6E, 0x20, 0x70, 0x72, 0x61, 0x63, 0x74,
    0x69, 0x63, 0x65, 0x20, 0x73, 0x74, 0x61, 0x74,
    0x65, 0x6D, 0x65, 0x6E, 0x74, 0x73, 0x2E, 0x30,
    0x2F, 0x06, 0x03, 0x55, 0x1D, 0x1F, 0x04, 0x28,
    0x30, 0x26, 0x30, 0x24, 0xA0, 0x22, 0xA0, 0x20,
    0x86, 0x1E, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F,
    0x2F, 0x63, 0x72, 0x6C, 0x2E, 0x61, 0x70, 0x70,
    0x6C, 0x65, 0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x61,
    0x73, 0x69, 0x63, 0x61, 0x2E, 0x63, 0x72, 0x6C,
    0x30, 0x0E, 0x06, 0x03, 0x55, 0x1D, 0x0F, 0x01,
    0x01, 0xFF, 0x04, 0x04, 0x03, 0x02, 0x05, 0xA0,
    0x30, 0x13, 0x06, 0x0A, 0x2A, 0x86, 0x48, 0x86,
    0xF7, 0x63, 0x64, 0x06, 0x0C, 0x02, 0x01, 0x01,
    0xFF, 0x04, 0x02, 0x05, 0x00, 0x30, 0x0D, 0x06,
    0x09, 0x2A, 0x86, 0x48, 0x86, 0xF7, 0x0D, 0x01,
    0x01, 0x05, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01,
    0x00, 0xB3, 0x47, 0xD3, 0x23, 0x7A, 0x81, 0x72,
    0xD7, 0x22, 0xB7, 0xD8, 0x4C, 0x87, 0x95, 0xA6,
    0xD8, 0xA1, 0x4C, 0xB5, 0x5D, 0x8F, 0x8E, 0x7D,
    0xC0, 0xCD, 0xFE, 0xA6, 0x64, 0x0C, 0x98, 0xF7,
    0x5C, 0x95, 0x4A, 0x2A, 0xB6, 0x15, 0x8D, 0xF1,
    0xAD, 0xB3, 0x20, 0x90, 0x74, 0xC1, 0x5A, 0x46,
    0x18, 0xBD, 0x22, 0xD0, 0xD4, 0x7E, 0x4F, 0x86,
    0x36, 0x34, 0x42, 0xF2, 0xBA, 0x7A, 0x17, 0x7B,
    0xDA, 0x5A, 0xA8, 0x21, 0x89, 0x2C, 0xB1, 0x43,
    0xD6, 0x25, 0x3C, 0xAA, 0xBE, 0x8D, 0x54, 0x06,
    0x44, 0x14, 0x1B, 0x80, 0x87, 0x12, 0xA8, 0xB9,
    0xAC, 0xA3, 0x76, 0xF6, 0xD4, 0xAA, 0xC9, 0x53,
    0x79, 0x9D, 0x19, 0xC8, 0xE0, 0x0B, 0x0B, 0x7B,
    0x00, 0x85, 0x7C, 0xFE, 0xC6, 0x40, 0x2A, 0xE4,
    0xA0, 0x13, 0x15, 0x0E, 0x6F, 0xE4, 0x55, 0x17,
    0x47, 0x25, 0x85, 0x38, 0x96, 0x45, 0xDA, 0x25,
    0x2D, 0xC7, 0x6C, 0x61, 0x33, 0x3A, 0x06, 0xAF,
    0x0B, 0x91, 0x9F, 0x13, 0xB3, 0xFE, 0xC2, 0x9F,
    0x03, 0x74, 0x54, 0x2E, 0x93, 0xC6, 0x9F, 0x60,
    0x47, 0xEB, 0xEE, 0x2B, 0x56, 0x0F, 0xA5, 0x59,
    0xE2, 0xF6, 0x6C, 0x6A, 0x1A, 0xC8, 0x80, 0xD4,
    0x2D, 0x94, 0xE3, 0x64, 0x19, 0x01, 0x80, 0x32,
    0xB5, 0x76, 0x12, 0x1C, 0x2E, 0xC6, 0xDB, 0x99,
    0x02, 0x7F, 0x87, 0x28, 0x11, 0x73, 0x99, 0x45,
    0x20, 0x9A, 0x0F, 0x05, 0xAC, 0xF4, 0x07, 0xED,
    0xD0, 0xD3, 0x1E, 0x2F, 0x32, 0xEC, 0xB4, 0x9C,
    0x8A, 0x29, 0x17, 0x46, 0x23, 0x53, 0xFD, 0xCA,
    0x71, 0xFA, 0x14, 0xCF, 0x81, 0x36, 0x1A, 0x56,
    0x74, 0xBF, 0x1E, 0x8F, 0xD0, 0x69, 0x74, 0xD1,
    0xD8, 0xB1, 0x54, 0x13, 0x6F, 0xC2, 0xAB, 0x1D,
    0x2C, 0xB1, 0x88, 0x7A, 0x75, 0xD7, 0x06, 0x2B,
    0x38, 0x56, 0x65, 0x18, 0x1E, 0x7C, 0xC1, 0xC5,
    0xAB,
};

static const unsigned long sign_sap_setup_cert_size = sizeof sign_sap_setup_cert_data;

int main(void) {
    long ret = 0;
    long err = 0;

    struct FPSAPContextOpaque_ *ctx = NULL;
    if ((ret = FairPlaySAPInit(&ctx, &hw_info))) {
        (void) fprintf(stderr, "FairPlaySAPInit: ret=%ld", ret);
        return -1;
    }

    char *sign_sap_setup_buffer_odata = NULL;
    unsigned long sign_sap_setup_buffer_osize = 0;
    if ((ret = FairPlaySAPExchange(FairPlaySAPExchangeVersionNotPrimed, &hw_info, ctx, sign_sap_setup_cert_data, sign_sap_setup_cert_size, &sign_sap_setup_buffer_odata, &sign_sap_setup_buffer_osize, &err))) {
        (void) fprintf(stderr, "FairPlaySAPExchange 1: ret=%ld", ret);
        return -1;
    }
    if (err != 1) {
        (void) fprintf(stderr, "FairPlaySAPExchange 1: err=%ld", err);
        return -1;
    }

    char sign_sap_setup_buffer_64data[4096] = { '\0' };
    unsigned long sign_sap_setup_buffer_64size = 0;
    if ((ret = base64_encode(sign_sap_setup_buffer_odata, sign_sap_setup_buffer_osize, sign_sap_setup_buffer_64data, sizeof sign_sap_setup_buffer_64data, &sign_sap_setup_buffer_64size))) {
        (void) fprintf(stderr, "base64_encode: ret=%ld", ret);
        return -1;
    }
    sign_sap_setup_buffer_64data[sign_sap_setup_buffer_64size] = '\0';

    if (!FairPlayDisposeStorage(sign_sap_setup_buffer_odata)) {
        sign_sap_setup_buffer_odata = NULL;
        sign_sap_setup_buffer_osize = 0;
    }

    char req_data[8192] = { '\0' };
    unsigned long req_size = 0;
    if ((ret = req_size = sprintf(req_data, "<?xml version=\"1.0\" encoding=\"UTF-8\"?><!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\"><plist version=\"1.0\"><dict><key>sign-sap-setup-buffer</key><data>%s</data></dict></plist>", sign_sap_setup_buffer_64data)) < 0) {
        (void) fprintf(stderr, "sprintf: ret=%ld", ret);
        return -1;
    }

    char *res_data = NULL;
    unsigned long res_size = 0;
    if ((ret = http_post("https://play.itunes.apple.com/WebObjects/MZPlay.woa/wa/signSapSetup", req_data, req_size, &res_data, &res_size))) {
        (void) fprintf(stderr, "http_post: ret=%ld", ret);
        return -1;
    }

    char *data_b = NULL;
    if (!(data_b = strstr(res_data, "<data>"))) {
        (void) fprintf(stderr, "strstr 1: ret=0");
        return -1;
    }
    data_b += sizeof "<data>" - 1;

    char *data_e = NULL;
    if (!(data_e = strstr(res_data, "</data>"))) {
        (void) fprintf(stderr, "strstr 2: ret=0");
        return -1;
    }

    sign_sap_setup_buffer_64size = data_e - data_b;
    (void) strncpy(sign_sap_setup_buffer_64data, data_b, sign_sap_setup_buffer_64size);
    sign_sap_setup_buffer_64data[sign_sap_setup_buffer_64size] = '\0';

    char sign_sap_setup_buffer_idata[4096] = { '\0' };
    unsigned long sign_sap_setup_buffer_isize = 0;
    if ((ret = base64_decode(sign_sap_setup_buffer_64data, sign_sap_setup_buffer_64size, sign_sap_setup_buffer_idata, sizeof sign_sap_setup_buffer_idata, &sign_sap_setup_buffer_isize))) {
        (void) fprintf(stderr, "base64_decode: ret=%ld", ret);
        return -1;
    }
    sign_sap_setup_buffer_idata[sign_sap_setup_buffer_isize] = '\0';

    if ((ret = FairPlaySAPExchange(FairPlaySAPExchangeVersionNotPrimed, &hw_info, ctx, sign_sap_setup_buffer_idata, sign_sap_setup_buffer_isize, &sign_sap_setup_buffer_odata, &sign_sap_setup_buffer_osize, &err))) {
        (void) fprintf(stderr, "FairPlaySAPExchange 2: ret=%ld", ret);
        return -1;
    }
    if (err != 0) {
        (void) fprintf(stderr, "FairPlaySAPExchange 2: err=%ld", err);
        return -1;
    }

    (void) sign_sap_setup_buffer_odata;
    (void) sign_sap_setup_buffer_osize;

    if (!FairPlayDisposeStorage(sign_sap_setup_buffer_odata)) {
        sign_sap_setup_buffer_odata = NULL;
        sign_sap_setup_buffer_osize = 0;
    }

    char sign_sap_buffer_idata[8192] = { '\0' };
    unsigned long sign_sap_buffer_isize = fread(sign_sap_buffer_idata, sizeof(char), sizeof sign_sap_buffer_idata, stdin);
    if ((ret = ferror(stdin))) {
        (void) fprintf(stderr, "fread: ret=%ld", ret);
        return -1;
    }

    char *sign_sap_buffer_odata = NULL;
    unsigned long sign_sap_buffer_osize = 0;
    if ((ret = FairPlaySAPSign(ctx, sign_sap_buffer_idata, sign_sap_buffer_isize, &sign_sap_buffer_odata, &sign_sap_buffer_osize))) {
        (void) fprintf(stderr, "FairPlaySAPSign: ret=%ld", ret);
        return -1;
    }

    (void) fwrite(sign_sap_buffer_odata, sizeof(char), sign_sap_buffer_osize, stdout);
    if ((ret = ferror(stdout))) {
        (void) fprintf(stderr, "fwrite: ret=%ld", ret);
        return -1;
    }

    if (!FairPlayDisposeStorage(sign_sap_buffer_odata)) {
        sign_sap_buffer_odata = NULL;
        sign_sap_buffer_osize = 0;
    }

    if (!FairPlaySAPTeardown(ctx)) {
        ctx = NULL;
    }

    return 0;
}