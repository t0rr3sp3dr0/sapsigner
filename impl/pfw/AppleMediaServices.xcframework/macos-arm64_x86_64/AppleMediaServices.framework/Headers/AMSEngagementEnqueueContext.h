//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSEngagementEnqueueContext_h
#define _AMSEngagementEnqueueContext_h

@import Foundation;

#include "AMSEngagementEnqueueRequest.h"

@interface AMSEngagementEnqueueContext : NSObject

@property unsigned long long signpostID;
@property (retain) NSDate *start;
@property (retain) AMSEngagementEnqueueRequest *request;

/* instance methods */
- (id)init;

@end

#endif /* _AMSEngagementEnqueueContext_h */
