//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAuthenticateTaskCoordinator_h
#define _AMSAuthenticateTaskCoordinator_h

@import Foundation;

@interface AMSAuthenticateTaskCoordinator : NSObject

/* class methods */
+ (id)internalQueue;
+ (id)promiseStore;

/* instance methods */
- (void)_addToStoreRequest:(id)request promise:(id)promise;
- (id)_authenticateTaskForItem:(id)item;
- (id)_authenticateTaskForItem:(id)item authenticationResults:(id)results;
- (id)_enqueueItem:(id)item handleAuthenticationWithBlock:(id /* block */)block;
- (id)_handleAuthenticateRequestWithItem:(id)item authenticationResults:(id)results;
- (id)_promiseStorePairForRequest:(id)request;
- (id)_promiseWithResultsForRequest:(id)request;
- (void)_removeFromPromiseStore:(id)store;
- (id)enqueueAuthenticationRequest:(id)request handleAuthenticationWithBlock:(id /* block */)block;
- (id)handleRequest:(id)request;
- (id)handleRequestDictionary:(id)dictionary;

@end

#endif /* _AMSAuthenticateTaskCoordinator_h */