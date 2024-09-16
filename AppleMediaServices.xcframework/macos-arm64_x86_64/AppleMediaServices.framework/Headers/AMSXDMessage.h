//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSXDMessage_h
#define _AMSXDMessage_h

@import Foundation;

#include "AMSXDDevice.h"

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying>

@property (retain) NSString *objectClassName;
@property signed char isReply;
@property (retain) NSString *messageID;
@property (retain) NSDate *receiptDate;
@property (readonly) NSDictionary *JSONDictionary;
@property (retain) AMSXDDevice *destination;
@property double expirationInterval;
@property (retain) NSString *identifier;
@property (readonly) signed char expired;
@property (retain) NSString *logKey;
@property (retain) id <NSObject, NSSecureCoding> object;
@property (retain) AMSXDDevice *origin;
@property long long purpose;

/* class methods */
+ (signed char)supportsSecureCoding;
+ (id)_allowedClassNamesForDecoding;
+ (id)_allowedClassesForDecoding;
+ (id)messageFromProtoMessage:(id)message;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (signed char)isExpired;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)createProtoMessage;
- (id)initWithIdentifier:(id)identifier destination:(id)destination purpose:(long long)purpose object:(id)object;

@end

#endif /* _AMSXDMessage_h */