//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSCurrentDeviceInfo_h
#define _AMSCurrentDeviceInfo_h

@import Foundation;

#include "AMSDeviceInfo-Protocol.h"
#include "AMSPromise.h"

@class AMSPhoneNumberContextInfo;

@interface AMSCurrentDeviceInfo : NSObject <AMSDeviceInfo>

@property (readonly) NSString *buildVersion;
@property (readonly) NSString *compatibleProductType;
@property (readonly) NSString *deviceGUID;
@property (readonly) NSString *deviceName;
@property (readonly) NSString *hardwarePlatform;
@property (readonly) NSString *localIPAddress;
@property (readonly) NSString *macAddress;
@property (readonly) NSData *macAddressData;
@property (readonly) NSString *MLBSerialNumber;
@property (readonly) NSString *modelPartNumber;
@property (readonly) NSString *operatingSystem;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *regionCode;
@property (readonly) NSString *ROMAddress;
@property (readonly) signed char runningInStoreDemoMode;
@property (readonly) NSNumber *screenScale;
@property (readonly) NSNumber *screenHeight;
@property (readonly) NSNumber *screenWidth;
@property (readonly) signed char secureElementAvailable;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *uniqueDeviceId;
@property (readonly) signed char deviceIsAudioAccessory;
@property (readonly) signed char deviceIsAppleTV;
@property (readonly) signed char deviceIsAppleWatch;
@property (readonly) signed char deviceIsiPad;
@property (readonly) signed char deviceIsiPhone;
@property (readonly) signed char deviceIsiPod;
@property (readonly) signed char deviceIsMac;
@property (readonly) signed char deviceIsRealityDevice;
@property (readonly) signed char deviceIsBundle;
@property (readonly) NSArray *carrierNames;
@property (readonly) NSString *name;
@property (readonly) NSString *phoneNumber;
@property (readonly) AMSPromise *carrierNamesPromise;
@property (readonly) signed char deviceIsAppleTVSimulator;
@property (readonly) signed char deviceIsAppleWatchSimulator;
@property (readonly) signed char deviceIsiPadSimulator;
@property (readonly) signed char deviceIsiPhoneSimulator;
@property (readonly) signed char deviceIsiPodSimulator;
@property (readonly) signed char deviceIsRealityDeviceSimulator;
@property (readonly) AMSPhoneNumberContextInfo *voicePreferredPhoneNumberContextInfo;
@property (readonly) AMSPromise *voicePreferredPACToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (signed char)isRunningInStoreDemoMode;
- (signed char)isSecureElementAvailable;

@end

#endif /* _AMSCurrentDeviceInfo_h */