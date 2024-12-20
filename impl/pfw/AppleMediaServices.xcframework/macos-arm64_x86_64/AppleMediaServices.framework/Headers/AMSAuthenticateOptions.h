//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAuthenticateOptions_h
#define _AMSAuthenticateOptions_h

@import Foundation;

#include "AMSProcessInfo.h"

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding>

@property unsigned long long allowPasswordGeneration;
@property signed char allowSecondaryCredentialSource;
@property (retain) NSString *companionDeviceClientInfo;
@property (retain) NSString *companionDeviceUDID;
@property signed char demoAccountSetup;
@property signed char ephemeral;
@property (copy) NSString *passwordlessToken;
@property long long serviceType;
@property (readonly) signed char remoteProxyAuthentication;
@property (retain) NSString *serviceIdentifier;
@property signed char allowServerDialogs;
@property unsigned long long authenticationType;
@property (copy) NSString *appProvidedContext;
@property (copy) NSDictionary *appProvidedData;
@property (retain) NSString *cancelButtonString;
@property signed char canMakeAccountActive;
@property (retain) NSDictionary *createAccountQueryParams;
@property (retain) AMSProcessInfo *clientInfo;
@property unsigned long long credentialSource;
@property (retain) NSString *debugReason;
@property (retain) NSString *defaultButtonString;
@property (retain) NSString *delegateAuthChallenge;
@property signed char delegateAuthEnabled;
@property signed char enableAccountCreation;
@property (retain) NSDictionary *HTTPHeaders;
@property (retain) NSURL *iconBundleURL;
@property signed char ignoreAccountConversion;
@property signed char forceSyncToPairedWatch;
@property (retain) NSString *logKey;
@property unsigned long long multiUserAuthentication;
@property (retain) NSString *promptTitle;
@property (retain) NSString *proxyAppBundleID;
@property (retain) NSString *proxyAppName;
@property (retain) NSString *reason;
@property (retain) NSString *userAgent;
@property (retain) NSString *userAgentSuffix;
@property signed char usernameEditable;
@property signed char serviceTokenOnly;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)init;
- (signed char)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)presentingViewController;
- (id)mediaType;
- (void)setMediaType:(id)type;
- (id)optionsDictionary;
- (void)setPresentingViewController:(id)controller;
- (void)setAuthKitData:(id)data;
- (id)authKitData;
- (id)initWithOptionsDictionary:(id)dictionary;
- (signed char)isDemoAccountSetup;
- (signed char)isRemoteProxyAuthentication;
- (id)optionsDictionaryForRemoteProxyAuthentication;

@end

#endif /* _AMSAuthenticateOptions_h */