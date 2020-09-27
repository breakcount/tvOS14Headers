/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSHolidayCalendarEventDateRuleDelegate.h>

@class NSArray, NSString;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate> {

	NSArray* _eventRules;

}

@property (nonatomic,retain) NSArray * eventRules;                  //@synthesize eventRules=_eventRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLocale:(id)arg1 ;
-(id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2 ;
-(id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2 ;
-(id)eventRuleForLocalDate:(id)arg1 ;
-(void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_ruleWithUUID:(id)arg1 ;
-(NSArray *)eventRules;
-(void)setEventRules:(NSArray *)arg1 ;
@end

