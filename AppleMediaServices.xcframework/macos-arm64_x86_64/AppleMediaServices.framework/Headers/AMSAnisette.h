//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAnisette_h
#define _AMSAnisette_h

@import Foundation;

#include "AMSBagConsumer-Protocol.h"

@interface AMSAnisette : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (unsigned long long)_accountIDForType:(long long)type account:(id)account;
+ (void)_bagDomainExistsForURL:(id)url type:(long long)type bag:(id)bag completion:(id /* block */)completion;
+ (id)_eraseProvisioningForType:(long long)type account:(id)account;
+ (id)_handleActionName:(id)name actionData:(id)data account:(id)account type:(long long)type bag:(id)bag;
+ (id)_headersForRequest:(id)request account:(id)account type:(long long)type;
+ (id)_provisionMachineWithActionData:(id)data type:(long long)type account:(id)account bag:(id)bag;
+ (signed char)_shouldRetryAfterError:(id)error;
+ (id)_syncMachineWithActionData:(id)data type:(long long)type account:(id)account bag:(id)bag;
+ (id)bagKeySet;
+ (id)createBagForSubProfile;
+ (signed char)handleResponse:(id)response account:(id)account type:(long long)type bag:(id)bag;
+ (id)handleResponse:(id)response type:(long long)type bag:(id)bag account:(id)account;
+ (id)headersForRequest:(id)request account:(id)account type:(long long)type bag:(id)bag;

@end

#endif /* _AMSAnisette_h */
