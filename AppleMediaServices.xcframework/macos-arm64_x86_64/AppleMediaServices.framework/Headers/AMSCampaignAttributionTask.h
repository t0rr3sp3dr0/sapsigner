//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSCampaignAttributionTask_h
#define _AMSCampaignAttributionTask_h

@import Foundation;

#include "ACAccount.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSCampaignAttributor.h"
#include "AMSProcessInfo.h"
#include "AMSTask.h"
#include "AMSURLSession.h"

@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer>

@property (readonly) AMSURLSession *URLSession;
@property (retain, nonatomic) AMSCampaignAttributor *campaignAttributor;
@property (retain) ACAccount *account;
@property (readonly) id <AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (copy) NSArray *additionalQueryItems;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (signed char)_isCampaignAttributorV2Enabled;
+ (id)bagKeySet;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)perform;
- (id)_queryItemNames;
- (id)_buildProcessRedirectURLWithEndpointURL:(id)url error:(id *)error;
- (id)_encodeRequestForURL:(id)url error:(id *)error;
- (id)_parseAllowedQueryParamsFromInfo:(id)info error:(id *)error;
- (id)_parseCookiesFromResult:(id)result;
- (id)_parseEndpointURLFromInfo:(id)info error:(id *)error;
- (id)_parseRedirectURLFromResult:(id)result error:(id *)error;
- (id)_processRedirectWithEndpointURL:(id)url error:(id *)error;
- (id)_processRedirectWithRequest:(id)request error:(id *)error;
- (id)_retrieveProcessRedirectInfoWithError:(id *)error;
- (void)_setAccountCookies:(id)cookies;
- (signed char)_validateAllowlist:(id)allowlist error:(id *)error;
- (id)initWithURL:(id)url bag:(id)bag;
- (id)initWithURL:(id)url bag:(id)bag URLSession:(id)urlsession;

@end

#endif /* _AMSCampaignAttributionTask_h */