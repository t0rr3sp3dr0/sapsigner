//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSPaymentSheetImageAssetConfiguration_h
#define _AMSPaymentSheetImageAssetConfiguration_h

@import Foundation;

#include "AMSPaymentSheetAssetConfiguration-Protocol.h"

@interface AMSPaymentSheetImageAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration>

@property (readonly, copy) NSString *filename;
@property (readonly) NSString *fileExtension;
@property (readonly) CGSize size;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilename:(id)filename size:(CGSize)size type:(long long)type;

@end

#endif /* _AMSPaymentSheetImageAssetConfiguration_h */