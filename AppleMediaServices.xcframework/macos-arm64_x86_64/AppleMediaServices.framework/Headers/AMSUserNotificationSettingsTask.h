//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSUserNotificationSettingsTask_h
#define _AMSUserNotificationSettingsTask_h

@import Foundation;

#include "ACAccount.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSProcessInfo.h"
#include "AMSTask.h"

@interface AMSUserNotificationSettingsTask : AMSTask <AMSBagConsumer>

@property (retain) ACAccount *account;
@property (retain) id <AMSBagProtocol> bag;
@property (readonly) NSString *clientIdentifier;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;

/* instance methods */
- (id)_url;
- (id)updateSettings:(id)settings;
- (id)_countryCodeFromBag:(id)bag;
- (id)_generateParametersForItems:(id)items;
- (id)_stringForKey:(id)key fromBag:(id)bag;
- (id)fetchAllSettings;
- (id)initWithIdentifier:(id)identifier clientIdentifier:(id)identifier account:(id)account bag:(id)bag;

@end

#endif /* _AMSUserNotificationSettingsTask_h */
