//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSDelegatePaymentSheetTask_h
#define _AMSDelegatePaymentSheetTask_h

@import Foundation;

#include "AMSDelegatePaymentSheetRequest.h"
#include "AMSPaymentSheetTask.h"
#include "AMSPromise.h"

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask

@property (retain) AMSPromise *paymentSheetPromise;
@property (retain) AMSDelegatePaymentSheetRequest *request;

/* instance methods */
- (id)perform;
- (id)initWithRequest:(id)request bag:(id)bag;

@end

#endif /* _AMSDelegatePaymentSheetTask_h */
