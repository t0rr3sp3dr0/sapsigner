//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSURLParser_h
#define _AMSURLParser_h

@import Foundation;

#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"

@interface AMSURLParser : NSObject <AMSBagConsumer>

@property (retain) id <AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)_commerceUIArrayForKey:(id)key;
- (id)_correctURL:(id)url;
- (id)_defaultWebAllowedForURL:(id)url;
- (id)_dynamicUIAllowedForURL:(id)url;
- (id)_legacyWebAllowedForURL:(id)url;
- (signed char)_matchURL:(id)url toPatterns:(id)patterns;
- (void)_waitForPromises:(id)promises block:(id /* block */)block;
- (id)bagContract;
- (id)initWithBag:(id)bag;
- (id)initWithBagContract:(id)contract;
- (id)isCommerceUIURL:(id)uiurl;
- (id)typeForCommerceUIURL:(id)uiurl;
- (id)typeForURL:(id)url;

@end

#endif /* _AMSURLParser_h */