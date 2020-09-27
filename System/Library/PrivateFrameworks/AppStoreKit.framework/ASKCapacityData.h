/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface ASKCapacityData : NSObject {

	NSNumber* _totalSystemCapacity;
	NSNumber* _totalSystemAvailable;
	NSNumber* _totalDataCapacity;
	NSNumber* _totalDataAvailable;
	NSNumber* _totalDiskCapacity;

}

@property (nonatomic,retain) NSNumber * totalSystemCapacity;               //@synthesize totalSystemCapacity=_totalSystemCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * totalSystemAvailable;              //@synthesize totalSystemAvailable=_totalSystemAvailable - In the implementation block
@property (nonatomic,retain) NSNumber * totalDataCapacity;                 //@synthesize totalDataCapacity=_totalDataCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * totalDataAvailable;                //@synthesize totalDataAvailable=_totalDataAvailable - In the implementation block
@property (nonatomic,retain) NSNumber * totalDiskCapacity;                 //@synthesize totalDiskCapacity=_totalDiskCapacity - In the implementation block
-(id)init;
-(NSNumber *)totalDiskCapacity;
-(void)setTotalSystemCapacity:(NSNumber *)arg1 ;
-(void)setTotalSystemAvailable:(NSNumber *)arg1 ;
-(void)setTotalDataCapacity:(NSNumber *)arg1 ;
-(void)setTotalDataAvailable:(NSNumber *)arg1 ;
-(void)setTotalDiskCapacity:(NSNumber *)arg1 ;
-(NSNumber *)totalSystemCapacity;
-(NSNumber *)totalSystemAvailable;
-(NSNumber *)totalDataCapacity;
-(NSNumber *)totalDataAvailable;
@end

