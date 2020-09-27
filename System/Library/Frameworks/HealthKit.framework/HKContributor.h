/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface HKContributor : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _UUID;
	NSString* _appleID;
	NSString* _callerID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                    //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleID;               //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * callerID;              //@synthesize callerID=_callerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSString *)appleID;
-(NSString *)callerID;
-(id)_initWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3 ;
@end

