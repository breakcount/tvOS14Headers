/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCameraStreamMessaging, AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraStreamConfigure, AWDHomeKitCameraStreamIDSConnSetup, NSMutableArray, NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitCameraStream : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _startupDelay;
	unsigned long long _timestamp;
	int _certified;
	AWDHomeKitCameraStreamMessaging* _controllerMessaging;
	unsigned _errorCode;
	AWDHomeKitCameraIDSSessionSetup* _idsSessionSetup;
	AWDHomeKitCameraStreamConfigure* _initialConfiguration;
	AWDHomeKitCameraStreamIDSConnSetup* _phoneIDSConnectionSetup;
	unsigned _receivedFirstFrame;
	NSMutableArray* _reconfigurations;
	AWDHomeKitCameraStreamMessaging* _residentMessaging;
	NSMutableArray* _resolutionCounts;
	int _resolutionOnClose;
	NSString* _sessionID;
	unsigned _underlyingErrorCode;
	NSString* _underlyingErrorDomain;
	AWDHomeKitVendorInformation* _vendorDetails;
	AWDHomeKitCameraStreamIDSConnSetup* _watchIDSConnectionSetup;
	AWDHomeKitCameraStreamMessaging* _watchMessaging;
	BOOL _isLocal;
	BOOL _isStreamStarted;
	SCD_Struct_AW15 _has;

}

@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;                               //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                                             //@synthesize certified=_certified - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                                        //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocal; 
@property (assign,nonatomic) BOOL isLocal;                                                              //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) BOOL hasInitialConfiguration; 
@property (nonatomic,retain) AWDHomeKitCameraStreamConfigure * initialConfiguration;                    //@synthesize initialConfiguration=_initialConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * reconfigurations;                                         //@synthesize reconfigurations=_reconfigurations - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchIDSConnectionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetup * watchIDSConnectionSetup;              //@synthesize watchIDSConnectionSetup=_watchIDSConnectionSetup - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneIDSConnectionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetup * phoneIDSConnectionSetup;              //@synthesize phoneIDSConnectionSetup=_phoneIDSConnectionSetup - In the implementation block
@property (nonatomic,readonly) BOOL hasIdsSessionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraIDSSessionSetup * idsSessionSetup;                         //@synthesize idsSessionSetup=_idsSessionSetup - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraStreamMessaging * watchMessaging;                          //@synthesize watchMessaging=_watchMessaging - In the implementation block
@property (nonatomic,readonly) BOOL hasControllerMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraStreamMessaging * controllerMessaging;                     //@synthesize controllerMessaging=_controllerMessaging - In the implementation block
@property (nonatomic,readonly) BOOL hasResidentMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraStreamMessaging * residentMessaging;                       //@synthesize residentMessaging=_residentMessaging - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedFirstFrame; 
@property (assign,nonatomic) unsigned receivedFirstFrame;                                               //@synthesize receivedFirstFrame=_receivedFirstFrame - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                                          //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) unsigned underlyingErrorCode;                                              //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasStartupDelay; 
@property (assign,nonatomic) unsigned long long startupDelay;                                           //@synthesize startupDelay=_startupDelay - In the implementation block
@property (assign,nonatomic) BOOL hasIsStreamStarted; 
@property (assign,nonatomic) BOOL isStreamStarted;                                                      //@synthesize isStreamStarted=_isStreamStarted - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionOnClose; 
@property (assign,nonatomic) int resolutionOnClose;                                                     //@synthesize resolutionOnClose=_resolutionOnClose - In the implementation block
@property (nonatomic,retain) NSMutableArray * resolutionCounts;                                         //@synthesize resolutionCounts=_resolutionCounts - In the implementation block
+(Class)reconfigurationsType;
+(Class)resolutionCountType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isLocal;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(unsigned)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasUnderlyingErrorDomain;
-(NSString *)underlyingErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setUnderlyingErrorCode:(unsigned)arg1 ;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(unsigned)underlyingErrorCode;
-(BOOL)hasSessionID;
-(void)setIsLocal:(BOOL)arg1 ;
-(void)setHasIsLocal:(BOOL)arg1 ;
-(BOOL)hasIsLocal;
-(BOOL)hasReceivedFirstFrame;
-(void)setHasReceivedFirstFrame:(BOOL)arg1 ;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
-(void)addResolutionCount:(id)arg1 ;
-(void)addReconfigurations:(id)arg1 ;
-(unsigned long long)resolutionCountsCount;
-(void)clearResolutionCounts;
-(id)resolutionCountAtIndex:(unsigned long long)arg1 ;
-(void)setInitialConfiguration:(AWDHomeKitCameraStreamConfigure *)arg1 ;
-(unsigned long long)reconfigurationsCount;
-(void)clearReconfigurations;
-(id)reconfigurationsAtIndex:(unsigned long long)arg1 ;
-(void)setWatchIDSConnectionSetup:(AWDHomeKitCameraStreamIDSConnSetup *)arg1 ;
-(void)setPhoneIDSConnectionSetup:(AWDHomeKitCameraStreamIDSConnSetup *)arg1 ;
-(void)setIdsSessionSetup:(AWDHomeKitCameraIDSSessionSetup *)arg1 ;
-(void)setWatchMessaging:(AWDHomeKitCameraStreamMessaging *)arg1 ;
-(void)setControllerMessaging:(AWDHomeKitCameraStreamMessaging *)arg1 ;
-(void)setResidentMessaging:(AWDHomeKitCameraStreamMessaging *)arg1 ;
-(BOOL)hasInitialConfiguration;
-(BOOL)hasWatchIDSConnectionSetup;
-(BOOL)hasPhoneIDSConnectionSetup;
-(BOOL)hasIdsSessionSetup;
-(BOOL)hasWatchMessaging;
-(BOOL)hasControllerMessaging;
-(BOOL)hasResidentMessaging;
-(void)setReceivedFirstFrame:(unsigned)arg1 ;
-(void)setStartupDelay:(unsigned long long)arg1 ;
-(void)setHasStartupDelay:(BOOL)arg1 ;
-(BOOL)hasStartupDelay;
-(void)setIsStreamStarted:(BOOL)arg1 ;
-(void)setHasIsStreamStarted:(BOOL)arg1 ;
-(BOOL)hasIsStreamStarted;
-(int)resolutionOnClose;
-(void)setResolutionOnClose:(int)arg1 ;
-(void)setHasResolutionOnClose:(BOOL)arg1 ;
-(BOOL)hasResolutionOnClose;
-(id)resolutionOnCloseAsString:(int)arg1 ;
-(int)StringAsResolutionOnClose:(id)arg1 ;
-(AWDHomeKitCameraStreamConfigure *)initialConfiguration;
-(NSMutableArray *)reconfigurations;
-(void)setReconfigurations:(NSMutableArray *)arg1 ;
-(AWDHomeKitCameraStreamIDSConnSetup *)watchIDSConnectionSetup;
-(AWDHomeKitCameraStreamIDSConnSetup *)phoneIDSConnectionSetup;
-(AWDHomeKitCameraIDSSessionSetup *)idsSessionSetup;
-(AWDHomeKitCameraStreamMessaging *)watchMessaging;
-(AWDHomeKitCameraStreamMessaging *)controllerMessaging;
-(AWDHomeKitCameraStreamMessaging *)residentMessaging;
-(unsigned)receivedFirstFrame;
-(unsigned long long)startupDelay;
-(BOOL)isStreamStarted;
-(NSMutableArray *)resolutionCounts;
-(void)setResolutionCounts:(NSMutableArray *)arg1 ;
@end

