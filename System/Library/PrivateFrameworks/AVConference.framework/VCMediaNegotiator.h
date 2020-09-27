/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorAudioResults, VCMediaNegotiatorVideoResults, VCMediaNegotiatorCaptionsResults, VCMediaNegotiatorMomentsResults, VCMediaNegotiatorFaceTimeSettingsResults, NSMutableArray, NSArray;

@interface VCMediaNegotiator : NSObject {

	BOOL _usePreNegotiation;
	BOOL _negotiationDone;
	BOOL _isCellular16x9Capable;
	VCMediaNegotiatorLocalConfiguration* _localSettings;
	VCMediaNegotiatorResults* _negotiatedSettings;
	VCMediaNegotiatorAudioResults* _negotiatedAudioSettings;
	VCMediaNegotiatorVideoResults* _negotiatedVideoSettings;
	VCMediaNegotiatorVideoResults* _negotiatedScreenSettings;
	VCMediaNegotiatorCaptionsResults* _negotiatedCaptionsSettings;
	VCMediaNegotiatorMomentsResults* _negotiatedMomentsSettings;
	VCMediaNegotiatorFaceTimeSettingsResults* _negotiatedFaceTimeSettings;
	NSMutableArray* _negotiatedMultiwayAudioStreams;
	NSMutableArray* _negotiatedMultiwayVideoStreams;
	long long _negotiationMode;

}

@property (nonatomic,readonly) long long negotiationMode;                                                          //@synthesize negotiationMode=_negotiationMode - In the implementation block
@property (nonatomic,readonly) BOOL isCaller; 
@property (nonatomic,readonly) BOOL usePreNegotiation;                                                             //@synthesize usePreNegotiation=_usePreNegotiation - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorLocalConfiguration * localSettings;                                //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorResults * negotiatedSettings;                                      //@synthesize negotiatedSettings=_negotiatedSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorAudioResults * negotiatedAudioSettings;                            //@synthesize negotiatedAudioSettings=_negotiatedAudioSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorVideoResults * negotiatedVideoSettings;                            //@synthesize negotiatedVideoSettings=_negotiatedVideoSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorVideoResults * negotiatedScreenSettings;                           //@synthesize negotiatedScreenSettings=_negotiatedScreenSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorCaptionsResults * negotiatedCaptionsSettings;                      //@synthesize negotiatedCaptionsSettings=_negotiatedCaptionsSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorMomentsResults * negotiatedMomentsSettings;                        //@synthesize negotiatedMomentsSettings=_negotiatedMomentsSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorFaceTimeSettingsResults * negotiatedFaceTimeSettings;              //@synthesize negotiatedFaceTimeSettings=_negotiatedFaceTimeSettings - In the implementation block
@property (nonatomic,readonly) NSArray * negotiatedMultiwayAudioStreams;                                           //@synthesize negotiatedMultiwayAudioStreams=_negotiatedMultiwayAudioStreams - In the implementation block
@property (nonatomic,readonly) NSArray * negotiatedMultiwayVideoStreams;                                           //@synthesize negotiatedMultiwayVideoStreams=_negotiatedMultiwayVideoStreams - In the implementation block
+(id)localConfigurationWithData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3 ;
+(BOOL)validateLocalConfiguration:(id)arg1 ;
+(id)newCompressedBlob:(id)arg1 ;
+(void)dumpBlob:(id)arg1 prefix:(id)arg2 force:(BOOL)arg3 ;
+(id)newDecompressedBlob:(id)arg1 ;
+(id)negotiationBlobFromData:(id)arg1 ;
+(BOOL)validateMultiwayVideoStreamConfigurations:(id)arg1 ;
+(BOOL)validateMultiwayAudioStreamConfigurations:(id)arg1 ;
+(int)imageTypeBlobSettingsFromSet:(id)arg1 ;
+(int)videoCodecBlobSettingsFromSet:(id)arg1 ;
-(void)dealloc;
-(BOOL)supportsHEIFEncoding;
-(BOOL)supportsHEVCEncoding;
-(BOOL)isCaller;
-(VCMediaNegotiatorLocalConfiguration *)localSettings;
-(id)initWithLocalSettings:(id)arg1 ;
-(BOOL)processInviteBlob:(id)arg1 ;
-(NSArray *)negotiatedMultiwayAudioStreams;
-(VCMediaNegotiatorFaceTimeSettingsResults *)negotiatedFaceTimeSettings;
-(VCMediaNegotiatorAudioResults *)negotiatedAudioSettings;
-(NSArray *)negotiatedMultiwayVideoStreams;
-(VCMediaNegotiatorVideoResults *)negotiatedVideoSettings;
-(BOOL)usePreNegotiation;
-(VCMediaNegotiatorVideoResults *)negotiatedScreenSettings;
-(BOOL)processResponseBlob:(id)arg1 ;
-(id)newInviteBlob;
-(id)newResponseBlob;
-(VCMediaNegotiatorResults *)negotiatedSettings;
-(id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2 ;
-(VCMediaNegotiatorMomentsResults *)negotiatedMomentsSettings;
-(unsigned)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2 ;
-(BOOL)isCellular16x9EncodeCapable;
-(BOOL)setupBandwidthSettingsForMediaBlob:(id)arg1 ;
-(void)setupCaptionsForMediaBlob:(id)arg1 ;
-(void)setupMomentsForMediaBlob:(id)arg1 ;
-(void)setupFaceTimeSettingsForMediaBlob:(id)arg1 isResponse:(BOOL)arg2 ;
-(void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1 ;
-(void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1 ;
-(void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1 ;
-(BOOL)negotiateFaceTimeSettings:(id)arg1 ;
-(BOOL)negotiateAudioSettings:(id)arg1 ;
-(BOOL)negotiateVideoSettings:(id)arg1 ;
-(BOOL)negotiateScreenSettings:(id)arg1 ;
-(BOOL)negotiateCaptionsWithCaptionsSettings:(id)arg1 ;
-(BOOL)negotiateMomentsWithMomentsSettings:(id)arg1 ;
-(BOOL)negotiateMultiwayAudioStreams:(id)arg1 ;
-(BOOL)negotiateMultiwayVideoStreams:(id)arg1 ;
-(BOOL)setupAudioWithNegotiatedSettings:(id)arg1 ;
-(BOOL)setupVideoWithNegotiatedSettings:(id)arg1 ;
-(BOOL)setupScreenWithNegotiatedSettings:(id)arg1 ;
-(BOOL)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 maxBitrate:(unsigned)arg4 ;
-(void)negotiateAudioUseSBR:(id)arg1 ;
-(void)negotiateAudioAllowRecording:(id)arg1 ;
-(BOOL)negotiateAudioPrimaryPayload:(id)arg1 ;
-(BOOL)negotiateAudioDTXPayload:(id)arg1 ;
-(BOOL)negotiateAudioREDPayload:(id)arg1 ;
-(void)negotiateAudioSecondaryPayloads:(id)arg1 ;
-(id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(BOOL)arg3 ;
-(id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2 ;
-(BOOL)processParameterSets:(id)arg1 videoResults:(id)arg2 ;
-(void)negotiateRTCPFB:(id)arg1 ;
-(id)getPreferredVideoPayloadList:(id)arg1 ;
-(BOOL)canEncodeVideo:(id)arg1 ;
-(BOOL)canDecodeVideo:(id)arg1 ;
-(BOOL)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(BOOL)arg7 ;
-(void)negotiateTilesPerFrame:(id)arg1 ;
-(id)getPreferredScreenPayloadList;
-(BOOL)processPixelFormats:(id)arg1 videoResults:(id)arg2 ;
-(BOOL)selectBestScreenRule:(id)arg1 preferredPayloadOrder:(id)arg2 ;
-(BOOL)isVideoStreamSupported:(int)arg1 ;
-(id)localeWithMediaBlobLanguage:(int)arg1 ;
-(id)initWithMode:(long long)arg1 localSettings:(id)arg2 ;
-(int)mediaBlobLanguageWithLocale:(id)arg1 ;
-(VCMediaNegotiatorCaptionsResults *)negotiatedCaptionsSettings;
-(long long)negotiationMode;
@end

