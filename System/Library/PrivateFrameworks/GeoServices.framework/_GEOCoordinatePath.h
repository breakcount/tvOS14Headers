/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {

	SCD_Union_GE131* _coordinates;
	BOOL _usesZilch;
	unsigned long long _count;
	double* _pointLengths;

}

@property (nonatomic,readonly) ControlPoint* zilchControlPoints; 
@property (nonatomic,readonly) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) double* pointLengths;                          //@synthesize pointLengths=_pointLengths - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(double)length;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_GE32)coordinateAt:(unsigned long long)arg1 ;
-(ControlPoint*)zilchControlPoints;
-(void)setZilchCoordinates:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)setBasicCoordinates:(SCD_Struct_GE32*)arg1 count:(unsigned long long)arg2 ;
-(void)setPointLengths:(double*)arg1 ;
-(double*)pointLengths;
@end
