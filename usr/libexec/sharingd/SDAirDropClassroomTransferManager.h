//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDXPCDaemon.h"

#import "SDAirDropAlertManagerDelegate-Protocol.h"
#import "SDAirDropClassroomTransferManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSString, SDAirDropTransferManager;

__attribute__((visibility("hidden")))
@interface SDAirDropClassroomTransferManager : SDXPCDaemon <SDAirDropClassroomTransferManagerProtocol, SDAirDropAlertManagerDelegate>
{
    NSMutableDictionary *_transferIDToProgress;	// 8 = 0x8
    SDAirDropTransferManager *_transferManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001c1178
@property(retain, nonatomic) SDAirDropTransferManager *transferManager; // @synthesize transferManager=_transferManager;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00000001001c1000
- (void)connectionEstablished:(id)arg1;	// IMP=0x00000001001c0ee4
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001001c0edc
- (id)remoteObjectInterface;	// IMP=0x00000001001c0ec0
- (id)exportedInterface;	// IMP=0x00000001001c0d60
- (id)machServiceName;	// IMP=0x00000001001c0d54
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x00000001001c0b74
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;	// IMP=0x00000001001c09a4
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001bfff4
- (void)replaceIconValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001001bfed4
- (id)makeDestinationDirectoryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001bfc68
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001bfc5c
- (void)invalidate;	// IMP=0x00000001001bfc28
- (void)activate;	// IMP=0x00000001001bfbf4
- (id)init;	// IMP=0x00000001001bfb88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

