/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSString, ENRegion;

@interface ENXPCClient : NSObject {

	BOOL _entitledForDeviceIdentity;
	BOOL _entitledForLogging;
	BOOL _entitledForTestVerification;
	BOOL _entitledToSkipFileSigningVerification;
	BOOL _entitledToSkipKeyReleasePrompt;
	BOOL _entitledToShowBuddy;
	int _accessLevel;
	int _pid;
	int _appAPIVersion;
	NSString* _signingIdentity;
	ENRegion* _appRegion;

}

@property (assign,nonatomic) int accessLevel;                                         //@synthesize accessLevel=_accessLevel - In the implementation block
@property (assign,nonatomic) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * signingIdentity;                                //@synthesize signingIdentity=_signingIdentity - In the implementation block
@property (assign,nonatomic) BOOL entitledForDeviceIdentity;                          //@synthesize entitledForDeviceIdentity=_entitledForDeviceIdentity - In the implementation block
@property (assign,nonatomic) BOOL entitledForLogging;                                 //@synthesize entitledForLogging=_entitledForLogging - In the implementation block
@property (assign,nonatomic) BOOL entitledToSkipFileSigningVerification;              //@synthesize entitledToSkipFileSigningVerification=_entitledToSkipFileSigningVerification - In the implementation block
@property (assign,nonatomic) BOOL entitledToSkipKeyReleasePrompt;                     //@synthesize entitledToSkipKeyReleasePrompt=_entitledToSkipKeyReleasePrompt - In the implementation block
@property (assign,nonatomic) BOOL entitledToShowBuddy;                                //@synthesize entitledToShowBuddy=_entitledToShowBuddy - In the implementation block
@property (nonatomic,readonly) int appAPIVersion;                                     //@synthesize appAPIVersion=_appAPIVersion - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * appRegion;                             //@synthesize appRegion=_appRegion - In the implementation block
@property (nonatomic,readonly) BOOL entitledForTestVerification;                      //@synthesize entitledForTestVerification=_entitledForTestVerification - In the implementation block
+(id)clientWithAuditToken:(SCD_Struct_EN1)arg1 pid:(int)arg2 ;
-(id)description;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(int)accessLevel;
-(NSString *)signingIdentity;
-(void)setAccessLevel:(int)arg1 ;
-(int)appAPIVersion;
-(void)activateWithAppAPIVersion:(int)arg1 regionISO:(id)arg2 ;
-(void)setSigningIdentity:(NSString *)arg1 ;
-(ENRegion *)appRegion;
-(BOOL)entitledForDeviceIdentity;
-(void)setEntitledForDeviceIdentity:(BOOL)arg1 ;
-(BOOL)entitledForLogging;
-(void)setEntitledForLogging:(BOOL)arg1 ;
-(BOOL)entitledForTestVerification;
-(BOOL)entitledToSkipFileSigningVerification;
-(void)setEntitledToSkipFileSigningVerification:(BOOL)arg1 ;
-(BOOL)entitledToSkipKeyReleasePrompt;
-(void)setEntitledToSkipKeyReleasePrompt:(BOOL)arg1 ;
-(BOOL)entitledToShowBuddy;
-(void)setEntitledToShowBuddy:(BOOL)arg1 ;
@end

