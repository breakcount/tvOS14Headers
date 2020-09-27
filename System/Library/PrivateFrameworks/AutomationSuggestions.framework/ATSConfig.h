/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface ATSConfig : NSObject {

	NSString* _trialID;
	NSDictionary* _heuristicEnablement;
	NSDictionary* _scoreCutOffs;
	NSString* _sortProperty;
	NSArray* _preferredTriggers;
	NSArray* _intentBlacklist;
	NSArray* _activityBlacklist;
	NSDictionary* _intentForTriggerBlacklist;
	NSDictionary* _activityForTriggerBlacklist;
	NSDictionary* _parametersForIntentBlacklist;
	NSDictionary* _atsConfig;

}

@property (nonatomic,retain) NSDictionary * atsConfig;                                 //@synthesize atsConfig=_atsConfig - In the implementation block
@property (nonatomic,retain) NSString * trialID;                                       //@synthesize trialID=_trialID - In the implementation block
@property (nonatomic,retain) NSDictionary * heuristicEnablement;                       //@synthesize heuristicEnablement=_heuristicEnablement - In the implementation block
@property (nonatomic,retain) NSDictionary * scoreCutOffs;                              //@synthesize scoreCutOffs=_scoreCutOffs - In the implementation block
@property (nonatomic,retain) NSString * sortProperty;                                  //@synthesize sortProperty=_sortProperty - In the implementation block
@property (nonatomic,retain) NSArray * preferredTriggers;                              //@synthesize preferredTriggers=_preferredTriggers - In the implementation block
@property (nonatomic,retain) NSArray * intentBlacklist;                                //@synthesize intentBlacklist=_intentBlacklist - In the implementation block
@property (nonatomic,retain) NSArray * activityBlacklist;                              //@synthesize activityBlacklist=_activityBlacklist - In the implementation block
@property (nonatomic,retain) NSDictionary * intentForTriggerBlacklist;                 //@synthesize intentForTriggerBlacklist=_intentForTriggerBlacklist - In the implementation block
@property (nonatomic,retain) NSDictionary * activityForTriggerBlacklist;               //@synthesize activityForTriggerBlacklist=_activityForTriggerBlacklist - In the implementation block
@property (nonatomic,retain) NSDictionary * parametersForIntentBlacklist;              //@synthesize parametersForIntentBlacklist=_parametersForIntentBlacklist - In the implementation block
-(id)init;
-(void)loadDefaultConfig;
-(void)updateFactorLevelsFromFilePath:(id)arg1 ;
-(BOOL)loadATSConfig:(id)arg1 ;
-(id)initWithDefaultConfig;
-(id)initWithConfigFilePath:(id)arg1 ;
-(NSString *)trialID;
-(void)setTrialID:(NSString *)arg1 ;
-(NSDictionary *)heuristicEnablement;
-(void)setHeuristicEnablement:(NSDictionary *)arg1 ;
-(NSDictionary *)scoreCutOffs;
-(void)setScoreCutOffs:(NSDictionary *)arg1 ;
-(NSString *)sortProperty;
-(void)setSortProperty:(NSString *)arg1 ;
-(NSArray *)preferredTriggers;
-(void)setPreferredTriggers:(NSArray *)arg1 ;
-(NSArray *)intentBlacklist;
-(void)setIntentBlacklist:(NSArray *)arg1 ;
-(NSArray *)activityBlacklist;
-(void)setActivityBlacklist:(NSArray *)arg1 ;
-(NSDictionary *)intentForTriggerBlacklist;
-(void)setIntentForTriggerBlacklist:(NSDictionary *)arg1 ;
-(NSDictionary *)activityForTriggerBlacklist;
-(void)setActivityForTriggerBlacklist:(NSDictionary *)arg1 ;
-(NSDictionary *)parametersForIntentBlacklist;
-(void)setParametersForIntentBlacklist:(NSDictionary *)arg1 ;
-(NSDictionary *)atsConfig;
-(void)setAtsConfig:(NSDictionary *)arg1 ;
@end

