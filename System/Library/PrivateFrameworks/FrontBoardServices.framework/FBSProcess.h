/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSProcessInternal.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSProcessHandle, RBSProcessIdentity, BSMachPortTaskNameRight, NSString;

@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding> {

	BSProcessHandle* _handle;
	RBSProcessIdentity* _identity;
	BSMachPortTaskNameRight* _taskNameRight;
	BOOL _running;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running;                               //@synthesize running=_running - In the implementation block
@property (nonatomic,retain,readonly) BSProcessHandle * handle; 
@property (nonatomic,retain,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentProcess;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BSProcessHandle *)handle;
-(RBSProcessIdentity *)identity;
-(BOOL)isRunning;
-(int)pid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(id)_initForCurrentProcess;
@end

