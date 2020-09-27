/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOComposedWaypoint;

@interface MNTraceCommuteDestinationRow : NSObject {

	unsigned long long _destinationID;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;

}

@property (assign,nonatomic) unsigned long long destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                //@synthesize waypoint=_waypoint - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(GEOComposedWaypoint *)waypoint;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
@end
