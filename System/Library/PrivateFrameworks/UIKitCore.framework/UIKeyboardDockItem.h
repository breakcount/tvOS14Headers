/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, UIImage, UIKeyboardDockItemButton, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface UIKeyboardDockItem : NSObject {

	NSString* _identifier;
	NSString* _imageName;
	UIImage* _image;
	UIKeyboardDockItemButton* _button;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CGPoint _touchDownPoint;

}

@property (nonatomic,retain) UIKeyboardDockItemButton * button;                                      //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) CGPoint touchDownPoint;                                                 //@synthesize touchDownPoint=_touchDownPoint - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                                   //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIKeyboardDockItemButton * view; 
+(id)_standardGlyphColor;
+(id)_darkStyleGlyphColor;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIKeyboardDockItemButton *)button;
-(void)setButton:(UIKeyboardDockItemButton *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIKeyboardDockItemButton *)view;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id)imageWithRenderConfig:(id)arg1 ;
-(id)initWithImageName:(id)arg1 identifier:(id)arg2 ;
-(CGPoint)touchDownPoint;
-(void)setTouchDownPoint:(CGPoint)arg1 ;
@end

