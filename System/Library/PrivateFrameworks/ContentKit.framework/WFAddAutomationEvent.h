/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAddAutomationEvent : WFEvent {

	unsigned _actionCount;
	NSString* _key;
	NSString* _triggerType;
	NSString* _intentType;
	NSString* _source;
	NSString* _appBundleIdentifier;
	NSString* _activityType;
	NSString* _automationSuggestionsTrialIdentifier;

}

@property (nonatomic,copy) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                                       //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,copy) NSString * intentType;                                        //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy) NSString * source;                                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                                       //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                               //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activityType;                                      //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * automationSuggestionsTrialIdentifier;              //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
+(Class)codableEventClass;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)activityType;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setTriggerType:(NSString *)arg1 ;
-(NSString *)triggerType;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)intentType;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(NSString *)automationSuggestionsTrialIdentifier;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
@end
