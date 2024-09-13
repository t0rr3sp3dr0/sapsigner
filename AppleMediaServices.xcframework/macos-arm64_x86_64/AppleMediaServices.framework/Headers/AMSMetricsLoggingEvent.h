//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMetricsLoggingEvent_h
#define _AMSMetricsLoggingEvent_h

@import Foundation;

#include "AMSMetricsEvent.h"

@interface AMSMetricsLoggingEvent : AMSMetricsEvent <NSMutableCopying>

@property (copy) NSDictionary *breadcrumbs;
@property (readonly) NSString *category;
@property (copy) NSString *clientApp;
@property (copy) NSString *clientBuildType;
@property (copy) NSString *currentProcess;
@property (copy) NSString *engagementEventType;
@property (readonly) NSError *error;
@property long long errorCode;
@property (copy) NSString *errorDomain;
@property (copy) NSString *errorMessage;
@property (copy) NSString *errorTitle;
@property long long errorUserInfoCryptoCode;
@property signed char errorUserInfoEngagementPresented;
@property long long errorUserInfoServerErrorCode;
@property long long errorUserInfoStatusCode;
@property (copy) NSArray *eventDestinations;
@property double eventEndTime;
@property signed char eventInlineInterruption;
@property (copy) NSString *eventParamEventType;
@property (copy) NSString *eventParamItemId;
@property (copy) NSString *eventParamProductType;
@property (copy) NSString *eventParamSource;
@property (copy) NSString *eventParamSuccess;
@property (copy) NSString *eventPlacement;
@property (copy) NSString *eventServiceType;
@property double eventStartTime;
@property (copy, nonatomic) NSDictionary *jsVersions;
@property (copy) NSArray *jsVersionMap;
@property (readonly) NSString *lastBreadcrumb;
@property (readonly) double lastBreadcrumbDuration;
@property long long logLevel;
@property (copy) NSString *originatingURL;
@property (copy) NSString *originatingURLParamBagProfile;
@property (copy) NSString *originatingURLParamBagProfileVersion;
@property (copy) NSString *releaseVersion;
@property (readonly) NSString *subsystem;
@property (readonly) NSMutableDictionary *underlyingDictionaryForSentry;
@property long long underlyingErrorCode;
@property (copy) NSString *underlyingErrorDomain;
@property (copy) NSString *underlyingErrorMessage;
@property (copy) NSString *underlyingErrorTitle;
@property long long underlyingErrorUserInfoCryptoCode;
@property signed char underlyingErrorUserInfoEngagementPresented;
@property long long underlyingErrorUserInfoServerErrorCode;
@property long long underlyingErrorUserInfoStatusCode;
@property (copy) NSString *url;
@property (copy) NSString *urlParamBagProfile;
@property (copy) NSString *urlParamBagProfileVersion;

/* class methods */
+ (id)_propertyValueClassesForKnownProperties;
+ (id)shouldSampleErrorsWithBag:(id)bag;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)cleanURL:(id)url;
- (id)getBuildType;
- (id)initWithSubsystem:(id)subsystem category:(id)category error:(id)error;
- (void)prepareEvent;
- (id)stringForLogLevel:(long long)level;
- (id)underlyingDictionaryOverride;

@end

#endif /* _AMSMetricsLoggingEvent_h */
