//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSPaymentSheetResult_h
#define _AMSPaymentSheetResult_h

@import Foundation;

#include "AMSBiometricsSignatureResult.h"

@interface AMSPaymentSheetResult : NSObject

@property (retain) NSString *delegateAuthenticateToken;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

/* instance methods */

@end

#endif /* _AMSPaymentSheetResult_h */
