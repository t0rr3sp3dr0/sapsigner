//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAutomaticDownloadKindsSetTask_h
#define _AMSAutomaticDownloadKindsSetTask_h

@import Foundation;

#include "ACAccount.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSProcessInfo.h"
#include "AMSRequestPresentationDelegate-Protocol.h"
#include "AMSTask.h"
#include "AMSURLProtocolDelegate-Protocol.h"
#include "AMSURLSession.h"

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>

@property (retain) AMSURLSession *session;
@property (readonly) ACAccount *account;
@property (readonly) id <AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSArray *enabledMediaKinds;
@property (readonly, weak) id <AMSRequestPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)perform;
- (void)AMSURLSession:(id)amsurlsession task:(id)task handleAuthenticateRequest:(id)request completion:(id /* block */)completion;
- (void)AMSURLSession:(id)amsurlsession task:(id)task handleDialogRequest:(id)request completion:(id /* block */)completion;
- (id)initWithEnabledMediaKinds:(id)kinds account:(id)account bag:(id)bag;
- (id)initWithEnabledMediaKinds:(id)kinds account:(id)account bag:(id)bag presentationDelegate:(id)delegate;

@end

#endif /* _AMSAutomaticDownloadKindsSetTask_h */
