/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface VCCapabilities : NSObject <NSCoding> {

	BOOL isAudioEnabled;
	BOOL isAudioPausedToStart;
	BOOL isVideoEnabled;
	BOOL isVideoPausedToStart;
	BOOL isVideoSourceScreen;
	BOOL isDuplexAudioOnly;
	BOOL isDuplexVideoOnly;
	BOOL isHalfDuplexAudio;
	BOOL isKeyExchangeEnabled;
	BOOL isRelayEnabled;
	BOOL isRelayForced;
	BOOL requiresWifi;
	BOOL isDTLSEnabled;
	unsigned preferredAudioCodec;
	unsigned actualAudioCodec;
	unsigned preferredVideoCodec;
	unsigned actualVideoCodec;
	int deviceRole;

}

@property (assign) BOOL isAudioEnabled; 
@property (assign) BOOL isAudioPausedToStart; 
@property (assign) BOOL isVideoEnabled; 
@property (assign) BOOL isVideoPausedToStart; 
@property (assign) BOOL isVideoSourceScreen; 
@property (assign) BOOL isDuplexVideoOnly; 
@property (assign) BOOL isDuplexAudioOnly; 
@property (assign) BOOL isHalfDuplexAudio; 
@property (assign) BOOL isKeyExchangeEnabled; 
@property (assign) BOOL isRelayEnabled; 
@property (assign) BOOL isRelayForced; 
@property (assign) BOOL requiresWifi; 
@property (assign) BOOL isDTLSEnabled; 
@property (assign) unsigned preferredAudioCodec; 
@property (assign) unsigned actualAudioCodec; 
@property (assign) unsigned preferredVideoCodec; 
@property (assign) unsigned actualVideoCodec; 
@property (assign) int deviceRole; 
+(id)DataOnlyVCCapabilities;
+(id)AudioOnlyVCCapabilities;
+(id)VideoOnlyVCCapabilities;
+(id)screenSharingVCCapabilities;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(BOOL)isVideoEnabled;
-(void)setIsVideoEnabled:(BOOL)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(id)newEncodedDictionary;
-(BOOL)isAudioPausedToStart;
-(BOOL)isVideoPausedToStart;
-(BOOL)isRelayEnabled;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(unsigned)preferredAudioCodec;
-(void)setPreferredAudioCodec:(unsigned)arg1 ;
-(BOOL)isDuplexAudioOnly;
-(BOOL)isKeyExchangeEnabled;
-(BOOL)isDTLSEnabled;
-(unsigned)actualAudioCodec;
-(void)setActualAudioCodec:(unsigned)arg1 ;
-(unsigned)preferredVideoCodec;
-(void)setPreferredVideoCodec:(unsigned)arg1 ;
-(unsigned)actualVideoCodec;
-(void)setActualVideoCodec:(unsigned)arg1 ;
-(BOOL)isRelayForced;
-(void)setIsDTLSEnabled:(BOOL)arg1 ;
-(BOOL)isDuplexVideoOnly;
-(void)setIsDuplexAudioOnly:(BOOL)arg1 ;
-(void)setIsDuplexVideoOnly:(BOOL)arg1 ;
-(void)setIsVideoPausedToStart:(BOOL)arg1 ;
-(void)setIsVideoSourceScreen:(BOOL)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(BOOL)isVideoSourceScreen;
-(void)setIsKeyExchangeEnabled:(BOOL)arg1 ;
-(void)setIsAudioPausedToStart:(BOOL)arg1 ;
-(void)setIsRelayEnabled:(BOOL)arg1 ;
-(void)setIsRelayForced:(BOOL)arg1 ;
-(BOOL)isHalfDuplexAudio;
-(void)setIsHalfDuplexAudio:(BOOL)arg1 ;
@end

