//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSStoreReviewGatingController_h
#define _AMSStoreReviewGatingController_h

@import Foundation;

#include "AMSBagProtocol-Protocol.h"

@interface AMSStoreReviewGatingController : NSObject { // (Swift)
    /* instance variables */
    //  ledger;
}

@property (nonatomic, readonly) id <AMSBagProtocol> bag;

/* instance methods */
- (id)init;
- (void)isEnabledWithCompletionHandler:(id /* block */)handler;
- (void)canPromptWithCompletionHandler:(id /* block */)handler;
- (void)didPromptWithCompletionHandler:(id /* block */)handler;
- (void)didEnterForegroundWithCompletionHandler:(id /* block */)handler;
- (id)initWithBag:(id)bag;

@end

#endif /* _AMSStoreReviewGatingController_h */