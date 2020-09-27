/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol _UIImageViewOverlayViewDelegate;
@interface _UIImageViewOverlayView : UIView {

	id<_UIImageViewOverlayViewDelegate> _overlayViewDelegate;

}

@property (assign,nonatomic,__weak) id<_UIImageViewOverlayViewDelegate> overlayViewDelegate;              //@synthesize overlayViewDelegate=_overlayViewDelegate - In the implementation block
-(void)setClipsToBounds:(BOOL)arg1 ;
-(id<_UIImageViewOverlayViewDelegate>)overlayViewDelegate;
-(void)setOverlayViewDelegate:(id<_UIImageViewOverlayViewDelegate>)arg1 ;
@end

