/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocation, NSString, NSURL, NSDate;

@interface RTConnectionsLocation : NSObject {

	RTLocation* _location;
	NSString* _name;
	NSString* _originatingBundleID;
	NSString* _fullFormattedAddress;
	NSURL* _mapItemURL;
	NSDate* _createdAt;

}

@property (nonatomic,readonly) RTLocation * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * originatingBundleID;               //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,readonly) NSString * fullFormattedAddress;              //@synthesize fullFormattedAddress=_fullFormattedAddress - In the implementation block
@property (nonatomic,readonly) NSURL * mapItemURL;                           //@synthesize mapItemURL=_mapItemURL - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                           //@synthesize createdAt=_createdAt - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(RTLocation *)location;
-(NSDate *)createdAt;
-(NSString *)originatingBundleID;
-(NSString *)fullFormattedAddress;
-(NSURL *)mapItemURL;
-(id)mapItemUsingMapServiceManager:(id)arg1 options:(id)arg2 ;
-(id)initWithLocation:(id)arg1 name:(id)arg2 originatingBundleID:(id)arg3 fullFormattedAddress:(id)arg4 mapItemURL:(id)arg5 createdAt:(id)arg6 ;
-(id)_mapItemFromLocalSearch:(id)arg1 options:(id)arg2 ;
-(id)_mapItemFromForwardGeocode:(id)arg1 options:(id)arg2 ;
-(id)_addProactiveExpertSourceTo:(id)arg1 ;
@end

