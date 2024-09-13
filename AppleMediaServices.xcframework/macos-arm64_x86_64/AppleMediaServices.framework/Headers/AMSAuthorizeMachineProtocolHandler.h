//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSAuthorizeMachineProtocolHandler_h
#define _AMSAuthorizeMachineProtocolHandler_h

@import Foundation;

#include "AMSURLProtocolHandler.h"

@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler

@property (copy) id /* block */ reconfigureRequestHandler;

/* instance methods */
- (void)reconfigureNewRequest:(id)request originalTask:(id)task redirect:(signed char)redirect error:(id *)error;

@end

#endif /* _AMSAuthorizeMachineProtocolHandler_h */
