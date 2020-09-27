/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMCameraRecordingEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMCameraRecordingReachabilityEvent : NSObject <HMCameraRecordingEvent, NSSecureCoding> {

	BOOL _reachable;
	NSUUID* _uniqueIdentifier;
	NSDate* _dateOfOccurrence;

}

@property (copy,readonly) NSUUID * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;              //@synthesize reachable=_reachable - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                 //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(BOOL)isReachable;
-(NSDate *)dateOfOccurrence;
-(id)initWithUniqueIdentifier:(id)arg1 dateOfOccurrence:(id)arg2 reachable:(BOOL)arg3 ;
@end

