/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString, NSArray;

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction

@property (nonatomic,readonly) unsigned long long accountType; 
@property (nonatomic,copy,readonly) NSString * accountID; 
@property (nonatomic,copy,readonly) NSString * accountPassword; 
@property (nonatomic,copy,readonly) NSArray * accountTypesWithSharedCredentials; 
@property (nonatomic,readonly) unsigned long long attemptCount; 
@property (nonatomic,copy,readonly) NSString * requestMessage; 
@property (nonatomic,copy,readonly) NSString * failureMessage; 
+(id)actionForFailedAttemptWithOriginalAction:(id)arg1 requestMessage:(id)arg2 failureMessage:(id)arg3 ;
+(id)actionForInitialAttemptWithAccountType:(unsigned long long)arg1 requestMessage:(id)arg2 ;
+(id)actionForFinishedRequestWithOriginalAction:(id)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 ;
+(id)actionForCancelledRequestWithOriginalAction:(id)arg1 ;
-(id)init;
-(unsigned long long)attemptCount;
-(NSString *)accountID;
-(unsigned long long)accountType;
-(NSString *)requestMessage;
-(NSString *)accountPassword;
-(NSArray *)accountTypesWithSharedCredentials;
-(id)_initWithAccountType:(unsigned long long)arg1 accountID:(id)arg2 accountPassword:(id)arg3 accountTypesWithSharedCredentials:(id)arg4 attemptCount:(unsigned long long)arg5 requestMessage:(id)arg6 failureMessage:(id)arg7 ;
-(NSString *)failureMessage;
@end

