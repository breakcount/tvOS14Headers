/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying> {

	CMMotionActivity* _activity;
	double _interval;

}

@property (nonatomic,retain) CMMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) double interval;                          //@synthesize interval=_interval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(CMMotionActivity *)activity;
-(void)setActivity:(CMMotionActivity *)arg1 ;
-(id)initWithActivity:(id)arg1 ;
@end

