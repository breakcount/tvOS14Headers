/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionHealthMonitorDelegate.h>
#import <libobjc.A.dylib/VCWifiAssistManagerDelegate.h>
#import <libobjc.A.dylib/VCLinkProbingHandlerDelegate.h>

@protocol VCConnectionProtocol, OS_dispatch_queue;
@class NSMutableArray, NSObject, VCWifiAssistManager, VCConnectionHealthMonitor, VCWRMHandler, VCDuplicationHandler, VCStatsRecorder, VCLinkProbingHandler, NSString;

@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate, VCWifiAssistManagerDelegate, VCLinkProbingHandlerDelegate> {

	BOOL _isStarted;
	unsigned _callID;
	int _connectionSelectionVersion;
	int _relayServerProvider;
	opaque_pthread_rwlock_t _stateRWlock;
	id<VCConnectionProtocol> _primaryConnection;
	id<VCConnectionProtocol> _secondaryConnection;
	id<VCConnectionProtocol> _connectionForDuplication;
	id<VCConnectionProtocol> _lastPrimaryConnectionInUse;
	NSMutableArray* _connectionArray;
	opaqueRTCReportingRef _reportingAgent;
	BOOL _isInitialConnectionEstablished;
	unsigned long long _mediaExcessiveCellularTxBytes;
	unsigned long long _mediaExcessiveCellularRxBytes;
	unsigned long long _signalingExcessiveCellularTxBytes;
	unsigned long long _signalingExcessiveCellularRxBytes;
	unsigned long long _budgetConsumingCellularTxBytes;
	unsigned long long _budgetConsumingCellularRxBytes;
	unsigned long long _mediaCellularTxBytes;
	unsigned long long _mediaCellularRxBytes;
	unsigned long long _mediaWifiTxBytes;
	unsigned long long _mediaWifiRxBytes;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	/*function pointer*/void* _duplicationCallback;
	BOOL _enableDuplication;
	double _lastConnectionUnstableTime;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	void* _duplicationContext;
	BOOL _duplicationPending;
	BOOL _supportDuplication;
	int _preferredLocalInterfaceForDuplication;
	int _preferredRemoteInterfaceForDuplication;
	BOOL _isPrimaryLocalUsingCell;
	BOOL _isPreWarmStateEnabled;
	BOOL _remotePreWarmStateEnabled;
	VCWifiAssistManager* _vcWifiAssist;
	BOOL _hasAssertedCell;
	VCConnectionHealthMonitor* _connectionHealthMonitor;
	SCD_Struct_VC105 _localConnectionStats;
	SCD_Struct_VC105 _remoteConnectionStats;
	VCWRMHandler* _wrmHandler;
	VCDuplicationHandler* _duplicationHandler;
	double _remoteNoRemotePacketInterval;
	double _lastDefaultCheckTime;
	BOOL _isAudioOnly;
	double _lastiRATCheckTime;
	double _iRATNotificationRequestTime;
	int _localWRMLinkTypeFromDefaults;
	BOOL _allowRequestForWRMNotification;
	BOOL _forceHandoverToCell;
	BOOL _disableRemoteInterfaceInference;
	/*function pointer*/void* _wrmStatusUpdateCallback;
	/*function pointer*/void* _wrmRequestNotificationCallback;
	void* _wrmCallbacksContext;
	VCStatsRecorder* _statsRecorder;
	BOOL _preferRelayOverP2PEnabled;
	BOOL _fastMediaDuplicationEnabled;
	BOOL _cellPrimaryInterfaceChangeEnabled;
	BOOL _duplicateImportantPktsEnabled;
	BOOL _lowNetworkModeEnabled;
	BOOL _duplicationEnhancementEnabled;
	SCD_Struct_VC89 _connectionSelectionPolicy;
	int _localRATTypeOverride;
	unsigned _realRATType;
	unsigned char _linkProbingCapabilityVersion;
	unsigned char _remoteLinkProbingCapabilityVersion;
	VCLinkProbingHandler* _linkProbingHandler;
	double _noRemoteDuplicationThresholdFast;

}

@property (nonatomic,retain) id<VCConnectionProtocol> lastPrimaryConnectionInUse;                              //@synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> connectionForDuplication;                                //@synthesize connectionForDuplication=_connectionForDuplication - In the implementation block
@property (assign) unsigned callID;                                                                            //@synthesize callID=_callID - In the implementation block
@property (assign) int relayServerProvider;                                                                    //@synthesize relayServerProvider=_relayServerProvider - In the implementation block
@property (readonly) BOOL isPreWarmStateEnabled;                                                               //@synthesize isPreWarmStateEnabled=_isPreWarmStateEnabled - In the implementation block
@property (assign,nonatomic) BOOL remotePreWarmStateEnabled;                                                   //@synthesize remotePreWarmStateEnabled=_remotePreWarmStateEnabled - In the implementation block
@property (assign) int preferredLocalInterfaceForDuplication;                                                  //@synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication - In the implementation block
@property (assign) int preferredRemoteInterfaceForDuplication;                                                 //@synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication - In the implementation block
@property (readonly) BOOL isLocalCellularInterfaceUsed; 
@property (assign) id<VCConnectionManagerDelegate> delegate; 
@property (assign) BOOL isAudioOnly;                                                                           //@synthesize isAudioOnly=_isAudioOnly - In the implementation block
@property (assign) BOOL supportDuplication;                                                                    //@synthesize supportDuplication=_supportDuplication - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> primaryConnection;                                       //@synthesize primaryConnection=_primaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> secondaryConnection;                                     //@synthesize secondaryConnection=_secondaryConnection - In the implementation block
@property (readonly) int connectionCount; 
@property (readonly) unsigned long long mediaExcessiveCellularTxBytes;                                         //@synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes - In the implementation block
@property (readonly) unsigned long long mediaExcessiveCellularRxBytes;                                         //@synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes - In the implementation block
@property (readonly) unsigned long long signalingExcessiveCellularTxBytes;                                     //@synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes - In the implementation block
@property (readonly) unsigned long long signalingExcessiveCellularRxBytes;                                     //@synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes - In the implementation block
@property (readonly) unsigned long long budgetConsumingCellularTxBytes;                                        //@synthesize budgetConsumingCellularTxBytes=_budgetConsumingCellularTxBytes - In the implementation block
@property (readonly) unsigned long long budgetConsumingCellularRxBytes;                                        //@synthesize budgetConsumingCellularRxBytes=_budgetConsumingCellularRxBytes - In the implementation block
@property (readonly) unsigned long long mediaCellularTxBytes;                                                  //@synthesize mediaCellularTxBytes=_mediaCellularTxBytes - In the implementation block
@property (readonly) unsigned long long mediaCellularRxBytes;                                                  //@synthesize mediaCellularRxBytes=_mediaCellularRxBytes - In the implementation block
@property (readonly) unsigned long long mediaWifiTxBytes;                                                      //@synthesize mediaWifiTxBytes=_mediaWifiTxBytes - In the implementation block
@property (readonly) unsigned long long mediaWifiRxBytes;                                                      //@synthesize mediaWifiRxBytes=_mediaWifiRxBytes - In the implementation block
@property (readonly) double remoteNoRemotePacketInterval;                                                      //@synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval - In the implementation block
@property (nonatomic,readonly) VCStatsRecorder * statsRecorder;                                                //@synthesize statsRecorder=_statsRecorder - In the implementation block
@property (assign,setter=setPreferRelayOverP2PEnabled:,nonatomic) BOOL preferRelayOverP2PEnabled;              //@synthesize preferRelayOverP2PEnabled=_preferRelayOverP2PEnabled - In the implementation block
@property (assign) BOOL fastMediaDuplicationEnabled;                                                           //@synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled - In the implementation block
@property (assign) BOOL cellPrimaryInterfaceChangeEnabled;                                                     //@synthesize cellPrimaryInterfaceChangeEnabled=_cellPrimaryInterfaceChangeEnabled - In the implementation block
@property (assign) BOOL duplicateImportantPktsEnabled;                                                         //@synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled - In the implementation block
@property (assign) BOOL lowNetworkModeEnabled;                                                                 //@synthesize lowNetworkModeEnabled=_lowNetworkModeEnabled - In the implementation block
@property (assign) BOOL duplicationEnhancementEnabled;                                                         //@synthesize duplicationEnhancementEnabled=_duplicationEnhancementEnabled - In the implementation block
@property (assign) double noRemoteDuplicationThresholdFast;                                                    //@synthesize noRemoteDuplicationThresholdFast=_noRemoteDuplicationThresholdFast - In the implementation block
@property (assign) unsigned realRATType;                                                                       //@synthesize realRATType=_realRATType - In the implementation block
@property (readonly) unsigned char linkProbingCapabilityVersion;                                               //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
@property (assign,nonatomic) unsigned char remoteLinkProbingCapabilityVersion;                                 //@synthesize remoteLinkProbingCapabilityVersion=_remoteLinkProbingCapabilityVersion - In the implementation block
@property (readonly) double primaryConnHealthAllowedDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VCConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id<VCConnectionManagerDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(unsigned)callID;
-(int)connectionCount;
-(void)setCallID:(unsigned)arg1 ;
-(int)relayServerProvider;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(int)addConnection:(id)arg1 ;
-(int)removeConnection:(id)arg1 ;
-(id)activeConnectionRegistry;
-(id)suggestedLinkTypeCombo;
-(double)primaryConnHealthAllowedDelay;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(BOOL)isAudioOnly;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(unsigned char)linkProbingCapabilityVersion;
-(BOOL)fastMediaDuplicationEnabled;
-(void)setFastMediaDuplicationEnabled:(BOOL)arg1 ;
-(BOOL)duplicateImportantPktsEnabled;
-(void)setDuplicateImportantPktsEnabled:(BOOL)arg1 ;
-(BOOL)isBetterConnection:(id)arg1 asPrimary:(BOOL)arg2 ;
-(id<VCConnectionProtocol>)primaryConnection;
-(id<VCConnectionProtocol>)secondaryConnection;
-(id<VCConnectionProtocol>)lastPrimaryConnectionInUse;
-(void)useConnectionAsPrimary:(id)arg1 ;
-(void)setSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(int)getNumberOfConnectionsInternal;
-(void)checkpointPrimaryConnection:(id)arg1 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)useCellPrimayInterface:(BOOL)arg1 ;
-(void)setDuplicationEnabledInternal:(BOOL)arg1 ;
-(void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)setPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)promoteSecondaryConnectionToPrimary:(id)arg1 ;
-(void)addTelemetryForConnection:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)isOptimalConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3 ;
-(void)updateCellularMTU:(int)arg1 ;
-(void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(void)sourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isSourceOnCellular:(BOOL*)arg2 isSourceIPv6:(BOOL*)arg3 ;
-(BOOL)shouldAcceptDataFromSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)copyConnectionWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 isPrimary:(BOOL*)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 ;
-(void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(BOOL)arg4 isOutgoing:(BOOL)arg5 ;
-(void)synchronizeParticipantGenerationCounter:(unsigned char)arg1 ;
-(unsigned)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(unsigned)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(BOOL)arg2 ;
-(void)updateConnectionForDuplication;
-(void)reportLinkProbingStatsWithDuplicationJustStarted:(BOOL)arg1 ;
-(void)setConnectionForDuplication:(id<VCConnectionProtocol>)arg1 ;
-(void)setLastPrimaryConnectionInUse:(id<VCConnectionProtocol>)arg1 ;
-(SCD_Struct_VC89*)getConnectionSelectionPolicy;
-(id<VCConnectionProtocol>)connectionForDuplication;
-(int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(BOOL)arg2 ;
-(void)setRealRATType:(unsigned)arg1 ;
-(void)disableRemotePreferredInterfaceInference:(BOOL)arg1 ;
-(int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1 ;
-(void)updateConnectionSelectionPolicy;
-(BOOL)isDuplicationEnabled;
-(void)setActiveLinkProbingEnabled:(BOOL)arg1 ;
-(id)connectionForQualityInternal:(int)arg1 ;
-(const char*)reasonStringWithDuplicationReason:(unsigned char)arg1 ;
-(void)addDuplicationSelectionLogicTelemetryForConnection:(id)arg1 activeConnectionRegistry:(id)arg2 suggestedLinkTypeCombo:(id)arg3 payload:(id)arg4 ;
-(void)addLinkProbingTelemetry:(id)arg1 ;
-(void)alertStateUpdated:(BOOL)arg1 isLocal:(BOOL)arg2 ;
-(void)resetMediaByteCounters;
-(void)setPreferredLocalInterfaceForDuplication:(int)arg1 ;
-(BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(SCD_Struct_VC106)processDuplicationStateUpdateEvent:(SCD_Struct_VC107)arg1 didLocalHandover:(BOOL)arg2 timeDurationMs:(unsigned)arg3 linkType:(int)arg4 wrmCallbackScenario:(unsigned char)arg5 ;
-(id)copyConnectionForQuality:(int)arg1 ;
-(void)updateCellularExcessiveBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytes:(int)arg2 isMediaData:(BOOL)arg3 isOutgoing:(BOOL)arg4 ;
-(void)updateWRMDuplicationForHandover;
-(void)checklocalRATTypeOverrideDefaultValue:(BOOL)arg1 ;
-(void)checkWRMSuggestionDefaultValue;
-(void)checkActivelyRequestWRMRecommendation:(double)arg1 isLocalUsingCellular:(BOOL)arg2 ;
-(BOOL)shouldDuplicatePacket:(BOOL)arg1 ;
-(int)processWRMNotification:(SCD_Struct_VC94*)arg1 ;
-(void)requestWRMNotification;
-(void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)updateTransmittedBytes:(int)arg1 isOnCell:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)updateReceivedBytes:(int)arg1 isOnCell:(BOOL)arg2 isIPv6:(BOOL)arg3 ;
-(void)updateConnectionStatsWithIndicatorNoPacket:(SCD_Struct_VC105*)arg1 ;
-(void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(SCD_Struct_VC105*)arg1 ;
-(void)updateConnectionStatsWithIndicatorNone:(SCD_Struct_VC105*)arg1 ;
-(void)updateConnectionStatsWithIndicatorPrimaryImproved:(SCD_Struct_VC105*)arg1 ;
-(BOOL)shouldDropCurrentPrimaryConnectionWithConnectionStats:(SCD_Struct_VC105*)arg1 ;
-(BOOL)areAllLinkProbingTriggersInactive;
-(void)updateProbingResults:(id)arg1 ;
-(void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(BOOL)arg2 ;
-(void)didChangeWifiAssistAvailable:(BOOL)arg1 reason:(unsigned char)arg2 ;
-(void)setupConnectionHealthMonitor;
-(void)setPreferRelayOverP2PEnabled:(BOOL)arg1 ;
-(void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2 ;
-(void)setDuplicationCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(void)setConnectionPause:(BOOL)arg1 isLocalConnection:(BOOL)arg2 ;
-(void)setDuplicationEnabled:(BOOL)arg1 ;
-(int)setWRMUpdateCallback:(/*function pointer*/void*)arg1 requestNotificationCallback:(/*function pointer*/void*)arg2 withContext:(void*)arg3 ;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)setRemotePreWarmStateEnabled:(BOOL)arg1 ;
-(void)processWRMCoexMetrics:(id)arg1 ;
-(int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2 ;
-(int)getCellularMTUForActiveConnectionWithQuality:(int)arg1 ;
-(BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1 ;
-(BOOL)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1 ;
-(void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesSent:(int)arg2 isMediaData:(BOOL)arg3 shouldCountPacket:(BOOL)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(BOOL)arg6 ;
-(void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 bytesReceived:(int)arg2 isMediaData:(BOOL)arg3 shouldCountPacket:(BOOL)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(BOOL)arg6 ;
-(tagVCSourceDestinationInfo*)createSourceDestinationInfoListWithForceDuplication:(BOOL)arg1 ;
-(BOOL)isLocalCellularInterfaceUsed;
-(void)setDefaultLinkProbingCapabilityVersionForDeviceRole:(int)arg1 ;
-(void)setRemoteLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(int)setConnectionHealthOnControlInfo:(void*)arg1 ;
-(int)processConnectionHealthFromControlInfo:(void*)arg1 ;
-(void)setRelayServerProvider:(int)arg1 ;
-(int)preferredLocalInterfaceForDuplication;
-(int)preferredRemoteInterfaceForDuplication;
-(void)setPreferredRemoteInterfaceForDuplication:(int)arg1 ;
-(BOOL)supportDuplication;
-(void)setSupportDuplication:(BOOL)arg1 ;
-(unsigned long long)mediaExcessiveCellularTxBytes;
-(unsigned long long)mediaExcessiveCellularRxBytes;
-(unsigned long long)signalingExcessiveCellularTxBytes;
-(unsigned long long)signalingExcessiveCellularRxBytes;
-(unsigned long long)mediaCellularTxBytes;
-(unsigned long long)mediaCellularRxBytes;
-(unsigned long long)mediaWifiTxBytes;
-(unsigned long long)mediaWifiRxBytes;
-(double)remoteNoRemotePacketInterval;
-(VCStatsRecorder *)statsRecorder;
-(BOOL)isPreWarmStateEnabled;
-(BOOL)remotePreWarmStateEnabled;
-(BOOL)preferRelayOverP2PEnabled;
-(BOOL)cellPrimaryInterfaceChangeEnabled;
-(void)setCellPrimaryInterfaceChangeEnabled:(BOOL)arg1 ;
-(double)noRemoteDuplicationThresholdFast;
-(void)setNoRemoteDuplicationThresholdFast:(double)arg1 ;
-(BOOL)lowNetworkModeEnabled;
-(void)setLowNetworkModeEnabled:(BOOL)arg1 ;
-(BOOL)duplicationEnhancementEnabled;
-(void)setDuplicationEnhancementEnabled:(BOOL)arg1 ;
-(unsigned)realRATType;
-(unsigned char)remoteLinkProbingCapabilityVersion;
-(unsigned long long)budgetConsumingCellularTxBytes;
-(unsigned long long)budgetConsumingCellularRxBytes;
@end

