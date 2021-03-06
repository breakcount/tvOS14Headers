/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SiriTestingContext;

@interface SASTestingInputController : NSObject {

	SiriTestingContext* _preloadedTestingInput;

}

@property (nonatomic,readonly) SiriTestingContext * preloadedTestingInput;              //@synthesize preloadedTestingInput=_preloadedTestingInput - In the implementation block
-(id)init;
-(void)dealloc;
-(id)dequeuePreloadedTestingContext;
-(void)_registerForTestingNotifications;
-(void)_testingStringsDidChange:(id)arg1 ;
-(void)_testingAudioInputPathsDidChange:(id)arg1 ;
-(SiriTestingContext *)preloadedTestingInput;
@end

