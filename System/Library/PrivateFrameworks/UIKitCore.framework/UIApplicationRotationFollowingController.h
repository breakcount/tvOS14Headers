/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController {

	BOOL _sizesWindowToScene;

}

@property (assign,nonatomic) BOOL sizesWindowToScene;              //@synthesize sizesWindowToScene=_sizesWindowToScene - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setSizesWindowToScene:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(id)_topMostWindow;
-(BOOL)sizesWindowToScene;
@end

