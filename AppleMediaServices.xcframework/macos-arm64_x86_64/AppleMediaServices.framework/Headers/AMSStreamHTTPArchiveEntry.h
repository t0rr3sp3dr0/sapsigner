//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSStreamHTTPArchiveEntry_h
#define _AMSStreamHTTPArchiveEntry_h

@import Foundation;

@interface AMSStreamHTTPArchiveEntry : NSObject <NSSecureCoding>

@property (retain) NSArray *entries;
@property (retain) NSString *urlString;

/* class methods */
+ (signed char)supportsSecureCoding;
+ (id)_createEntriesForTaskMetrics:(id)metrics requestData:(id)data responseData:(id)data;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithEntries:(id)entries;
- (id)initWithHTTPArchiveTaskInfo:(id)info;

@end

#endif /* _AMSStreamHTTPArchiveEntry_h */
