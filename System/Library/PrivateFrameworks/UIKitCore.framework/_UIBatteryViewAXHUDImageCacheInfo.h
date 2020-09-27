/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIColor;

@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject {

	BOOL _showBolt;
	BOOL _reverseLayoutDirection;
	UIImage* _cachedImage;
	UIColor* _fillColor;
	UIColor* _tintColor;
	double _capacity;
	double _scale;

}

@property (nonatomic,retain) UIImage * cachedImage;                    //@synthesize cachedImage=_cachedImage - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) BOOL showBolt;                            //@synthesize showBolt=_showBolt - In the implementation block
@property (assign,nonatomic) BOOL reverseLayoutDirection;              //@synthesize reverseLayoutDirection=_reverseLayoutDirection - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(double)capacity;
-(void)setScale:(double)arg1 ;
-(void)setCapacity:(double)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(UIImage *)cachedImage;
-(void)setCachedImage:(UIImage *)arg1 ;
-(BOOL)showBolt;
-(BOOL)reverseLayoutDirection;
-(BOOL)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 tintColor:(id)arg3 showingBolt:(BOOL)arg4 reverseLayout:(BOOL)arg5 scale:(double)arg6 ;
-(void)setShowBolt:(BOOL)arg1 ;
-(void)setReverseLayoutDirection:(BOOL)arg1 ;
@end
