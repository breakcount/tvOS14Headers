/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusTest.h>

@protocol UIFocusEnvironment, _UIFocusMoveTestDataSource;
@interface _UIFocusMoveTest : _UIFocusTest {

	unsigned long long _activeNumberOfIterations;
	unsigned long long _currentIteration;
	unsigned long long _currentMove;
	struct {
		unsigned isPerformingFocusMovement : 1;
		unsigned delegateRespondsToWillStartIteration : 1;
		unsigned delegateRespondsToDidFinishIteration : 1;
		unsigned delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration : 1;
		unsigned delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration : 1;
		unsigned dataSourceRespondsToNumberOfIterations : 1;
		unsigned dataSourceRespondsToMaximumNumberOfMovesDuringIteration : 1;
		unsigned dataSourceRespondsToDelayBeforeMoveDuringIteration : 1;
		unsigned dataSourceRespondsToHeadingForMoveDuringIteration : 1;
		unsigned dataSourceRespondsToShouldResetFocusBeforeIteration : 1;
	}  _flags;
	BOOL _resetsFocusBeforeIterations;
	id<UIFocusEnvironment> _containerFocusEnvironment;
	unsigned long long _numberOfIterations;
	unsigned long long _maximumMovesPerIteration;
	double _movementDelay;
	unsigned long long _movementHeading;
	id<_UIFocusMoveTestDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<UIFocusEnvironment> containerFocusEnvironment;              //@synthesize containerFocusEnvironment=_containerFocusEnvironment - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfIterations;                                //@synthesize numberOfIterations=_numberOfIterations - In the implementation block
@property (assign,nonatomic) unsigned long long maximumMovesPerIteration;                          //@synthesize maximumMovesPerIteration=_maximumMovesPerIteration - In the implementation block
@property (assign,nonatomic) double movementDelay;                                                 //@synthesize movementDelay=_movementDelay - In the implementation block
@property (assign,nonatomic) unsigned long long movementHeading;                                   //@synthesize movementHeading=_movementHeading - In the implementation block
@property (assign,nonatomic) BOOL resetsFocusBeforeIterations;                                     //@synthesize resetsFocusBeforeIterations=_resetsFocusBeforeIterations - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusMoveTestDelegate> delegate; 
@property (assign,nonatomic,__weak) id<_UIFocusMoveTestDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
-(id<_UIFocusMoveTestDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusMoveTestDelegate>)arg1 ;
-(void)main;
-(void)reset;
-(id)initWithIdentifier:(id)arg1 ;
-(id<_UIFocusMoveTestDataSource>)dataSource;
-(void)setDataSource:(id<_UIFocusMoveTestDataSource>)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNumberOfIterations:(unsigned long long)arg1 ;
-(void)setMaximumMovesPerIteration:(unsigned long long)arg1 ;
-(void)setMovementDelay:(double)arg1 ;
-(void)setMovementHeading:(unsigned long long)arg1 ;
-(void)setContainerFocusEnvironment:(id<UIFocusEnvironment>)arg1 ;
-(id<UIFocusEnvironment>)containerFocusEnvironment;
-(unsigned long long)_dataSourceNumberOfIterations;
-(void)_performFocusMovementAfterDelayForMove:(unsigned long long)arg1 iteration:(unsigned long long)arg2 ;
-(double)_dataSourceDelayBeforeMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2 ;
-(void)_resetFocusIfNecessaryBeforeIteration:(unsigned long long)arg1 ;
-(void)_notifyDelegateWillStartIteration:(unsigned long long)arg1 ;
-(void)_performFocusMovement;
-(unsigned long long)_dataSourceMaximumNumberOfMovesDuringIteration:(unsigned long long)arg1 ;
-(unsigned long long)_dataSourceHeadingForMove:(unsigned long long)arg1 duringIteration:(unsigned long long)arg2 ;
-(void)_notifyDelegateWillMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3 ;
-(void)_notifyDelegateDidMoveFocusAlongHeading:(unsigned long long)arg1 forMove:(unsigned long long)arg2 duringIteration:(unsigned long long)arg3 ;
-(void)_notifyDelegateDidFinishIteration:(unsigned long long)arg1 ;
-(BOOL)_dataSourceShouldResetFocusBeforeIteration:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIterations;
-(unsigned long long)maximumMovesPerIteration;
-(double)movementDelay;
-(unsigned long long)movementHeading;
-(BOOL)resetsFocusBeforeIterations;
-(void)setResetsFocusBeforeIterations:(BOOL)arg1 ;
@end

