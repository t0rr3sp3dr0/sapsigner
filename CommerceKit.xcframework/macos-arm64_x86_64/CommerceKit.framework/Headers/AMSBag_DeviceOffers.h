//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef AMSBag_DeviceOffers_h
#define AMSBag_DeviceOffers_h

@import Foundation;

#include "CKStoreClient.h"

@class AMSBagValue; // @import AppleMediaServices;

@protocol AMSDeviceOfferBagContract; // @import AppleMediaServices;

@interface AMSBag_DeviceOffers : NSObject <AMSDeviceOfferBagContract>

@property (retain, nonatomic) CKStoreClient *storeClient;
@property (readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStoreClient:(id)_storeClient;

@end

#endif /* AMSBag_DeviceOffers_h */
