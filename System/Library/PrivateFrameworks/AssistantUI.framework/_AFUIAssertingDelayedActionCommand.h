/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SAUIDelayedActionCommand, BKSProcessAssertion;

@interface _AFUIAssertingDelayedActionCommand : NSObject {

	SAUIDelayedActionCommand* _command;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
-(BKSProcessAssertion *)assertion;
-(SAUIDelayedActionCommand *)command;
-(id)initWithCommand:(id)arg1 assertion:(id)arg2 ;
@end

