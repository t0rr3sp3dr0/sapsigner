//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSBiometricsSignatureResult_h
#define _AMSBiometricsSignatureResult_h

@import Foundation;

#include "AMSBiometricsSignatureRequest.h"

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>

@property (retain) AMSBiometricsSignatureRequest *originalRequest;
@property (retain) NSData *publicKey;
@property (retain) NSString *signature;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* _AMSBiometricsSignatureResult_h */