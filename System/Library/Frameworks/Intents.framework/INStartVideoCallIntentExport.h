/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol INStartVideoCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (nonatomic,copy) NSArray * contacts; 
@required
-(id)init;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;

@end

