/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSDate;

@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _year;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long year;                  //@synthesize year=_year - In the implementation block
-(long long)year;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)initWithYear:(long long)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_bestOfPastTimeTitle;
-(id)_bestOfYearTitle;
-(id)_generateSubtitle;
@end

