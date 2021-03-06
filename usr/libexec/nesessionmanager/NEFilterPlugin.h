//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPlugin.h"

#import "NEFilterPluginManager-Protocol.h"

@interface NEFilterPlugin : NEPlugin <NEFilterPluginManager>
{
    long long _filterStatus;	// 64 = 0x40
}

@property(readonly) long long filterStatus; // @synthesize filterStatus=_filterStatus;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000176c4
- (id)managerInterface;	// IMP=0x00000001000176a8
- (id)remotePluginInterface;	// IMP=0x000000010001768c
- (void)acceptAgentClients;	// IMP=0x00000001000175c4
- (void)setStatus:(long long)arg1 error:(id)arg2;	// IMP=0x0000000100017400
- (void)handlePluginFailedWithError:(id)arg1;	// IMP=0x00000001000173a4
- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017278
- (void)createContentFilterSocketWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001714c
- (void)getFilterClientConnectionWithHandler:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016dcc
- (void)startFilter;	// IMP=0x0000000100016d8c

@end

