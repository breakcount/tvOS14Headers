/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView {

	BOOL _shadowFadesToBottom;
	BOOL _drawsShadow;
	BOOL _showsInDarkBackground;

}

@property (assign,nonatomic) BOOL shadowFadesToBottom;                //@synthesize shadowFadesToBottom=_shadowFadesToBottom - In the implementation block
@property (assign,nonatomic) BOOL drawsShadow;                        //@synthesize drawsShadow=_drawsShadow - In the implementation block
@property (assign,nonatomic) BOOL showsInDarkBackground;              //@synthesize showsInDarkBackground=_showsInDarkBackground - In the implementation block
+(double)widthWithShadow:(BOOL)arg1 ;
+(id)leftShadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)drawsShadow;
-(void)setDrawsShadow:(BOOL)arg1 ;
-(BOOL)shadowFadesToBottom;
-(BOOL)showsInDarkBackground;
-(void)setShadowFadesToBottom:(BOOL)arg1 ;
-(void)setShowsInDarkBackground:(BOOL)arg1 ;
@end
