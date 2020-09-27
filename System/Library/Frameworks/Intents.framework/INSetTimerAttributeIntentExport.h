/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTimer, INSpeakableString;


@protocol INSetTimerAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (assign,nonatomic) double toDuration; 
@property (nonatomic,copy) INSpeakableString * toLabel; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(double)toDuration;
-(void)setToDuration:(double)arg1;
-(INSpeakableString *)toLabel;
-(void)setToLabel:(id)arg1;

@end

