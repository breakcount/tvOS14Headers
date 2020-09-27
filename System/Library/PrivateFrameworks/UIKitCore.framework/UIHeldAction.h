/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDelayedAction.h>

@class NSDate;

@interface UIHeldAction : UIDelayedAction {

	BOOL _holding;
	NSDate* _holdBegan;
	double _baseDelay;
	double _timeBalance;

}
-(void)cancel;
-(void)resume;
-(BOOL)isHolding;
-(void)hold;
-(void)unschedule;
-(void)touchWithDelay:(double)arg1 ;
@end

