/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOETATrafficUpdateRequest, GEODataConditionalConnectionProperties, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {

	GEOETATrafficUpdateRequest* _request;
	GEODataConditionalConnectionProperties* _connectionProperties;

}

@property (nonatomic,retain) GEOETATrafficUpdateRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODataConditionalConnectionProperties * connectionProperties;              //@synthesize connectionProperties=_connectionProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(BOOL)isValid;
-(GEOETATrafficUpdateRequest *)request;
-(GEODataConditionalConnectionProperties *)connectionProperties;
-(void)setRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)expectsReply;
-(void)setConnectionProperties:(GEODataConditionalConnectionProperties *)arg1 ;
@end

