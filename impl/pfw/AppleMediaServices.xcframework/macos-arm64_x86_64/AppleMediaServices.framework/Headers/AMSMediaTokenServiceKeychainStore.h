//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMediaTokenServiceKeychainStore_h
#define _AMSMediaTokenServiceKeychainStore_h

@import Foundation;

@interface AMSMediaTokenServiceKeychainStore : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;

/* instance methods */
- (struct __CFDictionary *)_copyKeychainQuery;
- (signed char)_removeTokenFromKeychain;
- (signed char)deleteToken;
- (id)initWithClientIdentifier:(id)identifier keychainAccessGroup:(id)group;
- (id)retrieveToken;
- (signed char)storeToken:(id)token;

@end

#endif /* _AMSMediaTokenServiceKeychainStore_h */