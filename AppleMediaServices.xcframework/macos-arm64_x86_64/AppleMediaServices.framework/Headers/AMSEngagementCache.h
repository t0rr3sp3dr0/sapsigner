//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSEngagementCache_h
#define _AMSEngagementCache_h

@import Foundation;

#include "AMSEngagementCacheDatabase.h"

@interface AMSEngagementCache : NSObject

@property (retain) AMSEngagementCacheDatabase *database;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)dealloc;
- (id)initWithFileURL:(id)url;
- (void)cacheResponse:(id)response filter:(id)filter expiration:(id)expiration;
- (id)cachedResponseForEvent:(id)event;

@end

#endif /* _AMSEngagementCache_h */
