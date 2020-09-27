/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow {

	unsigned long long _precision;
	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) double minValue;                           //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                           //@synthesize maxValue=_maxValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)precision;
-(void)setMaxValue:(double)arg1 ;
-(double)maxValue;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(id)precision:(unsigned long long)arg1 ;
-(id)_validatedValue:(id)arg1 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(id)between:(double)arg1 and:(double)arg2 ;
@end

