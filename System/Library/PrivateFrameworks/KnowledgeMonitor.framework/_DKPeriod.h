/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKPeriodType.h>

@class NSDate;

@interface _DKPeriod : NSObject <DKPeriodType> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)duration;
-(BOOL)contains:(id)arg1 ;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
@end

