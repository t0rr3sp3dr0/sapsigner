//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.4, SDK: 17.4, Tools: [ld (902.8), ld (854.1), ld (951.9)]
//    - LC_SOURCE_VERSION: 7.4.38.1.3
//
#ifndef _AMSSQLiteSchema_h
#define _AMSSQLiteSchema_h

@import Foundation;

#include "AMSSQLiteConnection.h"

@interface AMSSQLiteSchema : NSObject {
    /* instance variables */
    AMSSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)_setUserVersion:(long long)version;
- (signed char)column:(id)column existsInTable:(id)table;
- (signed char)migrateToVersion:(long long)version usingBlock:(id /* block */)block;
- (signed char)tableExists:(id)exists;

@end

#endif /* _AMSSQLiteSchema_h */