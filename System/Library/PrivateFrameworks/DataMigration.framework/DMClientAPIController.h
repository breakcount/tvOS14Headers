/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DMClientAPIController : NSObject {

	unsigned long long _connectionMigrationMaximumAttempts;
	double _connectionMigrationTimeIntervalToLastRetryDate;

}

@property (assign,nonatomic) unsigned long long connectionMigrationMaximumAttempts;              //@synthesize connectionMigrationMaximumAttempts=_connectionMigrationMaximumAttempts - In the implementation block
@property (assign,nonatomic) double connectionMigrationTimeIntervalToLastRetryDate;              //@synthesize connectionMigrationTimeIntervalToLastRetryDate=_connectionMigrationTimeIntervalToLastRetryDate - In the implementation block
-(id)init;
-(BOOL)_migrateWithConnection:(id)arg1 checkNecessity:(BOOL)arg2 lastRelevantPlugin:(id)arg3 testMigrationInfrastructureOnly:(BOOL)arg4 ;
-(void)setConnectionMigrationMaximumAttempts:(unsigned long long)arg1 ;
-(void)setConnectionMigrationTimeIntervalToLastRetryDate:(double)arg1 ;
-(double)connectionMigrationTimeIntervalToLastRetryDate;
-(unsigned long long)connectionMigrationMaximumAttempts;
@end

