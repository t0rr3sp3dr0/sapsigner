//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMetricsFigaroFlushTask_h
#define _AMSMetricsFigaroFlushTask_h

@import Foundation;

#include "AMSBagProtocol-Protocol.h"
#include "AMSMetricsDataSource-Protocol.h"
#include "AMSMetricsFlushTask-Protocol.h"
#include "AMSPromise.h"
#include "AMSTask.h"
#include "AMSURLSession.h"
#include "os_unfair_lock_s.h"

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushTask> {
    /* instance variables */
    AMSPromise *_currentCancellableDataTaskPromise;
    struct os_unfair_lock_s _currentCancellableDataTaskPromiseLock;
}

@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (readonly) id <AMSBagProtocol> bag;
@property (readonly) id <AMSMetricsDataSource> dataSource;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) signed char includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) unsigned long long metricsSigningFlavour;
@property (readonly) signed char cancelled;

/* instance methods */
- (signed char)cancel;
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)count topic:(id)topic maxBatchSize:(long long)size requestCount:(unsigned long long)count flushedEventCount:(unsigned long long)count config:(id)config;
- (id)_mescalSignatureWithBodyData:(id)data error:(id *)error;
- (id)_nextBatchWithConfig:(id)config topic:(id)topic maxBatchSize:(long long)size;
- (id)_postBatch:(id)batch;
- (signed char)_shouldClearEventsDespiteError:(id)error result:(id)result;
- (id)initWithDataSource:(id)source bag:(id)bag;
- (id)performFlush;

@end

#endif /* _AMSMetricsFigaroFlushTask_h */
