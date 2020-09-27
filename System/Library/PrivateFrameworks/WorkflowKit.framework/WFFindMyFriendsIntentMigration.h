/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
+(id)classNameConversion;
+(id)launchIdConversion;
+(id)parameterConversion;
-(void)migrateWorkflow;
-(BOOL)updateBundleIdentifierForIntent:(id)arg1 ;
-(BOOL)updateClassNameForIntent:(id)arg1 ;
-(BOOL)convertParametersAndUpdateIntent:(id*)arg1 ;
@end
