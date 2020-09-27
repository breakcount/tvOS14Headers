/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaCGGradientInterface.h>

@class NSMutableArray, CCVegaCGContext;

@interface CCVegaCGLinearGradient : NSObject <CCVegaCGGradientInterface> {

	double _x0;
	double _y0;
	double _x1;
	double _y1;
	NSMutableArray* _colorStops;
	CCVegaCGContext* _context;

}
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)initWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(void)addColorStopWithOffset:(double)arg1 color:(id)arg2 ;
-(void)fillWithContext:(CGContextRef)arg1 ;
@end

