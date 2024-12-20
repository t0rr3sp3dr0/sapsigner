//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSStorage_h
#define _AMSStorage_h

@import Foundation;

@interface AMSStorage : NSObject

/* class methods */
+ (void)_setBool:(signed char)_bool forKey:(id)key;
+ (void)_setValue:(id)value forKey:(id)key;
+ (signed char)_boolForKey:(id)key defaultValue:(signed char)value;
+ (id)_valueForKey:(id)key;
+ (signed char)_boolForKey:(id)key defaultValue:(signed char)value domain:(id)domain;
+ (long long)_integerForKey:(id)key defaultValue:(long long)value;
+ (long long)_integerForKey:(id)key defaultValue:(long long)value domain:(id)domain;
+ (void)_setBool:(signed char)_bool forKey:(id)key domain:(id)domain;
+ (void)_setInteger:(long long)integer forKey:(id)key;
+ (void)_setValue:(id)value forKey:(id)key domain:(id)domain;
+ (id)_valueForKey:(id)key domain:(id)domain;
+ (id)_allKeysWithDomain:(id)domain;
+ (signed char)_boolFromCFPreferencesForKey:(id)key defaultValue:(signed char)value domain:(struct __CFString *)domain;
+ (signed char)_boolFromDatabaseForKey:(id)key defaultValue:(signed char)value domain:(id)domain error:(id *)error;
+ (long long)_integerFromCFPreferencesForKey:(id)key defaultValue:(long long)value domain:(struct __CFString *)domain;
+ (long long)_integerFromDatabaseForKey:(id)key defaultValue:(long long)value domain:(id)domain error:(id *)error;
+ (void)_migrateBoolToDatabase:(signed char)database forKey:(id)key domain:(id)domain;
+ (void)_migrateIntegerToDatabase:(long long)database forKey:(id)key domain:(id)domain;
+ (void)_migrateValueToDatabase:(id)database forKey:(id)key domain:(id)domain;
+ (void)_setBoolWithCFPreferences:(signed char)cfpreferences forKey:(id)key domain:(struct __CFString *)domain;
+ (signed char)_setBoolWithDatabase:(signed char)database forKey:(id)key domain:(id)domain error:(id *)error;
+ (void)_setInteger:(long long)integer forKey:(id)key domain:(id)domain;
+ (void)_setIntegerWithCFPreferences:(long long)cfpreferences forKey:(id)key domain:(struct __CFString *)domain;
+ (signed char)_setIntegerWithDatabase:(long long)database forKey:(id)key domain:(id)domain error:(id *)error;
+ (void)_setValueWithCFPreferences:(id)cfpreferences forKey:(id)key domain:(id)domain;
+ (signed char)_setValueWithDatabase:(id)database forKey:(id)key domain:(id)domain error:(id *)error;
+ (id)_valueFromCFPreferencesForKey:(id)key domain:(struct __CFString *)domain;
+ (id)_valueFromDatabaseForKey:(id)key domain:(id)domain error:(id *)error;
+ (id)bagURLCookies;
+ (id)deviceOfferEligibility;
+ (void)setBagURLCookies:(id)urlcookies;
+ (void)setDeviceOfferEligibility:(id)eligibility;
+ (void)setSharedStoreReviewMetrics:(id)metrics forProcess:(id)process;
+ (id)sharedStoreReviewMetricsForProcess:(id)process;

@end

#endif /* _AMSStorage_h */