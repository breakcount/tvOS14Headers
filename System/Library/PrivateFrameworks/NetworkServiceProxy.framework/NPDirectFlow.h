/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@class NSNumber, NSPConnectionInfo, NSDate;

@interface NPDirectFlow : NSObject {

	nw_protocol* _protocol;
	NSNumber* _identifier;
	NSPConnectionInfo* _connectionInfo;
	NSDate* _startDate;
	NSDate* _connectionStartDate;
	NSDate* _firstTxByteTimestamp;

}

@property (readonly) NSNumber * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) nw_protocol* protocol; 
@property (retain) NSPConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (readonly) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * connectionStartDate;                    //@synthesize connectionStartDate=_connectionStartDate - In the implementation block
@property (retain) NSDate * firstTxByteTimestamp;                   //@synthesize firstTxByteTimestamp=_firstTxByteTimestamp - In the implementation block
+(void)initializeProtocol;
-(NSNumber *)identifier;
-(nw_protocol*)protocol;
-(NSDate *)startDate;
-(id)initWithParameters:(id)arg1 ;
-(void)handleDetachedFromProtocol;
-(NSDate *)firstTxByteTimestamp;
-(NSPConnectionInfo *)connectionInfo;
-(void)setConnectionInfo:(NSPConnectionInfo *)arg1 ;
-(NSDate *)connectionStartDate;
-(void)createConnectionInfo;
-(void)setConnectionStartDate:(NSDate *)arg1 ;
-(void)setFirstTxByteTimestamp:(NSDate *)arg1 ;
@end

