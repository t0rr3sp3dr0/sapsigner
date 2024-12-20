//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMetricsFlushTask_Protocol_h
#define _AMSMetricsFlushTask_Protocol_h

@import Foundation;

#include "AMSMetricsFlushStrategy-Protocol.h"

@protocol AMSMetricsFlushTask <AMSMetricsFlushStrategy>

@required

@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) signed char includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) unsigned long long metricsSigningFlavour;

/* required instance methods */
- (id)initWithDataSource:(id)source bag:(id)bag;

@optional

@end

#endif /* _AMSMetricsFlushTask_Protocol_h */