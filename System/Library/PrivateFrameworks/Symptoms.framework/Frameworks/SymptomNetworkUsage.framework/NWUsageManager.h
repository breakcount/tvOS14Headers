/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWUsageManagerDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NWUsageMonitor, NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, NWPollHandler;

@interface NWUsageManager : NSObject {

	int _interfaceTraceFd;
	char* _iftracebuf;
	unsigned _continuationCount;
	unsigned long long _currentPollReference;
	unsigned long long _nextPollReference;
	AQ _pollsOutstanding;
	BOOL _configured;
	BOOL _invalidated;
	int _sockfd;
	id<NWUsageManagerDelegate> _delegate;
	NWUsageMonitor* _usageMonitor;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableDictionary* _internalSources;
	NSMutableSet* _interfaceSources;
	unsigned long long _currentQueryAllReference;
	unsigned long long _querySequenceNumber;
	char* _readBuffer;
	NSMutableArray* _queuedPolls;
	NWPollHandler* _activePoll;

}

@property (retain) NSObject*<OS_dispatch_source> readSource;                          //@synthesize readSource=_readSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;                        //@synthesize internalQueue=_internalQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign) int sockfd;                                                        //@synthesize sockfd=_sockfd - In the implementation block
@property (retain) NSMutableDictionary * internalSources;                             //@synthesize internalSources=_internalSources - In the implementation block
@property (retain) NSMutableSet * interfaceSources;                                   //@synthesize interfaceSources=_interfaceSources - In the implementation block
@property (retain) NWUsageMonitor * usageMonitor;                                     //@synthesize usageMonitor=_usageMonitor - In the implementation block
@property (assign) unsigned long long currentQueryAllReference;                       //@synthesize currentQueryAllReference=_currentQueryAllReference - In the implementation block
@property (assign) unsigned long long querySequenceNumber;                            //@synthesize querySequenceNumber=_querySequenceNumber - In the implementation block
@property (assign) char* readBuffer;                                                  //@synthesize readBuffer=_readBuffer - In the implementation block
@property (retain) NSMutableArray * queuedPolls;                                      //@synthesize queuedPolls=_queuedPolls - In the implementation block
@property (retain) NWPollHandler * activePoll;                                        //@synthesize activePoll=_activePoll - In the implementation block
@property (assign) BOOL configured;                                                   //@synthesize configured=_configured - In the implementation block
@property (getter=isInvalidated) BOOL invalidated;                                    //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<NWUsageManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<NWUsageManagerDelegate>)delegate;
-(void)setDelegate:(id<NWUsageManagerDelegate>)arg1 ;
-(BOOL)isInvalidated;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)readSource;
-(int)sockfd;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(char*)readBuffer;
-(unsigned long long)currentQueryAllReference;
-(void)setCurrentQueryAllReference:(unsigned long long)arg1 ;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setSockfd:(int)arg1 ;
-(unsigned long long)querySequenceNumber;
-(void)setQuerySequenceNumber:(unsigned long long)arg1 ;
-(void)setReadBuffer:(char*)arg1 ;
-(BOOL)configure:(id)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(BOOL)reconfigure:(id)arg1 ;
-(id)stateDictionary;
-(int)flowEnumerationCurrentUsage;
-(BOOL)enumerateFlowsUsingBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)ignoreFlow:(unsigned long long)arg1 ;
-(NWUsageMonitor *)usageMonitor;
-(BOOL)enumerateSelectFlows:(id)arg1 deliveryBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_restartPoll:(id)arg1 ;
-(void)_traceMemoryBuf:(char*)arg1 length:(long long)arg2 tag:(char*)arg3 ;
-(void)_handleCompletion:(unsigned long long)arg1 ;
-(void)_sendMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(NWPollHandler *)activePoll;
-(void)setActivePoll:(NWPollHandler *)arg1 ;
-(void)_sendPoll;
-(void)_handleCounts:(nstat_msg_src_counts*)arg1 ;
-(void)_sendUpdateRequestMessage:(unsigned long long)arg1 ;
-(NSMutableDictionary *)internalSources;
-(void)_removeSourceInternal:(unsigned long long)arg1 ;
-(void)_noteInterfaceSrcRef:(unsigned long long)arg1 forInterface:(unsigned)arg2 threshold:(unsigned long long)arg3 ;
-(void)_handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(NSMutableArray *)queuedPolls;
-(void)_startPoll:(id)arg1 ;
-(void)_startQueuedPoll;
-(void)_handleRemoveForSource:(id)arg1 ;
-(NSMutableSet *)interfaceSources;
-(void)_sendRemoveSource:(unsigned long long)arg1 ;
-(void)_setThreshold:(unsigned long long)arg1 onInterface:(unsigned)arg2 ;
-(void)setQueuedPolls:(NSMutableArray *)arg1 ;
-(void)setInternalSources:(NSMutableDictionary *)arg1 ;
-(void)_handleReadEvent;
-(void)_setInterfaceTraceFd:(int)arg1 ;
-(void)_addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(BOOL)_setThresholds:(id)arg1 ;
-(BOOL)initialConfigure:(id)arg1 ;
-(id)_stage2InitWithQueue:(id)arg1 ;
-(void)enumerateSelectFlows:(id)arg1 deliveryBlock:(/*^block*/id)arg2 ;
-(void)_trace:(char*)arg1 ;
-(void)enumerateFlowsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChangedFlowsUsingBlock:(/*^block*/id)arg1 ;
-(void)setUsageMonitor:(NWUsageMonitor *)arg1 ;
-(void)setInterfaceSources:(NSMutableSet *)arg1 ;
@end
