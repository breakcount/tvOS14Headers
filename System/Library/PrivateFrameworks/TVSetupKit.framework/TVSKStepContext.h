/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSKSetupSession, TVSKStepExecutionRecord, UIViewController;

@interface TVSKStepContext : NSObject {

	TVSKSetupSession* _setupSession;
	unsigned long long _navigationFlow;
	TVSKStepExecutionRecord* _previousExecutionRecord;
	UIViewController* _stepViewController;

}

@property (nonatomic,retain) UIViewController * stepViewController;                                    //@synthesize stepViewController=_stepViewController - In the implementation block
@property (nonatomic,retain) TVSKStepExecutionRecord * previousExecutionRecord;                        //@synthesize previousExecutionRecord=_previousExecutionRecord - In the implementation block
@property (nonatomic,readonly) TVSKSetupSession * setupSession;                                        //@synthesize setupSession=_setupSession - In the implementation block
@property (nonatomic,readonly) unsigned long long navigationFlow;                                      //@synthesize navigationFlow=_navigationFlow - In the implementation block
@property (getter=isNavigationFlowForward,nonatomic,readonly) BOOL navigationFlowForward; 
+(id)new;
+(id)_navigationFlowDescription:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(TVSKSetupSession *)setupSession;
-(unsigned long long)navigationFlow;
-(BOOL)isNavigationFlowForward;
-(UIViewController *)stepViewController;
-(TVSKStepExecutionRecord *)previousExecutionRecord;
-(id)initWithSetupSession:(id)arg1 navigationFlow:(unsigned long long)arg2 ;
-(void)setPreviousExecutionRecord:(TVSKStepExecutionRecord *)arg1 ;
-(void)setStepViewController:(UIViewController *)arg1 ;
@end

