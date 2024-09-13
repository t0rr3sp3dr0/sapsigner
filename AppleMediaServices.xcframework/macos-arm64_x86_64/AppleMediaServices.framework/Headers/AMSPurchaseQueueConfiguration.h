//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSPurchaseQueueConfiguration_h
#define _AMSPurchaseQueueConfiguration_h

@import Foundation;

#include "AMSBagProtocol-Protocol.h"

@protocol AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly) id <AMSBagProtocol> bag;
@property (retain) id <AMSPurchaseResponseProtocol> delegate;
@property (retain) Class purchaseTaskClass;

/* instance methods */
- (id)initWithBag:(id)bag;

@end

#endif /* _AMSPurchaseQueueConfiguration_h */
