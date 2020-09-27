/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleURLActionWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)generateNewRecoveryKey:(/*^block*/id)arg1 ;
-(void)startCircleApplicationApprovalServer:(/*^block*/id)arg1 ;
-(void)recoverAndSynchronizeWithSquirrel:(/*^block*/id)arg1 ;
-(void)recoverWithSquirrel:(/*^block*/id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldPerformRepairWithOptionForceFetch:(BOOL)arg1 error:(id*)arg2 ;
-(void)deleteRecoveryKey:(/*^block*/id)arg1 ;
-(BOOL)deleteRecoveryKeyWithError:(id*)arg1 ;
-(id)generateRandomRecoveryKey:(id*)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 ;
@end

