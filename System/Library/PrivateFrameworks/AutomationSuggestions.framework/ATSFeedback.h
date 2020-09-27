/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATSSuggestion, NSString;

@interface ATSFeedback : NSObject {

	long long _action;
	ATSSuggestion* _suggestion;
	NSString* _automationIdentifier;

}

@property (assign,nonatomic) long long action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) ATSSuggestion * suggestion;                   //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) NSString * automationIdentifier;              //@synthesize automationIdentifier=_automationIdentifier - In the implementation block
+(id)feedbackForAction:(long long)arg1 suggestion:(id)arg2 automationIdentifier:(id)arg3 ;
-(id)description;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setSuggestion:(ATSSuggestion *)arg1 ;
-(ATSSuggestion *)suggestion;
-(void)setAutomationIdentifier:(NSString *)arg1 ;
-(NSString *)automationIdentifier;
-(void)submitTelemetryFeedback;
@end

