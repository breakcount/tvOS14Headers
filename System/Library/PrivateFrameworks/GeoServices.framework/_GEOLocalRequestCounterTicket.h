/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEORequestCounterTicket.h>

@protocol OS_nw_activity;
@class NSString, GEORequestCounterPersistence, NSObject;

@interface _GEOLocalRequestCounterTicket : NSObject <GEORequestCounterTicket> {

	long long _subTaskXmitBytes;
	long long _subTaskRecvBytes;
	NSString* _appId;
	NSString* _requestId;
	GEORequestCounterPersistence* _persistence;
	NSObject*<OS_nw_activity> _nwActivity;
	_GEOLocalRequestCounterTicket* _parentTask;
	BOOL _logNetworkActivityOnly;
	BOOL _complete;
	SCD_Struct_GE86 _type;
	unsigned char _subtasks;
	unsigned long long _signpostId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestCounterTicketForType:(SCD_Struct_GE86)arg1 appId:(id)arg2 ;
+(id)_requestCounterTicketForType:(SCD_Struct_GE86)arg1 appId:(id)arg2 withParent:(id)arg3 logNetworkActivityOnly:(BOOL)arg4 ;
+(id)requestCounterTicketForType:(SCD_Struct_GE86)arg1 appId:(id)arg2 persistence:(id)arg3 ;
-(NSString *)description;
-(id)createSubtask:(BOOL)arg1 ;
-(void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3 ;
-(void)_subTask:(id)arg1 completedWithResult:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4 ;
-(void)startingRequestWithTask:(id)arg1 ;
@end

