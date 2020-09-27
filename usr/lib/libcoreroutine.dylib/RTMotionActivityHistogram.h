/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject {

	NSMutableDictionary* _bins;
	double _totalInterval;

}

@property (assign,nonatomic) double totalInterval;                      //@synthesize totalInterval=_totalInterval - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bins;              //@synthesize bins=_bins - In the implementation block
-(id)init;
-(NSMutableDictionary *)bins;
-(id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3 ;
-(double)totalInterval;
-(id)binForType:(unsigned long long)arg1 ;
-(void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3 ;
-(void)setTotalInterval:(double)arg1 ;
-(id)binsSortedByInterval;
@end

