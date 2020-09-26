//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSPlatform-Protocol.h"
#import "TVPDaemonDelegate-Protocol.h"

@class NSString;

@interface TVPMyPSPlatform : NSObject <TVPDaemonDelegate, MSPlatform>
{
}

- (void)mediaStreamDaemonAuthFailed:(id)arg1 personID:(id)arg2;	// IMP=0x0000000100056618
- (void)mediaStreamDaemonDidUnidle:(id)arg1;	// IMP=0x0000000100056614
- (void)mediaStreamDaemonDidIdle:(id)arg1;	// IMP=0x0000000100056610
- (id)theDaemon;	// IMP=0x0000000100056550
- (id)authTokenForPersonID:(id)arg1;	// IMP=0x0000000100056474
- (id)baseURLForPersonID:(id)arg1;	// IMP=0x0000000100056330
- (_Bool)shouldEnableNewFeatures;	// IMP=0x0000000100056328
- (id)contentURLForPersonID:(id)arg1;	// IMP=0x00000001000561c0
- (id)pushTokenForPersonID:(id)arg1;	// IMP=0x0000000100056040
- (id)socketOptions;	// IMP=0x0000000100056038
- (_Bool)policyMaySendDelete;	// IMP=0x0000000100056030
- (_Bool)policyMayDownload;	// IMP=0x0000000100056028
- (_Bool)policyMayUpload;	// IMP=0x0000000100056020
- (id)appBundleInfoString;	// IMP=0x0000000100055f50
- (id)OSString;	// IMP=0x0000000100055e38
- (id)hardwareString;	// IMP=0x0000000100055e2c
- (id)UDID;	// IMP=0x0000000100055d34
- (Class)deletePluginClass;	// IMP=0x0000000100055d28
- (Class)subscriberPluginClass;	// IMP=0x0000000100055d1c
- (Class)publisherPluginClass;	// IMP=0x0000000100055d14
- (id)pathMediaStreamDir;	// IMP=0x0000000100055ba8
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0000000100055ba0
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char *)arg7;	// IMP=0x0000000100055b9c
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char *)arg4;	// IMP=0x0000000100055b98
- (_Bool)shouldLogAtLevel:(int)arg1;	// IMP=0x0000000100055b90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
