/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphLocationNode.h>

@class NSString, CLLocation;

@interface PGGraphAddressNode : PGGraphLocationNode {

	long long _locationMode;
	NSString* _name;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long locationMode; 
@property (nonatomic,readonly) BOOL isImproved; 
@property (nonatomic,readonly) BOOL isOcean; 
@property (nonatomic,readonly) BOOL isCoarse; 
@property (nonatomic,readonly) BOOL isPrecise; 
@property (nonatomic,readonly) CLLocation * location; 
+(id)filter;
+(id)homeOfAddress;
+(id)workOfAddress;
+(id)homeWorkOfAddress;
+(id)cityOfAddress;
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned short)domain;
-(void)setName:(NSString *)arg1 ;
-(id)UUID;
-(CLLocationCoordinate2D)coordinate;
-(id)label;
-(CLLocation *)location;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isCoarse;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(BOOL)isOcean;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)stateNode;
-(void)enumerateAreaNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)areaNodes;
-(long long)locationMode;
-(BOOL)isImproved;
-(BOOL)isPrecise;
-(id)streetNode;
-(id)districtNode;
-(id)cityNode;
-(id)countryNode;
-(BOOL)isPersonHomeOrWorkAddress;
-(void)enumeratePersonHomeOrWorkNodesUsingBlock:(/*^block*/id)arg1 ;
@end

