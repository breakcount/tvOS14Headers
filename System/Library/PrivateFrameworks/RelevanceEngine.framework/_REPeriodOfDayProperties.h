/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol _REPeriodOfDayProperties <REExportedInterface>
@property (nonatomic,readonly) unsigned long long periodOfDay; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)periodOfDay;

@end

