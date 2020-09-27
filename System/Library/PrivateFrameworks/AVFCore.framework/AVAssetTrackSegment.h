/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAssetTrackSegment : NSObject <NSSecureCoding> {

	SCD_Struct_CM9 _timeMapping;

}

@property (nonatomic,readonly) SCD_Struct_CM9 timeMapping;              //@synthesize timeMapping=_timeMapping - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM9)timeMapping;
-(id)_initWithTimeMapping:(SCD_Struct_CM9)arg1 ;
@end

