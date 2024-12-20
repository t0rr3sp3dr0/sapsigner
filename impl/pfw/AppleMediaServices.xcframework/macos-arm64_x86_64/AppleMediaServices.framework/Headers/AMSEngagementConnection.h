//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSEngagementConnection_h
#define _AMSEngagementConnection_h

@import Foundation;

#include "AMSEngagementClientProtocol-Protocol.h"
#include "AMSEngagementServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

/* instance methods */
- (void)dealloc;
- (id)initWithNotificationCenter:(id)center;
- (id)proxy;
- (id)_newRemoteConnection;
- (void)treatmentStoreServiceWithReply:(id /* block */)reply;
- (id)_makeExportedClientConnectionInterface;
- (id)_makeRemoteConnectionInterface;
- (void)_removeRemoteConnection;
- (void)beginObservingMessages;
- (void)contentInfoForApp:(id)app cacheKey:(id)key version:(id)version reply:(id /* block */)reply;
- (void)enqueueWithRequest:(id)request completion:(id /* block */)completion;
- (void)handlePushedEvent:(id)event;
- (void)notifyBlockedMessages:(id)messages;
- (oneway void)syncMetricsIdentifiers;
- (void)syncWithRequest:(id)request completion:(id /* block */)completion;
- (void)treatmentsDidSyncronize;

@end

#endif /* _AMSEngagementConnection_h */