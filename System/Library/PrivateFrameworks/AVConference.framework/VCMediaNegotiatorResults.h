/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface VCMediaNegotiatorResults : NSObject {

	BOOL _supportsDynamicMaxBitrate;
	NSString* _remoteUserAgent;
	NSString* _remoteBasebandCodec;
	unsigned _remoteBasebandCodecSampleRate;
	NSMutableDictionary* _bandwidthSettings;
	unsigned char _mediaControlInfoVersion;

}

@property (assign,nonatomic) BOOL supportsDynamicMaxBitrate;                       //@synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate - In the implementation block
@property (nonatomic,retain) NSString * remoteUserAgent;                           //@synthesize remoteUserAgent=_remoteUserAgent - In the implementation block
@property (nonatomic,retain) NSString * remoteBasebandCodec;                       //@synthesize remoteBasebandCodec=_remoteBasebandCodec - In the implementation block
@property (assign,nonatomic) unsigned remoteBasebandCodecSampleRate;               //@synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bandwidthSettings;              //@synthesize bandwidthSettings=_bandwidthSettings - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoVersion;                //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMediaControlInfoVersion:(unsigned char)arg1 ;
-(unsigned char)mediaControlInfoVersion;
-(BOOL)supportsDynamicMaxBitrate;
-(NSMutableDictionary *)bandwidthSettings;
-(void)setSupportsDynamicMaxBitrate:(BOOL)arg1 ;
-(NSString *)remoteBasebandCodec;
-(unsigned)remoteBasebandCodecSampleRate;
-(NSString *)remoteUserAgent;
-(void)setBandwidthSettings:(NSMutableDictionary *)arg1 ;
-(void)setRemoteUserAgent:(NSString *)arg1 ;
-(void)setRemoteBasebandCodec:(NSString *)arg1 ;
-(void)setRemoteBasebandCodecSampleRate:(unsigned)arg1 ;
@end

