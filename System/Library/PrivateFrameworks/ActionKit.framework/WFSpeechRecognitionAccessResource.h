/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFSpeechRecognitionAccessResource : WFAccessResource
+(BOOL)isSystemResource;
-(id)name;
-(id)icon;
-(unsigned long long)globalLevelStatus;
-(id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)protectedResourceDescription;
@end
