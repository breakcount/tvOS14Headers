/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMRotationRateData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM1 rotationRate; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM1)rotationRate;
-(id)initWithRotationRate:(SCD_Struct_CM15)arg1 andTimestamp:(double)arg2 ;
@end

