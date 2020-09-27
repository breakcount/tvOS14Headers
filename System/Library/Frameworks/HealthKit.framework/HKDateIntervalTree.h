/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@interface HKDateIntervalTree : NSObject {

	unique_ptr<HKIntervalTree<double>, std::__1::default_delete<HKIntervalTree<double> > >* _tree;

}
-(id)init;
-(void)insertInterval:(id)arg1 ;
-(BOOL)hasOverlapWithInterval:(id)arg1 ;
-(id)mergedIntervals;
@end

