//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSNetworkQualityInquiry_h
#define _AMSNetworkQualityInquiry_h

@import Foundation;

#include "AMSPromise.h"
#include "NWNetworkOfInterestManagerDelegate-Protocol.h"

@class NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface AMSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    /* instance variables */
    NSArray *_lastKnownReports;
    long long _lastReportRefreshTimestamp;
    AMSPromise *_currentInvestigation;
}

@property (readonly, nonatomic) NWNetworkOfInterestManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *knownNetworks;
@property (retain, nonatomic) NSMutableArray *knownNetworksReadyHandlers;

/* class methods */
+ (id)sharedInstance;
+ (signed char)isEntitled;
+ (id)lastConnectionReport;
+ (id)reportForTaskTimingData:(id)data fromReports:(id)reports;
+ (void)updateLastConnectionReportWithTask:(id)task;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)drainKnownNetworksReadyHandlers;
- (signed char)areKnownNetworksReady;
- (void)didStartTrackingNOI:(id)noi;
- (void)didStopTrackingAllNOIs:(id)nois;
- (void)didStopTrackingNOI:(id)noi;
- (id)investigateNetworks;
- (void)performWhenKnownNetworksReady:(id /* block */)ready;

@end

#endif /* _AMSNetworkQualityInquiry_h */
