/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _samples;

}

@property (nonatomic,retain) NSMutableArray * samples;              //@synthesize samples=_samples - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeMetric;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)size;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)samples;
-(double)variance;
-(void)merge:(id)arg1 ;
-(void)addSample:(id)arg1 ;
-(double)average;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(id)generateDataForSR:(id)arg1 dropSampleSize:(BOOL)arg2 ;
@end
