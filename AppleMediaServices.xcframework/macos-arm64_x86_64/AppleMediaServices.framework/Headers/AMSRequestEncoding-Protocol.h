//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSRequestEncoding_Protocol_h
#define _AMSRequestEncoding_Protocol_h

@import Foundation;

@protocol AMSRequestEncoding <NSObject>

@required

@optional

/* optional instance methods */
- (id)requestByEncodingRequest:(id)request parameters:(id)parameters;
- (id)requestByEncodingRequest:(id)request parameters:(id)parameters error:(id *)error;

@end

#endif /* _AMSRequestEncoding_Protocol_h */
