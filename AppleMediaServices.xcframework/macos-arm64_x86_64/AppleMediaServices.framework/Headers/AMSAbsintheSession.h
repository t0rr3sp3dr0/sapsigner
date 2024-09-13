//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAbsintheSession_h
#define _AMSAbsintheSession_h

@import Foundation;

@interface AMSAbsintheSession : NSObject

@property void * sessionRef;
@property (retain) NSString *servKey;

/* class methods */
+ (id)defaultSession;

/* instance methods */
- (id)init;
- (signed char)_prepareContextWithBag:(id)bag error:(id *)error;
- (signed char)clearSession;
- (id)signData:(id)data bag:(id)bag error:(id *)error;
- (signed char)verifyData:(id)data bag:(id)bag error:(id *)error;

@end

#endif /* _AMSAbsintheSession_h */
