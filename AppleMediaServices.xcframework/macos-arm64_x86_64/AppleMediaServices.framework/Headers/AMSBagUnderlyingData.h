//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBagUnderlyingData_h
#define _AMSBagUnderlyingData_h

@import Foundation;

@interface AMSBagUnderlyingData : NSObject { // (Swift)
    /* instance variables */
    //  version;
}

@property (nonatomic, readonly) NSDictionary *bagDictionary;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *fileKey;
@property (nonatomic, readonly) NSSet *aliasKeys;

/* instance methods */
- (id)init;
- (id)initWithFileKey:(id)key aliasKeys:(id)keys bagDictionary:(id)dictionary expirationDate:(id)date;

@end

#endif /* _AMSBagUnderlyingData_h */
