//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSEngagementAppEventFilterModel_h
#define _AMSEngagementAppEventFilterModel_h

@import Foundation;

@interface AMSEngagementAppEventFilterModel : NSObject

@property (readonly) NSDictionary *definition;
@property (readonly) signed char allowsResponse;
@property (readonly) unsigned long long components;

/* class methods */
+ (signed char)matchEvent:(id)event toFilter:(id)filter;

/* instance methods */
- (id)init;
- (id)initWithDefinition:(id)definition;
- (id)exportObject;
- (id)initWithCacheObject:(id)object;
- (signed char)matchesEvent:(id)event;

@end

#endif /* _AMSEngagementAppEventFilterModel_h */
