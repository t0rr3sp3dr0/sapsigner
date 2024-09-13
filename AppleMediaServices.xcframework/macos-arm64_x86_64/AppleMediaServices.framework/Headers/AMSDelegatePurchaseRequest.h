//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSDelegatePurchaseRequest_h
#define _AMSDelegatePurchaseRequest_h

@import Foundation;

#include "AMSDelegateAuthenticateRequest.h"
#include "AMSPurchaseResult.h"

@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest <NSSecureCoding>

@property (copy) NSString *deviceName;
@property (retain) AMSPurchaseResult *purchaseResult;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithPurchaseResult:(id)result challenge:(id)challenge userAgent:(id)agent;

@end

#endif /* _AMSDelegatePurchaseRequest_h */
