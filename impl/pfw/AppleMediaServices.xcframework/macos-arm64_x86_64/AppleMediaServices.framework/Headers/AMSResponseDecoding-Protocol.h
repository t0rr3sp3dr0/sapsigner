//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSResponseDecoding_Protocol_h
#define _AMSResponseDecoding_Protocol_h

@import Foundation;

@protocol AMSResponseDecoding

@required

/* required instance methods */
- (id)resultFromResult:(id)result error:(id *)error;

@optional

@end

#endif /* _AMSResponseDecoding_Protocol_h */