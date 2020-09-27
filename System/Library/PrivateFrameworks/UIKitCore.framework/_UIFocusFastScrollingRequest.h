/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView, UIPanGestureRecognizer, NSArray, _UIFocusEngineJoystickGestureRecognizer;

@interface _UIFocusFastScrollingRequest : NSObject {

	UIScrollView* _scrollView;
	UIPanGestureRecognizer* _panGesture;
	NSArray* _pressGestures;
	_UIFocusEngineJoystickGestureRecognizer* _joystickGesture;
	long long _scrollingType;
	unsigned long long _heading;
	unsigned long long _allowedHeadings;
	/*^block*/id _didBeginCallback;
	/*^block*/id _didEndCallback;
	CGPoint _velocity;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                                       //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGesture;                                    //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,retain) NSArray * pressGestures;                                                //@synthesize pressGestures=_pressGestures - In the implementation block
@property (nonatomic,retain) _UIFocusEngineJoystickGestureRecognizer * joystickGesture;              //@synthesize joystickGesture=_joystickGesture - In the implementation block
@property (assign,nonatomic) long long scrollingType;                                                //@synthesize scrollingType=_scrollingType - In the implementation block
@property (assign,nonatomic) unsigned long long heading;                                             //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) unsigned long long allowedHeadings;                                     //@synthesize allowedHeadings=_allowedHeadings - In the implementation block
@property (nonatomic,copy) id didBeginCallback;                                                      //@synthesize didBeginCallback=_didBeginCallback - In the implementation block
@property (nonatomic,copy) id didEndCallback;                                                        //@synthesize didEndCallback=_didEndCallback - In the implementation block
-(CGPoint)velocity;
-(void)setVelocity:(CGPoint)arg1 ;
-(unsigned long long)heading;
-(void)setHeading:(unsigned long long)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIPanGestureRecognizer *)panGesture;
-(void)setScrollingType:(long long)arg1 ;
-(void)setAllowedHeadings:(unsigned long long)arg1 ;
-(void)setDidEndCallback:(id)arg1 ;
-(long long)scrollingType;
-(void)setPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)setPressGestures:(NSArray *)arg1 ;
-(void)setJoystickGesture:(_UIFocusEngineJoystickGestureRecognizer *)arg1 ;
-(void)setDidBeginCallback:(id)arg1 ;
-(NSArray *)pressGestures;
-(_UIFocusEngineJoystickGestureRecognizer *)joystickGesture;
-(unsigned long long)allowedHeadings;
-(id)didBeginCallback;
-(id)didEndCallback;
@end
