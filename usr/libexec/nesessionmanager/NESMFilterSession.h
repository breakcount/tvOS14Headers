//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "NEFilterPluginDelegate-Protocol.h"

@class NEFilterPlugin, NEFilterSettings, NESMFilterSessionState, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_nw_interpose, OS_xpc_object;

@interface NESMFilterSession : NESMSession <NEFilterPluginDelegate>
{
    _Bool _isInstalled;	// 8 = 0x8
    _Bool _acceptAgentClients;	// 9 = 0x9
    _Bool _externallyStopped;	// 10 = 0xa
    int _limitToPID;	// 12 = 0xc
    unsigned int _controlUnit;	// 16 = 0x10
    NEFilterSettings *_settings;	// 24 = 0x18
    NESMFilterSessionState *_stateHandler;	// 32 = 0x20
    NSMutableDictionary *_cachedStateHandlers;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    NEFilterPlugin *_plugin;	// 56 = 0x38
    NEFilterPlugin *_packetPlugin;	// 64 = 0x40
    NSObject<OS_xpc_object> *_lastStartMessage;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_restartTimer;	// 80 = 0x50
    unsigned long long _restartIntervalMsecs;	// 88 = 0x58
    unsigned long long _restartIntervalAttempts;	// 96 = 0x60
    NSObject<OS_nw_interpose> *_interpose;	// 104 = 0x68
}

+ (void)deallocateFilterControlUnit:(unsigned int)arg1;	// IMP=0x000000010006c460
+ (unsigned int)allocateFilterControlUnitForConfiguration:(id)arg1;	// IMP=0x000000010006c2d8
+ (unsigned int)getFilterControlUnitFlagsForConfiguration:(id)arg1;	// IMP=0x000000010006c218
- (void).cxx_destruct;	// IMP=0x00000001000706b8
@property(retain) NSObject<OS_nw_interpose> *interpose; // @synthesize interpose=_interpose;
@property unsigned long long restartIntervalAttempts; // @synthesize restartIntervalAttempts=_restartIntervalAttempts;
@property unsigned long long restartIntervalMsecs; // @synthesize restartIntervalMsecs=_restartIntervalMsecs;
@property(retain) NSObject<OS_dispatch_source> *restartTimer; // @synthesize restartTimer=_restartTimer;
@property(retain) NSObject<OS_xpc_object> *lastStartMessage; // @synthesize lastStartMessage=_lastStartMessage;
@property _Bool externallyStopped; // @synthesize externallyStopped=_externallyStopped;
@property _Bool acceptAgentClients; // @synthesize acceptAgentClients=_acceptAgentClients;
@property(readonly) unsigned int controlUnit; // @synthesize controlUnit=_controlUnit;
@property(retain) NEFilterPlugin *packetPlugin; // @synthesize packetPlugin=_packetPlugin;
@property(retain) NEFilterPlugin *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain) NSMutableDictionary *cachedStateHandlers; // @synthesize cachedStateHandlers=_cachedStateHandlers;
@property(retain) NESMFilterSessionState *stateHandler; // @synthesize stateHandler=_stateHandler;
@property int limitToPID; // @synthesize limitToPID=_limitToPID;
@property(retain) NEFilterSettings *settings; // @synthesize settings=_settings;
@property _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
- (void)startWithCommand:(id)arg1 isOnDemand:(_Bool)arg2;	// IMP=0x0000000100070424
- (id)plugin:(id)arg1 didApplySettings:(id)arg2;	// IMP=0x000000010007025c
- (void)handleUserLogin;	// IMP=0x00000001000701c8
- (void)invalidate;	// IMP=0x0000000100070164
- (id)pluginType;	// IMP=0x00000001000700c8
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x000000010006fd90
- (void)requestUninstall;	// IMP=0x000000010006fd34
- (void)uninstall;	// IMP=0x000000010006fcd0
- (void)install;	// IMP=0x000000010006fb84
- (_Bool)pinPlugin:(id)arg1 toConfigurationWithAuditTokens:(id)arg2;	// IMP=0x000000010006fac4
- (_Bool)handleAgentClientConnection:(id)arg1 WithMessage:(id)arg2;	// IMP=0x000000010006f62c
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x000000010006f628
- (void)pluginDidAcknowledgeSleep:(id)arg1;	// IMP=0x000000010006f5e8
- (id)pluginDidRequestPacketFilterChannel:(id)arg1;	// IMP=0x000000010006f3e8
- (void)plugin:(id)arg1 didSetStatus:(long long)arg2 andError:(long long)arg3;	// IMP=0x000000010006f2ac
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x000000010006f03c
- (void)pluginDidRequestAgentClientServer:(id)arg1;	// IMP=0x000000010006f02c
- (id)pluginDidRequestContentFilterSocket:(id)arg1;	// IMP=0x000000010006ef0c
- (void)pluginDidDispose:(id)arg1;	// IMP=0x000000010006eea0
- (void)handleInstalledAppsChanged;	// IMP=0x000000010006ed4c
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x000000010006ec70
- (void)updateDefaultDrop:(_Bool)arg1;	// IMP=0x000000010006ec64
- (void)updateLayer2DefaultDrop:(_Bool)arg1;	// IMP=0x000000010006eb60
- (void)updateIPDefaultDrop:(_Bool)arg1;	// IMP=0x000000010006e9cc
- (_Bool)checkPluginInstalled:(_Bool)arg1;	// IMP=0x000000010006e5a8
- (void)handleWakeup;	// IMP=0x000000010006e568
- (_Bool)handleSleep;	// IMP=0x000000010006e51c
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010006e44c
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010006dfe0
- (void)handleInitializeState;	// IMP=0x000000010006dfd0
- (_Bool)initializePlugins;	// IMP=0x000000010006dcf0
- (id)createFilterPluginWithClass:(long long)arg1;	// IMP=0x000000010006dbac
- (id)createAgentWithClass:(long long)arg1;	// IMP=0x000000010006d688
- (_Bool)checkContentFilterProviderWithClass:(long long)arg1;	// IMP=0x000000010006d338
- (_Bool)hasProviderWithBundleIdentifier:(id)arg1;	// IMP=0x000000010006d198
- (void)restart;	// IMP=0x000000010006cb40
- (void)resetRestartTimer:(_Bool)arg1;	// IMP=0x000000010006ca84
- (void)deallocateControlUnit;	// IMP=0x000000010006c974
- (_Bool)allocateControlUnit;	// IMP=0x000000010006c6ac
- (int)type;	// IMP=0x000000010006c6a4
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010006c568
- (void)updateFilterControlUnit;	// IMP=0x000000010006c4a4

@end
