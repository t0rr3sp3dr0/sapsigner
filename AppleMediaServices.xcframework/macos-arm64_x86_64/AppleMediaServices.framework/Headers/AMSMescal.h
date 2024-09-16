//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMescal_h
#define _AMSMescal_h

@import Foundation;

#include "AMSBagConsumer-Protocol.h"

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (signed char)verifyTask:(id)task data:(id)data type:(long long)type bag:(id)bag error:(id *)error;
+ (id)_DAAPActionsForURLBagActions:(id)actions;
+ (signed char)_matchSignSapURL:(id)url bagDictionary:(id)dictionary error:(id *)error;
+ (id)_matchSignedActions:(id)actions withURL:(id)url error:(id *)error;
+ (id)_signedActionDataFromRequest:(id)request policy:(id)policy;
+ (id)bagKeySet;
+ (id)createBagForSubProfile;
+ (signed char)primeTheConnectionWithBag:(id)bag error:(id *)error;
+ (signed char)primeTheConnectionWithContract:(id)contract error:(id *)error;
+ (signed char)primeTheConnectionWithContract:(id)contract logKey:(id)key error:(id *)error;
+ (signed char)shouldReprimeConnectionWithResult:(id)result;
+ (id)signatureFromData:(id)data type:(long long)type bag:(id)bag error:(id *)error;
+ (id)signatureFromData:(id)data type:(long long)type bagContract:(id)contract error:(id *)error;
+ (id)signatureFromData:(id)data type:(long long)type bagContract:(id)contract logKey:(id)key error:(id *)error;
+ (id)signatureUsingRequest:(id)request type:(long long)type bag:(id)bag error:(id *)error;
+ (id)signatureUsingRequest:(id)request type:(long long)type bagContract:(id)contract error:(id *)error;
+ (id)signatureUsingRequest:(id)request type:(long long)type bagContract:(id)contract logKey:(id)key error:(id *)error;
+ (signed char)verifyTask:(id)task data:(id)data type:(long long)type bagContract:(id)contract error:(id *)error;
+ (signed char)verifyTask:(id)task data:(id)data type:(long long)type bagContract:(id)contract logKey:(id)key error:(id *)error;

@end

#endif /* _AMSMescal_h */