/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMMagnetometerDataInternal : NSObject <NSCopying> {

	SCD_Struct_CM15 fMagneticField;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMagneticField:(SCD_Struct_CM15)arg1 ;
-(id)initWithMagneticField:(SCD_Struct_CM15)arg1 ;
@end
