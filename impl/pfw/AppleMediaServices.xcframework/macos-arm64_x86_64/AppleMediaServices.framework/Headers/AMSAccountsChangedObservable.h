//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAccountsChangedObservable_h
#define _AMSAccountsChangedObservable_h

@import Foundation;

#include "ACAccount.h"
#include "AMSObservable.h"
#include "os_unfair_lock_s.h"

@interface AMSAccountsChangedObservable : NSObject

@property (retain) AMSObservable *observable;
@property (readonly) struct os_unfair_lock_s notificationsLock;
@property (readonly) ACAccount *account;
@property (readonly) NSString *accountTypeIdentifier;

/* class methods */
+ (id)sharedInstance;
+ (void)_processChangedAccount:(id)account;
+ (id)createdObservables;
+ (id)createdObservablesAccessQueue;
+ (id)sharedLocalAccountInstance;

/* instance methods */
- (void)dealloc;
- (id)initWithAccount:(id)account;
- (void)_accountStoreDidChange:(id)change;
- (void)subscribe:(id)subscribe;
- (id)_initWithAccount:(id)account accountTypeIdentifier:(id)identifier;
- (void)_processChangedAccount:(id)account;
- (signed char)_shouldNotifyObserversForChangedAccount:(id)account;
- (id)initWithAccountTypeIdentifier:(id)identifier;
- (void)unsubscribe:(id)unsubscribe;

@end

#endif /* _AMSAccountsChangedObservable_h */
