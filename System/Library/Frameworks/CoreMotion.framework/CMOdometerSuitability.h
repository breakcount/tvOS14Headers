/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMOdometerSuitability : NSObject <NSSecureCoding, NSCopying> {

	BOOL _suitableForRunning;
	BOOL _suitableForWalking;
	NSDate* _startDate;

}

@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) BOOL suitableForRunning;              //@synthesize suitableForRunning=_suitableForRunning - In the implementation block
@property (nonatomic,readonly) BOOL suitableForWalking;              //@synthesize suitableForWalking=_suitableForWalking - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(id)initWithStartDate:(id)arg1 suitableForRunning:(BOOL)arg2 suitableForWalking:(BOOL)arg3 ;
-(BOOL)suitableForRunning;
-(BOOL)suitableForWalking;
@end
