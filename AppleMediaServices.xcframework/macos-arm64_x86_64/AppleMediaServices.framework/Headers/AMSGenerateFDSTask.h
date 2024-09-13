//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSGenerateFDSTask_h
#define _AMSGenerateFDSTask_h

@import Foundation;

#include "ACAccount.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSFDSRequest.h"
#include "AMSTask.h"

@interface AMSGenerateFDSTask : AMSTask

@property (readonly) AMSFDSRequest *request;
@property (readonly) ACAccount *account;
@property (readonly) unsigned long long action;
@property (readonly) id <AMSBagProtocol> bag;
@property (readonly) signed char deviceSupportsAFDSValues;
@property (readonly) signed char deviceSupportsAFDSValuesV2;
@property (readonly) NSString *logKey;
@property (readonly) NSNumber *purchaseIdentifier;

/* class methods */
+ (signed char)deviceSupportsAFDSPaidODIWithBag:(id)bag logKey:(id)key;
+ (signed char)deviceSupportsAFDSV2WithBag:(id)bag logKey:(id)key;

/* instance methods */
- (id)runTask;
- (id)initWithPurchaseInfo:(id)info bag:(id)bag;
- (id)initWithRequest:(id)request bag:(id)bag;

@end

#endif /* _AMSGenerateFDSTask_h */
