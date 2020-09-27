/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface VUISportsScoreboardManager : NSObject {

	BOOL _updateInProgress;
	NSMutableDictionary* _sportsEventsById;
	NSTimer* _scoreboardUpdateTimer;
	long long _scoreboardUpdateInterval;

}

@property (nonatomic,retain) NSMutableDictionary * sportsEventsById;              //@synthesize sportsEventsById=_sportsEventsById - In the implementation block
@property (nonatomic,retain) NSTimer * scoreboardUpdateTimer;                     //@synthesize scoreboardUpdateTimer=_scoreboardUpdateTimer - In the implementation block
@property (assign,nonatomic) long long scoreboardUpdateInterval;                  //@synthesize scoreboardUpdateInterval=_scoreboardUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL updateInProgress;                               //@synthesize updateInProgress=_updateInProgress - In the implementation block
+(id)sharedInstance;
+(void)registerDelegate:(id)arg1 canonicalId:(id)arg2 ;
+(void)unregisterDelegate:(id)arg1 canonicalId:(id)arg2 ;
-(id)init;
-(void)_updateTimer;
-(void)_invalidateTimer;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(BOOL)updateInProgress;
-(void)_resetTimer;
-(NSMutableDictionary *)sportsEventsById;
-(id)_prepareJSContextDictionaryArgument;
-(void)_updateScores:(id)arg1 ;
-(void)_getScoreboardUpdates;
-(void)setSportsEventsById:(NSMutableDictionary *)arg1 ;
-(NSTimer *)scoreboardUpdateTimer;
-(void)setScoreboardUpdateTimer:(NSTimer *)arg1 ;
-(long long)scoreboardUpdateInterval;
-(void)setScoreboardUpdateInterval:(long long)arg1 ;
@end

