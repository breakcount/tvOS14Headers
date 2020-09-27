/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface VSDownloadMetrics : NSObject {

	BOOL _isCellularAllowed;
	BOOL _discretionary;
	float _downloadProgress;
	NSString* _clientBundleIdentifier;
	NSNumber* _downloadSize;
	long long _errorCode;
	NSString* _voiceDownloadKey;
	long long _downloadBeginTimestamp;
	long long _downloadEndTimestamp;

}

@property (readonly) NSString * voiceDownloadKey;                   //@synthesize voiceDownloadKey=_voiceDownloadKey - In the implementation block
@property (readonly) long long downloadBeginTimestamp;              //@synthesize downloadBeginTimestamp=_downloadBeginTimestamp - In the implementation block
@property (readonly) long long downloadEndTimestamp;                //@synthesize downloadEndTimestamp=_downloadEndTimestamp - In the implementation block
@property (copy) NSString * clientBundleIdentifier;                 //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign) BOOL isCellularAllowed;                          //@synthesize isCellularAllowed=_isCellularAllowed - In the implementation block
@property (assign) BOOL discretionary;                              //@synthesize discretionary=_discretionary - In the implementation block
@property (copy) NSNumber * downloadSize;                           //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign) float downloadProgress;                          //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
+(double)_clockFactor;
-(id)description;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(double)downloadDuration;
-(NSString *)clientBundleIdentifier;
-(BOOL)discretionary;
-(BOOL)isCellularAllowed;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)downloadSize;
-(void)setDownloadSize:(NSNumber *)arg1 ;
-(id)dictionaryMetrics;
-(id)initWithVoiceName:(id)arg1 languageCode:(id)arg2 gender:(long long)arg3 ;
-(void)setIsCellularAllowed:(BOOL)arg1 ;
-(BOOL)endMetrics;
-(NSString *)voiceDownloadKey;
-(long long)downloadBeginTimestamp;
-(long long)downloadEndTimestamp;
@end
