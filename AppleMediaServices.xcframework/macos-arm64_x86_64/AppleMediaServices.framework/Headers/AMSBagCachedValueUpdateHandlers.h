//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBagCachedValueUpdateHandlers_h
#define _AMSBagCachedValueUpdateHandlers_h

@import Foundation;

@interface AMSBagCachedValueUpdateHandlers : NSObject { // (Swift)
    /* instance variables */
    //  handlerQueue;
    //  lock;
}

/* class methods */
+ (unsigned long long)uninitializedToken;

/* instance methods */
- (id)init;
- (unsigned long long)addHandlerWithKeys:(id)keys initialValues:(id)values handler:(id /* block */)handler;
- (unsigned long long)addHandlerWithKeys:(id)keys initialValues:(id)values metricsTracker:(id)tracker handler:(id /* block */)handler;
- (void)callHandlersUsingNewBagDictionary:(id)dictionary changedKeys:(id)keys;
- (id)initWithHandlerQueue:(id)queue;
- (void)removeHandlerWithToken:(unsigned long long)token;

@end

#endif /* _AMSBagCachedValueUpdateHandlers_h */