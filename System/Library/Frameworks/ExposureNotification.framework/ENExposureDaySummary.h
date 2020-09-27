/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSDate, ENExposureSummaryItem;

@interface ENExposureDaySummary : NSObject <CUXPCCodable> {

	NSDate* _date;
	ENExposureSummaryItem* _confirmedTestSummary;
	ENExposureSummaryItem* _confirmedClinicalDiagnosisSummary;
	ENExposureSummaryItem* _recursiveSummary;
	ENExposureSummaryItem* _selfReportedSummary;
	ENExposureSummaryItem* _daySummary;

}

@property (nonatomic,copy) NSDate * date;                                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * confirmedTestSummary;                           //@synthesize confirmedTestSummary=_confirmedTestSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * confirmedClinicalDiagnosisSummary;              //@synthesize confirmedClinicalDiagnosisSummary=_confirmedClinicalDiagnosisSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * recursiveSummary;                               //@synthesize recursiveSummary=_recursiveSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * selfReportedSummary;                            //@synthesize selfReportedSummary=_selfReportedSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * daySummary;                                     //@synthesize daySummary=_daySummary - In the implementation block
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(ENExposureSummaryItem *)daySummary;
-(void)setDaySummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)confirmedTestSummary;
-(void)setConfirmedTestSummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)confirmedClinicalDiagnosisSummary;
-(void)setConfirmedClinicalDiagnosisSummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)selfReportedSummary;
-(void)setSelfReportedSummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)recursiveSummary;
-(void)setRecursiveSummary:(ENExposureSummaryItem *)arg1 ;
-(void)roundDurations;
@end

