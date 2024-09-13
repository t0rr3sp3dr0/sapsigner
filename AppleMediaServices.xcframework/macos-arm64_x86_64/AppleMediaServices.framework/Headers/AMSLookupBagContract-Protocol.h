//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSLookupBagContract_Protocol_h
#define _AMSLookupBagContract_Protocol_h

@import Foundation;

#include "AMSBagValue.h"
#include "AMSURLBagContract-Protocol.h"

@protocol AMSLookupBagContract <AMSURLBagContract>

@required

@optional

@property (readonly) AMSBagValue *personalizedLookupURL;
@property (readonly) AMSBagValue *unpersonalizedLookupURL;

@end

#endif /* _AMSLookupBagContract_Protocol_h */
