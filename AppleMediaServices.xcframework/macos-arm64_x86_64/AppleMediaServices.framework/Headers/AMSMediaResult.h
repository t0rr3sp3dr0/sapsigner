//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMediaResult_h
#define _AMSMediaResult_h

@import Foundation;

#include "AMSURLResult.h"

@interface AMSMediaResult : AMSURLResult

@property (readonly) NSDictionary *responseDictionary;
@property (readonly) NSArray *responseDataItems;

/* instance methods */
- (id)initWithResult:(id)result;

@end

#endif /* _AMSMediaResult_h */