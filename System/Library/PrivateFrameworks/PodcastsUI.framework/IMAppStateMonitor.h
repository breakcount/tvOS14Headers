/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIApplication;

@interface IMAppStateMonitor : NSObject {

	UIApplication* _app;
	long long _applicationState;
	double _backgroundTimeRemaining;

}

@property (nonatomic,retain) UIApplication * app;                         //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) long long applicationState;                  //@synthesize applicationState=_applicationState - In the implementation block
@property (assign,nonatomic) double backgroundTimeRemaining;              //@synthesize backgroundTimeRemaining=_backgroundTimeRemaining - In the implementation block
+(id)sharedInstance;
-(id)init;
-(double)backgroundTimeRemaining;
-(long long)applicationState;
-(void)applicationDidEnterBackground;
-(void)setApplicationState:(long long)arg1 ;
-(UIApplication *)app;
-(void)setApp:(UIApplication *)arg1 ;
-(void)applicationWillResignActive;
-(void)applicationDidBecomeActive;
-(void)applicationDidFinishLaunching;
-(void)setBackgroundTimeRemaining:(double)arg1 ;
@end

