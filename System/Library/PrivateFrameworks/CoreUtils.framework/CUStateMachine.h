/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUState, NSMutableArray, NSPointerArray, NSArray;

@interface CUStateMachine : NSObject {

	CUState* _currentState;
	NSMutableArray* _eventQueue;
	BOOL _dispatching;
	NSPointerArray* _lcaPath;
	BOOL _started;
	CUState* _targetState;
	CUState* _initialState;
	NSArray* _states;

}

@property (nonatomic,retain) CUState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSArray * states;                    //@synthesize states=_states - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(void)setStates:(NSArray *)arg1 ;
-(NSArray *)states;
-(void)dispatchEvent:(id)arg1 ;
-(void)setInitialState:(CUState *)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(void)_firstTimeInit;
-(CUState *)initialState;
@end

