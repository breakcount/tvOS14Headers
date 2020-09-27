/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollViewPanGestureRecognizer;

@interface _UIScrollViewMockPanGestureRecognizer : NSObject {

	CGPoint _translation;
	CGPoint _velocity;
	long long _state;
	UIScrollViewPanGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UIScrollViewPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) long long state; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(UIScrollViewPanGestureRecognizer *)gestureRecognizer;
-(void)setGestureRecognizer:(UIScrollViewPanGestureRecognizer *)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)simulateTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
@end

