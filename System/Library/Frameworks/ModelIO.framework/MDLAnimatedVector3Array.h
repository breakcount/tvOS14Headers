/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector3Array : MDLAnimatedValue {

	unsigned long long _elementCount;

}

@property (assign,nonatomic) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(unsigned long long)elementCount;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(void)setFloat3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setElementCount:(unsigned long long)arg1 ;
-(void)setDouble3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getFloat3Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getDouble3Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithFloat3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(void)resetWithDouble3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(unsigned long long)getFloat3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

