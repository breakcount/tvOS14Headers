/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HKBiologicalSexObject : NSObject <NSCopying, NSSecureCoding> {

	long long _biologicalSex;

}

@property (readonly) long long biologicalSex;              //@synthesize biologicalSex=_biologicalSex - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBiologicalSex:(long long)arg1 ;
-(long long)biologicalSex;
@end

