//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSLazyPromise_h
#define _AMSLazyPromise_h

@import Foundation;

#include "AMSPromise.h"

@interface AMSLazyPromise : AMSPromise

@property (copy) id /* block */ block;
@property signed char executedBlock;
@property double timeout;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (id)resultWithError:(id *)error;
- (void)addFinishBlock:(id /* block */)block;
- (void)addSuccessBlock:(id /* block */)block;
- (id)resultBeforeDate:(id)date error:(id *)error;
- (id)resultWithTimeout:(double)timeout error:(id *)error;
- (signed char)_runBlock;
- (void)addBlock:(id /* block */)block orCallWithResult:(id /* block */)result;
- (void)addErrorBlock:(id /* block */)block;
- (id)initWithTimeout:(double)timeout block:(id /* block */)block;

@end

#endif /* _AMSLazyPromise_h */
