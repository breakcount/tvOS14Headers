/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue {

	SCD_Struct_CM9 _timeMapping;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeMapping:(SCD_Struct_CM9)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(const char*)objCType;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(SCD_Struct_CM9)CMTimeMappingValue;
@end

