/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SkipTimeIntentHandling.h>

@interface SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject <SkipTimeIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSkipTime:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDurationForSkipTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDevicesForSkipTime:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSkipTime:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

