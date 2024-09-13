//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSPaymentSheetMetricsEvent_h
#define _AMSPaymentSheetMetricsEvent_h

@import Foundation;

#include "AMSMetricsEvent.h"

@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent

/* class methods */
+ (id)_timestamp;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)dictionaryForBiometricMatchState:(long long)state didBiometricsLockout:(signed char)lockout biometricsType:(long long)type;
+ (id)dictionaryForCancellationEvent:(unsigned long long)event didBiometricsLockout:(signed char)lockout biometricsType:(long long)type;
+ (id)dictionaryForUserAction:(long long)action didBiometricsLockout:(signed char)lockout;

/* instance methods */
- (void)addUserActions:(id)actions;
- (void)addBiometricMatchState:(long long)state;
- (void)addBiometricsState:(long long)state;
- (void)addClientMetadataForPaymentSheetRequest:(id)request;
- (void)addClientMetadataForPurchaseInfo:(id)info metricsDictionary:(id)dictionary;
- (void)addDualActionSuccess:(signed char)success;

@end

#endif /* _AMSPaymentSheetMetricsEvent_h */
