/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBProcess.h>

@class FBSExtensionInfo, FBProcess;

@interface FBExtensionProcess : FBProcess {

	FBSExtensionInfo* _extensionInfo;
	int _hostPID;
	os_unfair_lock_s _hostProcessLock;
	FBProcess* _lock_hostProcess;

}

@property (nonatomic,readonly) FBSExtensionInfo * extensionInfo;              //@synthesize extensionInfo=_extensionInfo - In the implementation block
@property (nonatomic,readonly) FBProcess * hostProcess; 
@property (nonatomic,readonly) int hostPID;                                   //@synthesize hostPID=_hostPID - In the implementation block
-(id)succinctDescriptionBuilder;
-(FBProcess *)hostProcess;
-(void)_finishInit;
-(BOOL)isExtensionProcess;
-(FBSExtensionInfo *)extensionInfo;
-(int)hostPID;
@end

