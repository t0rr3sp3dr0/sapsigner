//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSHTTPArchiveService_h
#define _AMSHTTPArchiveService_h

@import Foundation;

@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)info;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)_createRemoteConnection;
- (id)_createProxy;
- (void)_removeRemoteConnection;

@end

#endif /* _AMSHTTPArchiveService_h */