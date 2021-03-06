/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMXPCConnection;

@interface DMConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)init;
-(void)dealloc;
-(unsigned)userDataDisposition;
-(void)reportMigrationFailure;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned)arg1 ;
-(BOOL)isMigrationNeeded;
-(id)previousBuildVersion;
-(id)orderedPluginIdentifiers;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)migrationPhaseDescription;
-(void)migrationPluginResults:(/*^block*/id)arg1 ;
-(void)deferExit;
-(void)cancelDeferredExit;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 ;
-(long long)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 ;
@end

