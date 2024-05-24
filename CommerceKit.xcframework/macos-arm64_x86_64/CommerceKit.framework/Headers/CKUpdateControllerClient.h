//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKUpdateControllerClient_h
#define CKUpdateControllerClient_h

@import Foundation;

@protocol ISAvailableUpdatesObserver, ISOSUpdateProgressObserver, ISOSUpdateScanObserver; // @import StoreFoundation;

@interface CKUpdateControllerClient : NSObject <ISOSUpdateProgressObserver, ISAvailableUpdatesObserver, ISOSUpdateScanObserver>

@property (copy) id /* block */ osUpdateProgressHandler;
@property (copy) id /* block */ availableUpdatesObserverBlock;
@property (copy) id /* block */ osUpdateScanObserverBlock;

/* instance methods */
- (void)availableUpdatesDidChangedWithUpdates:(id)_updatesDidChangedWithUpdates osUpdates:(id)_updates badgeCount:(unsigned long long)_count;
- (void)osUpdateScanForTags:(id)_updateScanForTags didProgressWithPercentComplete:(float)_progressWithPercentComplete isFinished:(signed char)_finished error:(id)_error;
- (void)osUpdates:(id)_updates changedProgress:(id)_progress;

@end

#endif /* CKUpdateControllerClient_h */
