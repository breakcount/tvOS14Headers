//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKDelayedIssueFriendRequestsCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)readerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000e228c
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e24b0
- (id)friendRequestsDescriptorForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000e23f0
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00000001000e23dc
- (id)getFriendRequestsDescriptorStatement;	// IMP=0x00000001000e2384
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000e2324
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000e22c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
