//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _URLTarget_h
#define _URLTarget_h

@import Foundation;

@interface URLTarget : NSObject

@property (retain) NSString *bundleID;
@property long long defaultIndex;
@property (retain) NSString *normalScheme;
@property (retain) NSString *secureScheme;

/* class methods */
+ (id)targetWithBundle:(id)bundle scheme:(id)scheme secureScheme:(id)scheme;

/* instance methods */
- (id)initWithBundle:(id)bundle scheme:(id)scheme secureScheme:(id)scheme;

@end

#endif /* _URLTarget_h */
