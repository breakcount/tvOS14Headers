/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters;


@protocol _UIStatusBarAnimationProviding <NSObject>
@property (getter=_preferredStatusBarStyleAnimationParameters,nonatomic,readonly) UIStatusBarStyleAnimationParameters * preferredStatusBarStyleAnimationParameters; 
@property (getter=_preferredStatusBarHideAnimationParameters,nonatomic,readonly) UIStatusBarHideAnimationParameters * preferredStatusBarHideAnimationParameters; 
@property (nonatomic,readonly) long long preferredStatusBarUpdateAnimation; 
@required
-(long long)preferredStatusBarUpdateAnimation;
-(id)_preferredStatusBarHideAnimationParameters;
-(id)_preferredStatusBarStyleAnimationParameters;

@end

