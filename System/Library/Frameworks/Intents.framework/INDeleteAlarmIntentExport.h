/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INAlarmSearch, NSArray;


@protocol INDeleteAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy) NSArray * alarms; 
@required
-(id)init;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(NSArray *)alarms;
-(void)setAlarms:(id)arg1;

@end

