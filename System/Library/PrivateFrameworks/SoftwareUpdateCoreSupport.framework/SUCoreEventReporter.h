/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSURL, NSObject, NSURLSessionConfiguration, NSOperationQueue, NSURLSession, SUCoreEventReporterDelegate, NSString, SUCorePersistedState, SUCoreEvent, NSMutableDictionary;

@interface SUCoreEventReporter : NSObject {

	BOOL _splunkAccessCreated;
	BOOL _eventExtensionsDetermined;
	BOOL _dropEventsOnSendFailure;
	int _activeSendTaskCount;
	NSMutableArray* _awaitingRetry;
	NSURL* _splunkURL;
	NSObject*<OS_dispatch_queue> _splunkStateQueue;
	NSURLSessionConfiguration* _inProcessConfig;
	NSOperationQueue* _inProcessOperationQueue;
	NSURLSession* _inProcessSession;
	SUCoreEventReporterDelegate* _reporterDelegate;
	NSString* _storeToPath;
	NSString* _persistedStatePath;
	long long _accessControl;
	SUCorePersistedState* _activeEventsState;
	SUCoreEvent* _lastErrorEvent;
	NSMutableDictionary* _eventExtensions;
	/*^block*/id _onceIdleCompletion;

}

@property (nonatomic,retain) NSMutableArray * awaitingRetry;                               //@synthesize awaitingRetry=_awaitingRetry - In the implementation block
@property (nonatomic,retain) NSURL * splunkURL;                                            //@synthesize splunkURL=_splunkURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> splunkStateQueue;              //@synthesize splunkStateQueue=_splunkStateQueue - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * inProcessConfig;                  //@synthesize inProcessConfig=_inProcessConfig - In the implementation block
@property (nonatomic,retain) NSOperationQueue * inProcessOperationQueue;                   //@synthesize inProcessOperationQueue=_inProcessOperationQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * inProcessSession;                              //@synthesize inProcessSession=_inProcessSession - In the implementation block
@property (nonatomic,retain) SUCoreEventReporterDelegate * reporterDelegate;               //@synthesize reporterDelegate=_reporterDelegate - In the implementation block
@property (nonatomic,retain) NSString * storeToPath;                                       //@synthesize storeToPath=_storeToPath - In the implementation block
@property (nonatomic,retain) NSString * persistedStatePath;                                //@synthesize persistedStatePath=_persistedStatePath - In the implementation block
@property (assign,nonatomic) long long accessControl;                                      //@synthesize accessControl=_accessControl - In the implementation block
@property (nonatomic,retain) SUCorePersistedState * activeEventsState;                     //@synthesize activeEventsState=_activeEventsState - In the implementation block
@property (nonatomic,retain) SUCoreEvent * lastErrorEvent;                                 //@synthesize lastErrorEvent=_lastErrorEvent - In the implementation block
@property (assign,nonatomic) BOOL splunkAccessCreated;                                     //@synthesize splunkAccessCreated=_splunkAccessCreated - In the implementation block
@property (assign,nonatomic) BOOL eventExtensionsDetermined;                               //@synthesize eventExtensionsDetermined=_eventExtensionsDetermined - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventExtensions;                        //@synthesize eventExtensions=_eventExtensions - In the implementation block
@property (assign,nonatomic) int activeSendTaskCount;                                      //@synthesize activeSendTaskCount=_activeSendTaskCount - In the implementation block
@property (assign,nonatomic) BOOL dropEventsOnSendFailure;                                 //@synthesize dropEventsOnSendFailure=_dropEventsOnSendFailure - In the implementation block
@property (nonatomic,copy) id onceIdleCompletion;                                          //@synthesize onceIdleCompletion=_onceIdleCompletion - In the implementation block
+(id)sharedReporter;
+(id)_sharedReporter:(id)arg1 withAccessControl:(long long)arg2 ;
+(id)accessControlSummary:(long long)arg1 ;
+(id)_errorDomainAbbreviation:(id)arg1 ;
+(id)_nsURLSessionTaskNameForState:(long long)arg1 ;
+(id)initSharedReporterStoringToPath:(id)arg1 ;
+(id)initSharedReporterStoringToPath:(id)arg1 withAccessControl:(long long)arg2 ;
+(void)augmentEvent:(id)arg1 withError:(id)arg2 ;
+(id)buildSplunkServerURLFromBase:(id)arg1 ;
-(long long)accessControl;
-(BOOL)sendEvent:(id)arg1 ;
-(void)setAccessControl:(long long)arg1 ;
-(void)handleSendFinishedInvalidFileUUID:(id)arg1 withError:(id)arg2 ;
-(void)handleSendFinishedWithFileUUID:(id)arg1 sendSucceeded:(BOOL)arg2 withStatusCode:(long long)arg3 withError:(id)arg4 ;
-(id)initStoringToPath:(id)arg1 withAccessControl:(long long)arg2 ;
-(BOOL)sendEvent:(id)arg1 toServerURL:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)splunkStateQueue;
-(void)_determineEventExtensions;
-(NSMutableDictionary *)eventExtensions;
-(void)_sendCoreEvent:(id)arg1 ;
-(BOOL)dropEventsOnSendFailure;
-(void)setDropEventsOnSendFailure:(BOOL)arg1 ;
-(void)_splunkAccessSetup;
-(SUCoreEvent *)lastErrorEvent;
-(void)_sendCoreEvents:(id)arg1 secondEvent:(id)arg2 ;
-(BOOL)_sendFirstAwaitingRetry;
-(void)setLastErrorEvent:(SUCoreEvent *)arg1 ;
-(id)onceIdleCompletion;
-(void)setOnceIdleCompletion:(id)arg1 ;
-(void)_checkWhetherIdle:(id)arg1 ;
-(BOOL)splunkAccessCreated;
-(void)setReporterDelegate:(SUCoreEventReporterDelegate *)arg1 ;
-(void)setInProcessConfig:(NSURLSessionConfiguration *)arg1 ;
-(void)setInProcessOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)inProcessOperationQueue;
-(NSURLSessionConfiguration *)inProcessConfig;
-(SUCoreEventReporterDelegate *)reporterDelegate;
-(void)setInProcessSession:(NSURLSession *)arg1 ;
-(void)setSplunkURL:(NSURL *)arg1 ;
-(NSURL *)splunkURL;
-(NSString *)storeToPath;
-(NSString *)persistedStatePath;
-(SUCorePersistedState *)activeEventsState;
-(id)_newExistingFileUUIDs;
-(id)_alignPersistedStateWithExistingFileUUIDs:(id)arg1 ;
-(void)_synchronizeWithNSURLSessionExpecting:(id)arg1 ;
-(void)setSplunkAccessCreated:(BOOL)arg1 ;
-(BOOL)eventExtensionsDetermined;
-(id)_buildContextFromNVRAMBootArgs;
-(void)setEventExtensionsDetermined:(BOOL)arg1 ;
-(void)_adoptLastErrorEvent:(id)arg1 ;
-(id)_getSplunkServerURL:(id)arg1 ;
-(void)_sendSplunkEvents:(id)arg1 forEventUUID:(id)arg2 toServerURL:(id)arg3 ;
-(id)_newScrubbedEvents:(id)arg1 ;
-(NSURLSession *)inProcessSession;
-(id)_getJSONDataFromPayload:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 ;
-(id)_storeJSONData:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 ;
-(BOOL)_storeServerURLMetadata:(id)arg1 toFileUUID:(id)arg2 ;
-(void)_uploadFromFile:(id)arg1 withFileUUID:(id)arg2 forEventUUID:(id)arg3 toServerURL:(id)arg4 ;
-(id)_activeEventForFileUUID:(id)arg1 ;
-(void)_updateActiveEvent:(id)arg1 forFileUUID:(id)arg2 ;
-(void)_removeFileUUID:(id)arg1 loggingError:(BOOL)arg2 forReason:(id)arg3 ;
-(id)_getSplunkRequestForURL:(id)arg1 ;
-(void)_awaitRetryingFileUUID:(id)arg1 ;
-(void)_incrementActiveSendCount:(id)arg1 ;
-(NSMutableArray *)awaitingRetry;
-(int)activeSendTaskCount;
-(void)setAwaitingRetry:(NSMutableArray *)arg1 ;
-(id)_synchonizeDiscoveredRunning:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(id)_synchonizeDiscoveredSuspended:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(id)_synchonizeDiscoveredCanceling:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(id)_synchonizeDiscoveredCompleted:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(id)_synchonizeDiscoveredUnknown:(id)arg1 forActiveEvent:(id)arg2 withFileUUIDsToRetry:(id)arg3 ;
-(void)_removeActiveEventForFileUUID:(id)arg1 ;
-(void)_sendInterruptedFromStorage:(id)arg1 ;
-(id)_removeFileUUID:(id)arg1 fromFilesToRetry:(id)arg2 ;
-(id)_copyEscapeStringsForEventData:(id)arg1 ;
-(void)setActiveSendTaskCount:(int)arg1 ;
-(void)_decrementActiveSendCount;
-(void)_sendAllAwaitingRetry;
-(id)initStoringToPath:(id)arg1 ;
-(id)sendEventReturningAugmented:(id)arg1 toServerURL:(id)arg2 ;
-(void)dropOnSendFailure:(BOOL)arg1 ;
-(void)flushEvent;
-(long long)currentAccessControl;
-(void)indicateOnceIdle:(/*^block*/id)arg1 ;
-(void)setStoreToPath:(NSString *)arg1 ;
-(void)setPersistedStatePath:(NSString *)arg1 ;
-(void)setActiveEventsState:(SUCorePersistedState *)arg1 ;
-(void)setEventExtensions:(NSMutableDictionary *)arg1 ;
@end

