//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBagFrozenDataSourceBuilder_h
#define _AMSBagFrozenDataSourceBuilder_h

@import Foundation;

#include "AMSProcessInfo.h"

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain) NSDictionary *data;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (retain) AMSProcessInfo *processInfo;

/* instance methods */
- (id)createFrozenBag;
- (id)createFrozenDataSource;
- (id)initWithFrozenDataSource:(id)source;

@end

#endif /* _AMSBagFrozenDataSourceBuilder_h */
