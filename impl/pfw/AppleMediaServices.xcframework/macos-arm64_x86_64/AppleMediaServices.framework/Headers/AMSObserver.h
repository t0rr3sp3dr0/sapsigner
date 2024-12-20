//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSObserver_h
#define _AMSObserver_h

@import Foundation;

@interface AMSObserver : NSObject

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ failureBlock;
@property (copy) id /* block */ resultBlock;

/* instance methods */
- (id)initWithResultBlock:(id /* block */)block completionBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)_sendCompletionUsingQueue:(id)queue;
- (void)_sendFailure:(id)failure usingQueue:(id)queue;
- (void)_sendResult:(id)result usingQueue:(id)queue;
- (id)initWithResultBlock:(id /* block */)block;

@end

#endif /* _AMSObserver_h */