/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol GEOTransitRoutingIncidentMessage <NSObject>
@property (nonatomic,readonly) NSString * routingMessage; 
@property (nonatomic,readonly) NSArray * transitIncidents; 
@required
-(NSArray *)transitIncidents;
-(NSString *)routingMessage;

@end

