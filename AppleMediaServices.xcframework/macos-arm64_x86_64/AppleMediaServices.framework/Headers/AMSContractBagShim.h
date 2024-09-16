//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSContractBagShim_h
#define _AMSContractBagShim_h

@import Foundation;

#include "AMSBagProtocol-Protocol.h"
#include "AMSProcessInfo.h"

@interface AMSContractBagShim : NSObject <AMSBagProtocol>

@property (retain) NSObject *bagContract;
@property (readonly) signed char expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_callSelector:(SEL)selector onBagContract:(id)contract;

/* instance methods */
- (id)URLForKey:(id)key;
- (id)arrayForKey:(id)key;
- (id)boolForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (id)stringForKey:(id)key;
- (id)integerForKey:(id)key;
- (id)doubleForKey:(id)key;
- (signed char)isLoaded;
- (signed char)isExpired;
- (id)_bagValueForBagKey:(id)key bagValueType:(unsigned long long)type;
- (SEL)_selectorForBagKey:(id)key;
- (void)createSnapshotWithCompletion:(id /* block */)completion;
- (id)initWithBagContract:(id)contract;

@end

#endif /* _AMSContractBagShim_h */