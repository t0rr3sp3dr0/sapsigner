//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMediaRequestEncoder_h
#define _AMSMediaRequestEncoder_h

@import Foundation;

#include "ACAccount.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSMediaTokenServiceProtocol-Protocol.h"
#include "AMSProcessInfo.h"
#include "AMSRequestEncoding-Protocol.h"
#include "AMSResponseDecoding-Protocol.h"
#include "AMSURLRequestEncoder.h"

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>

@property (readonly) AMSURLRequestEncoder *requestEncoder;
@property signed char disableAccountMediaTypeComponent;
@property signed char URLKnownToBeTrusted;
@property (retain) ACAccount *account;
@property (readonly) id <AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property signed char disableResponseDecoding;
@property (retain) NSString *gsTokenIdentifier;
@property (retain) NSString *logKey;
@property long long requestEncoding;
@property (retain) id <AMSResponseDecoding> responseDecoder;
@property (readonly) id <AMSMediaTokenServiceProtocol> tokenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)requestWithURL:(id)url;
- (id)initWithTokenService:(id)service bag:(id)bag;
- (id)requestByEncodingRequest:(id)request parameters:(id)parameters;
- (id)requestWithComponents:(id)components;

@end

#endif /* _AMSMediaRequestEncoder_h */
