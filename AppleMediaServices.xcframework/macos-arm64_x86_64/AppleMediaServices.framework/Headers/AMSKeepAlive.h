//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSKeepAlive_h
#define _AMSKeepAlive_h

@import Foundation;

#include "AMSRBSKeepAlive.h"
#include "OS_os_transaction-Protocol.h"

@interface AMSKeepAlive : NSObject {
    /* instance variables */
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly) NSString *name;
@property (readonly) long long style;

/* class methods */
+ (void)_handleAssertionExpiration;
+ (signed char)_isRBSAssertionsEnabled;
+ (id)keepAliveWithFormat:(id)format;
+ (id)keepAliveWithName:(id)name;
+ (id)keepAliveWithName:(id)name style:(long long)style;
+ (void)keepAliveWithName:(id)name style:(long long)style block:(id /* block */)block;
+ (id)rbs_keepAliveWithName:(id)name;
+ (id)rbs_keepAliveWithName:(id)name style:(long long)style;
+ (void)rbs_keepAliveWithName:(id)name style:(long long)style block:(id /* block */)block;

/* instance methods */
- (void)dealloc;
- (id)initWithName:(id)name;
- (void)invalidate;
- (id)_cacheKey;
- (id)_assertionName;
- (void)_removeOSTransaction;
- (void)_removeProcessAssertion;
- (void)_startLogTimer;
- (void)_takeOSTransaction;
- (void)_takeProcessAssertion;
- (id)initRBSWithName:(id)name;
- (id)initRBSWithName:(id)name style:(long long)style;
- (id)initWithName:(id)name style:(long long)style;
- (void)rbs_invalidate;

@end

#endif /* _AMSKeepAlive_h */
