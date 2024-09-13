//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMarketingItemTaskURLBuilder_h
#define _AMSMarketingItemTaskURLBuilder_h

@import Foundation;

#include "AMSBagConsumer-Protocol.h"

@interface AMSMarketingItemTaskURLBuilder : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;

/* instance methods */
- (id)_additionalQueryItems;
- (id)_countryCodeFromBag:(id)bag;
- (id)_formattedURLPathWithBag:(id)bag;
- (id)_languageTagFromBag:(id)bag fallback:(id)fallback;
- (id)_realmOverridesFromBag:(id)bag;
- (id)_stringForKey:(id)key fromBag:(id)bag;
- (id)_urlPathFromBag:(id)bag;
- (id)urlWithServiceType:(id)type placement:(id)placement bag:(id)bag hydrateRelatedContents:(signed char)contents offerHints:(id)hints additionalParameters:(id)parameters;

@end

#endif /* _AMSMarketingItemTaskURLBuilder_h */
