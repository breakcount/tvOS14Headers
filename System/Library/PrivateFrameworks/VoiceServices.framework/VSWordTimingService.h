/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VSWordTimingService : NSObject {

	NSDictionary* _wordTimings;

}

@property (nonatomic,retain) NSDictionary * wordTimings;              //@synthesize wordTimings=_wordTimings - In the implementation block
-(id)timingPlistForLanguage:(id)arg1 ;
-(id)timingInfosFrom:(id)arg1 withText:(id)arg2 ;
-(id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 withGender:(long long)arg3 ;
-(NSDictionary *)wordTimings;
-(void)setWordTimings:(NSDictionary *)arg1 ;
@end

