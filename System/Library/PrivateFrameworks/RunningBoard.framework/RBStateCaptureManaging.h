/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBStateCaptureManaging <NSObject>
@required
-(void)removeItem:(id)arg1;
-(void)addItem:(id)arg1;
-(id)identifiers;
-(id)stateForSubsystem:(id)arg1;
-(void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3;
-(void)removeItemWithIdentifier:(id)arg1;
-(void)addItem:(id)arg1 withIdentifier:(id)arg2;

@end

