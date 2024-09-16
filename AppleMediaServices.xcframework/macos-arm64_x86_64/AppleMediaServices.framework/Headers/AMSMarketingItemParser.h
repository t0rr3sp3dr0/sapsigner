//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMarketingItemParser_h
#define _AMSMarketingItemParser_h

@import Foundation;

@interface AMSMarketingItemParser : NSObject

/* class methods */
+ (id)selectionFromRawMarketingItems:(id)items;
+ (id)_rawMarketingItemSelectionFromRawMarketingItems:(id)items serviceType:(id)type placement:(id)placement engagementService:(id)service;
+ (id)selectionFromMarketingItems:(id)items;
+ (id)selectionFromRawMarketingItems:(id)items serviceType:(id)type placement:(id)placement;

@end

#endif /* _AMSMarketingItemParser_h */