/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKStrategist.h>

@class NSString;

@interface GKMonteCarloStrategist : NSObject <GKStrategist> {

	GKCMonteCarloStrategist* _monteCarloStrategist;

}

@property (assign,nonatomic) unsigned long long budget; 
@property (assign,nonatomic) unsigned long long explorationParameter; 
@property (nonatomic,retain) id<GKGameModel> gameModel; 
@property (nonatomic,retain) id<GKRandom> randomSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setBudget:(unsigned long long)arg1 ;
-(unsigned long long)budget;
-(id<GKGameModel>)gameModel;
-(id)bestMoveForActivePlayer;
-(void)setGameModel:(id<GKGameModel>)arg1 ;
-(id<GKRandom>)randomSource;
-(void)setRandomSource:(id<GKRandom>)arg1 ;
-(BOOL)validateGameModel:(id)arg1 ;
-(unsigned long long)explorationParameter;
-(void)setExplorationParameter:(unsigned long long)arg1 ;
@end

