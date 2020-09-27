/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector2 : MDLAnimatedValue
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setFloat2:(double)arg1 ;
-(void)setDouble2:(double)arg1 ;
-(2)float2AtTime:(double)arg1 ;
-(2)double2AtTime:(double)arg1 ;
-(void)resetWithFloat2Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble2Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)getFloat2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble2Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

