/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreChart/CoreChart-Structs.h>
#import <CoreChart/CCVegaSingleItemShapeMarkDef.h>

@class NSString;

@interface CCVegaPathMarkDef : CCVegaSingleItemShapeMarkDef {

	NSString* _cachedPathDef;
	CGPathRef _cachedPath;

}
-(void)dealloc;
-(CGPathRef)newPathForMark:(id)arg1 ;
-(CATransform3D)transformForMark:(id)arg1 ;
@end
