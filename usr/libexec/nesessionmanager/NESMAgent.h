//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEAgent.h"

@class NSString;

@interface NESMAgent : NEAgent
{
    NSString *_providerBundleIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100004dd4
@property(readonly) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
- (_Bool)isLocal;	// IMP=0x0000000100004dbc
- (_Bool)validateAfterStartWithAuditTokens:(id)arg1;	// IMP=0x0000000100004db4
- (_Bool)isPerUser;	// IMP=0x0000000100004dac
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004910
- (id)initWithPluginType:(id)arg1 pluginVersion:(long long)arg2 pluginClass:(long long)arg3 pluginInfo:(id)arg4 userID:(id)arg5;	// IMP=0x000000010000486c

@end
