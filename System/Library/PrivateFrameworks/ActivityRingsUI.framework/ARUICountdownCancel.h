/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>
#import <libobjc.A.dylib/ARUICountdownAnimation.h>

@interface ARUICountdownCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
+(id)identifier;
-(id)identifier;
-(void)cancel;
-(double)delay;
-(double)duration;
-(id)timingFunction;
-(BOOL)cancelable;
-(void)applyToCountdownView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

