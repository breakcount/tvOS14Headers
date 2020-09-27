/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _variableOverides;
	SCD_Struct_MK25 _options;

}

@property (nonatomic,readonly) SCD_Struct_MK25 options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * variableOverides;              //@synthesize variableOverides=_variableOverides - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_MK25)options;
-(id)initWithOptions:(SCD_Struct_MK25)arg1 variableOverrides:(id)arg2 ;
-(BOOL)isEqualToServerFormattedStringParameters:(id)arg1 ;
-(NSDictionary *)variableOverides;
-(id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2 ;
@end

