//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBiometricsIdentityMapChangeTask_h
#define _AMSBiometricsIdentityMapChangeTask_h

@import Foundation;

#include "ACAccount.h"
#include "AMSTask.h"
#include "AMSURLSession.h"

@interface AMSBiometricsIdentityMapChangeTask : AMSTask

@property (retain) ACAccount *account;
@property (retain) AMSURLSession *session;
@property (retain) NSURLSessionTask *task;

/* instance methods */
- (id)perform;
- (id)initWithAccount:(id)account session:(id)session task:(id)task;

@end

#endif /* _AMSBiometricsIdentityMapChangeTask_h */