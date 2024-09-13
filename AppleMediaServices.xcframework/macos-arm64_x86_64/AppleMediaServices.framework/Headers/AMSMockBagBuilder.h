//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMockBagBuilder_h
#define _AMSMockBagBuilder_h

@import Foundation;

@interface AMSMockBagBuilder : NSObject

@property (retain) NSMutableDictionary *data;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)unionBagKeySet:(id)set;
- (void)addBagKey:(id)key value:(id)value valueType:(unsigned long long)type;
- (id)createMockBag;

@end

#endif /* _AMSMockBagBuilder_h */
