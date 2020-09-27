/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_unique_connection.h>

@protocol OS_nw_endpoint;
@class NSObject, NWConcrete_nw_connection, NSString;

@interface NWConcrete_nw_unique_connection : NSObject <OS_nw_unique_connection> {

	NSObject*<OS_nw_endpoint> endpoint;
	char service[436];
	unsigned long long receivedSequenceNumber;
	unsigned long long uniqueID;
	unsigned char uuid[16];
	NWConcrete_nw_connection* connection;
	int dupedSocketFD;
	unsigned isIncoming : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
@end

