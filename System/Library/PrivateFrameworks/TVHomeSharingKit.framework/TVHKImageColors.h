/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface TVHKImageColors : NSObject {

	BOOL _isBackgroundLight;
	UIColor* _backgroundColor;
	UIColor* _textPrimaryColor;
	UIColor* _textSecondaryColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textPrimaryColor;                    //@synthesize textPrimaryColor=_textPrimaryColor - In the implementation block
@property (nonatomic,retain) UIColor * textSecondaryColor;                  //@synthesize textSecondaryColor=_textSecondaryColor - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundLight;                        //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
@property (nonatomic,readonly) long long recommendedBlurStyle; 
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(BOOL)isBackgroundLight;
-(void)setTextPrimaryColor:(UIColor *)arg1 ;
-(void)setTextSecondaryColor:(UIColor *)arg1 ;
-(void)setIsBackgroundLight:(BOOL)arg1 ;
-(long long)recommendedBlurStyle;
-(UIColor *)textPrimaryColor;
-(UIColor *)textSecondaryColor;
@end

