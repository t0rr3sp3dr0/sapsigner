//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSRatingsProviderResult_h
#define _AMSRatingsProviderResult_h

@import Foundation;

@interface AMSRatingsProviderResult : NSObject

@property (readonly) NSArray *ratingsStoreFronts;

/* instance methods */
- (id)_mapRatingsDictionaries:(id)dictionaries withMediaType:(unsigned long long)type andStoreFront:(id)front;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)type;
- (id)initWithData:(id)data mediaType:(unsigned long long)type andStoreFront:(id)front;
- (id)initWithDictionaries:(id)dictionaries mediaType:(unsigned long long)type andStoreFront:(id)front;
- (id)initWithURLResult:(id)urlresult mediaType:(unsigned long long)type andStoreFront:(id)front;

@end

#endif /* _AMSRatingsProviderResult_h */
