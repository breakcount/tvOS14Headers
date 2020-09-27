/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CABackdropLayerDelegate.h>

@class CABackdropLayer, NSString;

@interface _UIBackdropEffectView : UIView <CABackdropLayerDelegate> {

	CABackdropLayer* _backdropLayer;
	double _zoom;

}

@property (nonatomic,retain) CABackdropLayer * backdropLayer;              //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (assign,nonatomic) double zoom;                                  //@synthesize zoom=_zoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
@end
