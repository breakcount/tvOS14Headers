/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SPSchedulerInformation : NSObject <NSSecureCoding> {

	long long _advertisementCount;
	long long _priorityCount;
	long long _lowBatteryCount;

}

@property (assign,nonatomic) long long advertisementCount;              //@synthesize advertisementCount=_advertisementCount - In the implementation block
@property (assign,nonatomic) long long priorityCount;                   //@synthesize priorityCount=_priorityCount - In the implementation block
@property (assign,nonatomic) long long lowBatteryCount;                 //@synthesize lowBatteryCount=_lowBatteryCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)advertisementCount;
-(long long)priorityCount;
-(long long)lowBatteryCount;
-(void)setAdvertisementCount:(long long)arg1 ;
-(void)setPriorityCount:(long long)arg1 ;
-(void)setLowBatteryCount:(long long)arg1 ;
@end

