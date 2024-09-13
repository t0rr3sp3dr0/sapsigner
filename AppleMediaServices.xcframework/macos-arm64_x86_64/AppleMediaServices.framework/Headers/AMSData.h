//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSData_h
#define _AMSData_h

@import Foundation;

@interface AMSData : NSObject

/* class methods */
+ (long long)_dataEncodingFromResponse:(id)response;
+ (id)compressedGzippedDataWithData:(id)data;
+ (long long)dataEncodingFromContentType:(id)type;
+ (id)dataWithObject:(id)object encoding:(long long)encoding error:(id *)error;
+ (id)decompressedDataWithGzippedData:(id)data;
+ (id)objectWithData:(id)data encoding:(long long)encoding error:(id *)error;
+ (id)objectWithData:(id)data response:(id)response error:(id *)error;

@end

#endif /* _AMSData_h */
