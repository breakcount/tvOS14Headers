/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEORequestCounterProtocol.h>

@class NSString;

@interface GEORequestCounterRemoteProxy : NSObject <GEORequestCounterProtocol>

@property (assign,nonatomic) BOOL countersEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestCounterTicketForType:(SCD_Struct_GE0)arg1 appId:(id)arg2 ;
-(void)readRequestsPerAppSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)readRequestLogsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startPowerLogSessionWithName:(id)arg1 ;
-(void)clearCounters;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned)arg3 tileDownloadAttempts:(unsigned)arg4 successes:(unsigned)arg5 failures:(unsigned)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(void)readProactiveTileDownloadsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(BOOL)arg4 at:(id)arg5 ;
-(void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)countersEnabled;
-(void)setCountersEnabled:(BOOL)arg1 ;
-(void)_incrementForApp:(id)arg1 requestId:(id)arg2 time:(id)arg3 requestType:(SCD_Struct_GE0)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 ;
-(void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4 ;
@end

