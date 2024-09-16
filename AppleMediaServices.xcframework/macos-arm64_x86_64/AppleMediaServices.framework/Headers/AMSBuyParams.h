//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBuyParams_h
#define _AMSBuyParams_h

@import Foundation;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {
    /* instance variables */
    NSMutableDictionary *_backingDictionary;
}

@property (readonly, copy) NSDictionary *normalizedDictionary;
@property (readonly) signed char freeTrial;
@property (readonly) double price;
@property (readonly, copy) NSDictionary *dictionary;

/* class methods */
+ (signed char)supportsSecureCoding;
+ (id)buyParamsWithString:(id)string;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)init;
- (id)propertyForKey:(id)key;
- (id)initWithString:(id)string;
- (signed char)containsKey:(id)key;
- (void)encodeWithCoder:(id)coder;
- (id)initWithArray:(id)array;
- (id)initWithCoder:(id)coder;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)setProperty:(id)property forKey:(id)key;
- (id)stringValue;
- (void)clear;
- (id)parameterForKey:(id)key;
- (id)_normalizedDictionary;
- (void)_parseBuyParams:(id)params;
- (void)_parseBuyParamsArray:(id)array;
- (signed char)isFreeTrial;
- (id)requestDataWithError:(id *)error;
- (void)setParameter:(id)parameter forKey:(id)key;

@end

#endif /* _AMSBuyParams_h */