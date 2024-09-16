//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef __PaymentSheetState_h
#define __PaymentSheetState_h

@import Foundation;

#include "AMSBiometricsSignatureResult.h"

@interface _PaymentSheetState : NSObject

@property (retain) NSError *error;
@property signed char didAuthorizePayment;
@property signed char didBiometricsLockout;
@property unsigned long long cancellationType;
@property signed char didPresent;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

/* instance methods */
- (id)init;

@end

#endif /* __PaymentSheetState_h */