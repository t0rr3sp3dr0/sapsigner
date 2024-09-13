//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMediaTokenServiceStore_h
#define _AMSMediaTokenServiceStore_h

@import Foundation;

#include "AMSMediaToken.h"
#include "AMSMediaTokenServiceKeychainStore.h"
#include "os_unfair_lock_s.h"

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s accessLock;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (readonly, nonatomic) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (readonly, nonatomic) NSString *notificationObject;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;
@property (readonly, nonatomic) signed char usingAccessControlIdentifier;

/* class methods */
+ (signed char)_hasAppleGroupEnabled;

/* instance methods */
- (void)dealloc;
- (id)_keychainAccessGroup;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (void)_mediaTokenChanged:(id)changed;
- (id)_mediaTokenChangedNotificationName;
- (id)_mediaTokenFromUserDefaults;
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;
- (void)deleteToken;
- (id)initWithClientIdentifier:(id)identifier keychainAccessGroup:(id)group;
- (id)initWithClientIdentifier:(id)identifier keychainAccessGroup:(id)group usingAccessControlIdentifier:(signed char)identifier;
- (id)initWithClientIdentifier:(id)identifier keychainStore:(id)store;
- (id)retrieveToken;
- (void)storeToken:(id)token;

@end

#endif /* _AMSMediaTokenServiceStore_h */
