//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSCardEnrollmentPaymentSessionTask_h
#define _AMSCardEnrollmentPaymentSessionTask_h

@import Foundation;

#include "AMSTask.h"

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask

/* class methods */
+ (id)_paymentServiceURLStringForMerchantURL:(id)url;
+ (id)_performPaymentSessionWithBag:(id)bag isForParentalVerification:(signed char)verification;
+ (void)paymentSessionWithBag:(id)bag completion:(id /* block */)completion;
+ (id)performPaymentSessionEnrollmentWithBag:(id)bag;
+ (id)performPaymentSessionForVerificationWithBag:(id)bag;

@end

#endif /* _AMSCardEnrollmentPaymentSessionTask_h */
