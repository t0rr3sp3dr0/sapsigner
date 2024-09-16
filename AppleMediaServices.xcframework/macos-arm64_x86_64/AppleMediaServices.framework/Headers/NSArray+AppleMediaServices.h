//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _NSArray_AppleMediaServices_h
#define _NSArray_AppleMediaServices_h

@import Foundation;

@interface NSArray (AppleMediaServices) <AMSHashable, AMSSecureCodingSanitizable>

/* class methods */
+ (id)ams_arrayWithItem:(id)item count:(unsigned long long)count;
+ (void)ams_enumerateObjectsForArrays:(id)arrays usingBlock:(id /* block */)block;

/* instance methods */
- (id)ams_mapWithTransformIgnoresNil:(id /* block */)transformIgnoresNil;
- (signed char)ams_allWithTest:(id /* block */)test;
- (signed char)ams_anyWithTest:(id /* block */)test;
- (id)ams_arrayByRemovingObjectsFromArray:(id)array;
- (id)ams_dictionaryUsingTransform:(id /* block */)transform;
- (id)ams_filterUsingTest:(id /* block */)test;
- (id)ams_firstObjectPassingTest:(id /* block */)test;
- (id)ams_invertedDictionaryUsingTransform:(id /* block */)transform;
- (id)ams_invertedDictionaryUsingTransformIgnoresNil:(id /* block */)transformIgnoresNil;
- (id)ams_mapWithTransform:(id /* block */)transform;
- (id)ams_nonEmptyComponentsJoinedByString:(id)string;
- (id)ams_objectAtIndex:(long long)index;
- (id)ams_reduceWithInitialResult:(id)result updateAccumulatingResult:(id /* block */)result;
- (id)ams_sanitizedForSecureCoding;
- (id)hashedDescription;

@end

#endif /* _NSArray_AppleMediaServices_h */