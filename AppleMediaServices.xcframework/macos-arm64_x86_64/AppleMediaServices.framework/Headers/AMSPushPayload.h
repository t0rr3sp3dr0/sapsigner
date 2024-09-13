//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSPushPayload_h
#define _AMSPushPayload_h

@import Foundation;

#include "ACAccount.h"

@class ACAccountType;
@protocol OS_dispatch_queue;

@interface AMSPushPayload : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) ACAccount *account;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) ACAccountType *accountType;
@property (readonly) NSString *actionType;
@property (readonly) long long alertType;
@property (readonly) NSDictionary *aps;
@property (readonly) NSString *clientIdentifier;
@property (readonly) signed char isAccountTypeActive;
@property (readonly) NSString *logKey;
@property (readonly) NSDictionary *payload;
@property (readonly) long long priority;
@property (readonly) NSString *URLString;

/* class methods */
+ (id)actionTypeFromPayload:(id)payload;

/* instance methods */
- (id)objectForKeyedSubscript:(id)subscript;
- (id)initWithPayload:(id)payload;

@end

#endif /* _AMSPushPayload_h */
