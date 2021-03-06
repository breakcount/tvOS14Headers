/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) unsigned long long lifetimeType; 
+(BOOL)supportsSecureCoding;
+(id)lifetimeWithDateInterval:(id)arg1 ;
+(id)lifetimeWithDuration:(double)arg1 ;
+(id)lifetimeWithCurrentLocation;
+(id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg1 occurrenceDate:(id)arg2 ;
+(id)lifetimeWithCalendarEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 ;
+(id)lifetimeMatchingScheduleWithIdentifier:(id)arg1 ;
+(id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg1 ;
+(id)lifetimeForUserRequest;
+(id)_secureCodingLifetimeClasses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(unsigned long long)lifetimeType;
@end

