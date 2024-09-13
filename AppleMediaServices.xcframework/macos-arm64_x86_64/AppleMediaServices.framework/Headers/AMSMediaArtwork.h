//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSMediaArtwork_h
#define _AMSMediaArtwork_h

@import Foundation;

@interface AMSMediaArtwork : NSObject

@property (readonly) NSDictionary *artworkDictionary;
@property (readonly) CGSize artworkSize;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (double)height;
- (double)width;
- (id)URLString;
- (id)URLWithSize:(CGSize)size cropStyle:(id)style format:(id)format;
- (id)URLWithSize:(CGSize)size;
- (id)URLWithSize:(CGSize)size cropStyle:(id)style format:(id)format quality:(unsigned long long)quality;
- (unsigned long long)_qualityForFormat:(id)format;
- (struct CGColor *)colorWithKind:(id)kind;

@end

#endif /* _AMSMediaArtwork_h */
