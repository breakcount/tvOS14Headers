/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPFilterSupport.h>
#import <libobjc.A.dylib/MPAudioSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>

@class MCPlug, MCContainerParallelizer, NSMutableArray, NSMutableDictionary, MPTransition, MPLayer, MPAudioPlaylist, NSString;

@interface MPEffectContainer : NSObject <MPActionableSupportInternal, NSCopying, MPFilterSupport, MPAudioSupport, MPActionableSupport> {

	MCPlug* _containerPlug;
	MCContainerParallelizer* _containerParallelizer;
	NSMutableArray* _effects;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	MPTransition* _transition;
	MPLayer* _parentLayer;
	MPAudioPlaylist* _audioPlaylist;
	BOOL _transitionDisconnected;
	double _startTime;
	double _duration;
	CGColorRef _backgroundColor;
	NSString* _uuid;

}

@property (assign,nonatomic) CGColorRef backgroundCGColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) MPTransition * transition;                 //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)effectContainer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)container;
-(double)startTime;
-(void)cleanup;
-(void)setStartTime:(double)arg1 ;
-(long long)index;
-(void)dump;
-(double)duration;
-(id)objectID;
-(id)uuid;
-(void)setDuration:(double)arg1 ;
-(MPTransition *)transition;
-(id)filters;
-(void)addFilter:(id)arg1 ;
-(void)addFilters:(id)arg1 ;
-(void)setTransition:(MPTransition *)arg1 ;
-(void)removeAllEffects;
-(id)effects;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)parentLayer;
-(void)setParentLayer:(id)arg1 ;
-(id)parentDocument;
-(id)plugID;
-(void)copyVars:(id)arg1 ;
-(id)fullDebugLog;
-(long long)countOfEffects;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)addEffect:(id)arg1 ;
-(double)introTransitionDuration;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(double)outroTransitionDuration;
-(id)objectInEffectsAtIndex:(long long)arg1 ;
-(long long)slideCount;
-(long long)textCount;
-(void)removeEffectsAtIndices:(id)arg1 ;
-(id)plug;
-(CGColorRef)backgroundCGColor;
-(void)copyFilters:(id)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(BOOL)shouldBeParallelizer;
-(void)convertFromParallelizerToEffectContainer;
-(void)convertFromEffectContainerToParallelizer;
-(id)nearestLayerGroup;
-(double)findMinDuration;
-(void)calculateDurationToSmallest:(BOOL)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(long long)countOfFilters;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)copyEffects:(id)arg1 ;
-(void)copyTransition:(id)arg1 ;
-(void)insertEffects:(id)arg1 atIndex:(long long)arg2 ;
-(void)adjustPhasesWithDuration:(double)arg1 ;
-(BOOL)isTransitionConnected;
-(void)addEffects:(id)arg1 ;
-(void)moveEffectsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)disconnectTransition;
-(void)reconnectTransition;
-(void)setContainerPlug:(id)arg1 ;
-(void)setContainerParallelizer:(id)arg1 ;
-(void)setContainerEffect:(id)arg1 ;
-(void)insertObject:(id)arg1 inEffectsAtIndex:(long long)arg2 ;
-(void)removeObjectFromEffectsAtIndex:(long long)arg1 ;
-(void)replaceObjectInEffectsAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(id)scriptingTransition;
-(void)setScriptingTransition:(id)arg1 ;
@end

