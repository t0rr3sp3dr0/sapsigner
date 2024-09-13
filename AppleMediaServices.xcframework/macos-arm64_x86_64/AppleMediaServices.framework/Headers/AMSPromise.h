//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSPromise_h
#define _AMSPromise_h

@import Foundation;

#include "AMSPromiseCompletionBlocks.h"
#include "AMSPromiseResult.h"

@interface AMSPromise : NSObject

@property (retain) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain) AMSPromiseResult *promiseResult;
@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly) signed char cancelled;
@property (readonly) signed char finished;
@property (readonly) signed char timedOut;

/* class methods */
+ (id)promiseWithAll:(id)all;
+ (id)promiseWithAny:(id)any;
+ (void)_configureFlattenedPromise:(id)promise withPromises:(id)promises results:(id)results previousError:(id)error currentPromiseIndex:(unsigned long long)index;
+ (void)_enumeratePromises:(id)promises startingAt:(long long)at block:(id /* block */)block;
+ (signed char)_errorIsCanceledError:(id)error;
+ (signed char)_errorIsTimeOutError:(id)error;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)result;
+ (id)promiseWithAll:(id)all timeout:(double)timeout;
+ (id)promiseWithAny:(id)any timeout:(double)timeout;
+ (id)promiseWithError:(id)error;
+ (id)promiseWithFlattenedPromises:(id)promises;
+ (id)promiseWithPromiseResult:(id)result;
+ (id)promiseWithResult:(id)result;
+ (id)promiseWithSome:(id)some;
+ (id)promiseWithSome:(id)some timeout:(double)timeout;
+ (id)unwrappedPromiseWithPromise:(id)promise;

/* instance methods */
- (id)init;
- (void)waitUntilFinished;
- (signed char)_isFinished;
- (signed char)cancel;
- (signed char)isCancelled;
- (signed char)isFinished;
- (id)resultWithError:(id *)error;
- (signed char)finishWithError:(id)error;
- (signed char)finishWithResult:(id)result error:(id)error;
- (void)addFinishBlock:(id /* block */)block;
- (id)initWithTimeout:(double)timeout;
- (void)addSuccessBlock:(id /* block */)block;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (signed char)finishWithResult:(id)result;
- (id)resultBeforeDate:(id)date error:(id *)error;
- (id)resultWithTimeout:(double)timeout error:(id *)error;
- (id)catchWithBlock:(id /* block */)block;
- (void)addBlock:(id /* block */)block orCallWithResult:(id /* block */)result;
- (void)addErrorBlock:(id /* block */)block;
- (id)binaryPromiseAdapter;
- (id /* block */)boolCompletionHandlerAdapter;
- (id)continueWithBlock:(id /* block */)block;
- (signed char)finishWithPromise:(id)promise;
- (signed char)finishWithPromiseResult:(id)result;
- (signed char)isTimedOut;
- (id)mutablePromiseAdapter;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (id)promiseWithTimeout:(double)timeout;
- (void)resultBeforeDate:(id)date completion:(id /* block */)completion;
- (void)resultWithCompletion:(id /* block */)completion;
- (void)resultWithTimeout:(double)timeout completion:(id /* block */)completion;
- (id)thenWithBlock:(id /* block */)block;
- (void)waitUntilFinishedWithTimeout:(double)timeout;

@end

#endif /* _AMSPromise_h */
