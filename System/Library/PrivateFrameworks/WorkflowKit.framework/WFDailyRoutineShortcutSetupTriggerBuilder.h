/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFTrigger;

@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WFTrigger* _templateTrigger;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFTrigger * templateTrigger;              //@synthesize templateTrigger=_templateTrigger - In the implementation block
-(NSString *)title;
-(NSString *)subtitle;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 templateTrigger:(id)arg3 ;
-(id)triggerWithConfiguration:(id)arg1 ;
-(WFTrigger *)templateTrigger;
@end

