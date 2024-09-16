//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSStorageDatabase_h
#define _AMSStorageDatabase_h

@import Foundation;

#include "AMSSQLiteConnection.h"
#include "AMSSQLiteConnectionDelegate-Protocol.h"

@protocol OS_dispatch_queue;

@interface AMSStorageDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain) AMSSQLiteConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (signed char)isFeatureSupported;
+ (id)sharedDatabaseWithDomain:(id)domain;

/* instance methods */
- (void)dealloc;
- (void)close;
- (id)_cachePath;
- (id)valueForKey:(id)key error:(id *)error;
- (id)initWithDomain:(id)domain;
- (signed char)setValue:(id)value forKey:(id)key error:(id *)error;
- (id)_allKeysPrefixedByDomainWithError:(id *)error;
- (id)_convertToDataWithValue:(id)value valueType:(long long)type error:(id *)error;
- (id)_convertToValueWithData:(id)data valueType:(long long)type error:(id *)error;
- (id)_dataForPlistValue:(id)value error:(id *)error;
- (void)_performTransaction:(id /* block */)transaction;
- (id)_plistValueForData:(id)data error:(id *)error;
- (signed char)_setValueData:(id)data valueType:(long long)type forKey:(id)key error:(id *)error;
- (long long)_valueTypeForValue:(id)value;
- (id)allKeyValuesWithError:(id *)error;
- (id)allKeysForDomain:(id)domain withError:(id *)error;
- (signed char)booleanForKey:(id)key error:(id *)error;
- (signed char)connectionNeedsResetForCorruption:(id)corruption;
- (signed char)deleteForKey:(id)key error:(id *)error;
- (double)doubleForKey:(id)key error:(id *)error;
- (long long)integerForKey:(id)key error:(id *)error;
- (signed char)setBoolean:(signed char)boolean forKey:(id)key error:(id *)error;
- (signed char)setDouble:(double)_double forKey:(id)key error:(id *)error;
- (signed char)setInteger:(long long)integer forKey:(id)key error:(id *)error;
- (id)sizeWithError:(id *)error;

@end

#endif /* _AMSStorageDatabase_h */