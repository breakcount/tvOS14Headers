/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket, OS_dispatch_queue;
@class NSObject, CLSilo;

@interface CLGeocoderInternal : NSObject {

	/*^block*/id _geocodeCompletionHandler;
	id<GEOMapServiceTicket> _ticket;
	NSObject*<OS_dispatch_queue> _queue;
	CLSilo* _responseSilo;

}

@property (retain) CLSilo * responseSilo;              //@synthesize responseSilo=_responseSilo - In the implementation block
-(id)init;
-(void)dealloc;
-(CLSilo *)responseSilo;
-(void)setResponseSilo:(CLSilo *)arg1 ;
@end

