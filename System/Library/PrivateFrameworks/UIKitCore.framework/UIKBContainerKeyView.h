/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIKBKeyView;

@interface UIKBContainerKeyView : UIKBKeyView {

	UIKBKeyView* _keyView;

}
-(void)dealloc;
-(id)key;
-(void)setNeedsDisplay;
-(void)displayLayer:(id)arg1 ;
-(void)prepareForDisplay;
-(id)factory;
-(void)setFactory:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)renderConfig;
-(id)contentsKeyView;
-(void)setDrawFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)dimKeys:(id)arg1 ;
-(id)keyplane;
-(BOOL)hasRendered;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)layerForRenderFlags:(long long)arg1 ;
-(CGRect)drawFrame;
-(BOOL)requiresSublayers;
-(long long)imageOrientationForLayer:(id)arg1 ;
-(void)changeBackgroundToEnabled;
-(void)changeBackgroundToActiveIfNecessary;
@end
