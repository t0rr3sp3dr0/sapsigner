//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSSQLitePreparedStatement_h
#define _AMSSQLitePreparedStatement_h

@import Foundation;

@interface AMSSQLitePreparedStatement : NSObject

@property (readonly, nonatomic) const void * connectionPointer;
@property (readonly, copy, nonatomic) NSString *SQL;

/* instance methods */
- (id)initWithConnection:(const void *)connection SQL:(id)sql;

@end

#endif /* _AMSSQLitePreparedStatement_h */
