/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitConnectionInfo.h>

@class NSString, NSArray, NSURL, GEOPDTransitConnection;

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo> {

	GEOPDTransitConnection* _connection;
	int _providerID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(unsigned long long)muid;
-(int)providerID;
-(NSArray *)labelItems;
-(NSURL *)urlToOpen;
-(id)initWithConnection:(id)arg1 providerID:(int)arg2 ;
@end

