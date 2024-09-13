//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSFinanceDelegateAuthenticateChallengeResponse_h
#define _AMSFinanceDelegateAuthenticateChallengeResponse_h

@import Foundation;

#include "AMSFinancePerformable-Protocol.h"
#include "AMSURLTaskInfo.h"

@interface AMSFinanceDelegateAuthenticateChallengeResponse : NSObject <AMSFinancePerformable>

@property (retain) NSDictionary *responseDictionary;
@property (retain) AMSURLTaskInfo *taskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (signed char)isDelegateAuthChallengeForTaskInfo:(id)info;

/* instance methods */
- (id)initWithResponseDictionary:(id)dictionary taskInfo:(id)info;
- (id)performWithTaskInfo:(id)info;

@end

#endif /* _AMSFinanceDelegateAuthenticateChallengeResponse_h */
