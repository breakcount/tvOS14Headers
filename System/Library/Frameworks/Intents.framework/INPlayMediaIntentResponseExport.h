/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol INPlayMediaIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@required
-(long long)code;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(id)arg1;

@end

