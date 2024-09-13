//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBagNetworkTask_h
#define _AMSBagNetworkTask_h

@import Foundation;

#include "AMSBagAccountProvider-Protocol.h"
#include "AMSLazyPromise.h"
#include "AMSProcessInfo.h"
#include "AMSTask.h"
#include "AMSURLProtocolDelegate-Protocol.h"

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>

@property (readonly, nonatomic) id <AMSBagAccountProvider> accountProvider;
@property (readonly, nonatomic) AMSLazyPromise *URLSessionPromise;
@property (readonly, nonatomic) NSString *logKey;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_URLCookieNamesForProfile:(id)profile;
+ (id)_bagDataByApplyingOverridesToBagData:(id)data;
+ (id)_cookiesForNames:(id)names clientInfo:(id)info account:(id)account;
+ (id)_defaultURLCookieNames;
+ (id)_queryItemsForClientInfo:(id)info profile:(id)profile profileVersion:(id)version cookieNames:(id)names account:(id)account storefront:(id)storefront;
+ (id)_queryItemsForClientInfo:(id)info profile:(id)profile profileVersion:(id)version cookieNames:(id)names accountProvider:(id)provider;
+ (id)_requestIdentifierForQueryItems:(id)items;
+ (id)_requestIdentifierForQueryItems:(id)items prefix:(id)prefix;
+ (id)_setStorefrontFromURLResponse:(id)urlresponse bagData:(id)data;
+ (void)_setURLCookieNames:(id)names forProfile:(id)profile;
+ (signed char)_shouldReloadDataForOriginalCookies:(id)cookies newCookies:(id)cookies;
+ (id)requestPartialIdentifierForClientInfo:(id)info profile:(id)profile profileVersion:(id)version;

/* instance methods */
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (id)_createRequestWithQueryItems:(id)items;
- (id)_performFetchWithAttemptedCount:(unsigned long long)count account:(id)account storefront:(id)storefront;
- (signed char)_shouldRetryForResult:(id)result cookieNames:(id)names urlCookies:(id)cookies responseStorefront:(id)storefront;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)data;
- (id)initWithClientInfo:(id)info profile:(id)profile profileVersion:(id)version accountProvider:(id)provider;
- (id)performFetch;

@end

#endif /* _AMSBagNetworkTask_h */
