/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPAudioVideoSettings : NSObject {

	id _domainObserver;
	id _soundDomainObserver;
	id _iPodDomainObserver;
	long long _iTunesVideoPurchaseResolution;
	BOOL _iTunesPreferHLSForPlayback;
	long long _iTunesMaxHLSVideoResolution;
	long long _iTunesFileVideoResolution;
	BOOL _previewPageAudioEnabled;
	BOOL _transitionSoundEffectsEnabled;
	NSString* _preferredAudioLanguageCode;
	NSString* _preferredSubtitleLanguageCode;
	long long _subtitleDisplayType;
	BOOL _preferSDHOverRegularSubtitles;
	BOOL _preferVideoDescriptions;
	BOOL _soundCheckEnabled;
	BOOL _highQualityAudioEnabled;
	BOOL _lateNightModeEnabled;
	int _lateNightModeToken;
	BOOL _lateNightModeTokenIsValid;
	long long _mediaRepeatMode;
	long long _audioOutputFormat;
	long long _favoritesSortMode;
	long long _movieFavoritesSortMode;
	BOOL _showFuseMusic;

}

@property (assign,nonatomic) long long iTunesVideoPurchaseResolution; 
@property (assign,nonatomic) BOOL iTunesPreferHLSForPlayback; 
@property (assign,nonatomic) long long iTunesMaxHLSVideoResolution; 
@property (assign,nonatomic) long long iTunesFileVideoResolution; 
@property (assign,nonatomic) BOOL preferHDPreviews; 
@property (assign,nonatomic) long long audioOutputFormat;                          //@synthesize audioOutputFormat=_audioOutputFormat - In the implementation block
@property (assign,nonatomic) BOOL highQualityAudioEnabled; 
@property (assign,nonatomic) BOOL soundCheckEnabled; 
@property (assign,nonatomic) BOOL lateNightModeEnabled; 
@property (nonatomic,copy) NSString * preferredAudioLanguageCode; 
@property (assign,nonatomic) BOOL preferVideoDescriptions; 
@property (nonatomic,copy) NSString * preferredSubtitleLanguageCode; 
@property (assign,nonatomic) long long subtitleDisplayType; 
@property (assign,nonatomic) BOOL preferSDHOverRegularSubtitles; 
@property (assign,nonatomic) long long mediaRepeatMode; 
@property (assign,nonatomic) BOOL previewPageAudioEnabled; 
@property (assign,nonatomic) long long favoritesSortMode; 
@property (assign,nonatomic) long long movieFavoritesSortMode; 
@property (assign,nonatomic) BOOL showFuseMusic; 
@property (assign,nonatomic) BOOL transitionSoundEffectsEnabled;                   //@synthesize transitionSoundEffectsEnabled=_transitionSoundEffectsEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)soundCheckEnabled;
-(BOOL)previewPageAudioEnabled;
-(long long)iTunesVideoPurchaseResolution;
-(BOOL)preferHDPreviews;
-(void)_refreshPropertiesWithPreferences;
-(long long)favoritesSortMode;
-(long long)movieFavoritesSortMode;
-(void)setFavoritesSortMode:(long long)arg1 ;
-(void)setMovieFavoritesSortMode:(long long)arg1 ;
-(BOOL)preferSDHOverRegularSubtitles;
-(BOOL)preferVideoDescriptions;
-(BOOL)iTunesPreferHLSForPlayback;
-(long long)iTunesMaxHLSVideoResolution;
-(long long)iTunesFileVideoResolution;
-(id)_stringFromResolution:(long long)arg1 ;
-(void)_mediaAccessibilityCaptionsSettingsDidChange:(id)arg1 ;
-(void)_repeatModeSettingDidChange:(id)arg1 ;
-(long long)_resolutionFromString:(id)arg1 defaultResolution:(long long)arg2 ;
-(long long)_subtitleDisplayTypeForMACaptionType:(long long)arg1 ;
-(long long)_mediaRepeatModeFromMPRepeatType:(long long)arg1 ;
-(id)_sharedSoundPreferences;
-(void)_refreshSoundPropertiesWithPreferences;
-(BOOL)_isAppAllowedToChangeSoundSettings;
-(int)_surroundSoundPrefValueFromAudioOutputFormat:(long long)arg1 ;
-(long long)_audioOutputFormatForSurroundSoundPrefValue:(int)arg1 ;
-(id)_sharedIPodPreferences;
-(void)_refreshMobileIPodPropertiesWithPreferences;
-(void)_setSubtitleDisplayType:(long long)arg1 updateSDH:(BOOL)arg2 ;
-(void)_setPreferSDHOverRegularSubtitles:(BOOL)arg1 updateSubtitleDisplayType:(BOOL)arg2 ;
-(long long)_repeatTypeFromMediaRepeatMode:(long long)arg1 ;
-(long long)_MACaptionTypeForSubtitleDisplayType:(long long)arg1 ;
-(long long)subtitleDisplayType;
-(void)setPreferredSubtitleLanguageCode:(NSString *)arg1 ;
-(void)_updateRepeatModeSetting;
-(void)setMediaRepeatMode:(long long)arg1 ;
-(void)setITunesVideoPurchaseResolution:(long long)arg1 ;
-(void)setITunesPreferHLSForPlayback:(BOOL)arg1 ;
-(void)setITunesMaxHLSVideoResolution:(long long)arg1 ;
-(void)setITunesFileVideoResolution:(long long)arg1 ;
-(void)setPreferHDPreviews:(BOOL)arg1 ;
-(void)setPreviewPageAudioEnabled:(BOOL)arg1 ;
-(void)setTransitionSoundEffectsEnabled:(BOOL)arg1 ;
-(void)setAudioOutputFormat:(long long)arg1 ;
-(void)setSoundCheckEnabled:(BOOL)arg1 ;
-(BOOL)highQualityAudioEnabled;
-(void)setHighQualityAudioEnabled:(BOOL)arg1 ;
-(BOOL)lateNightModeEnabled;
-(void)setLateNightModeEnabled:(BOOL)arg1 ;
-(NSString *)preferredAudioLanguageCode;
-(void)setPreferredAudioLanguageCode:(NSString *)arg1 ;
-(void)setPreferVideoDescriptions:(BOOL)arg1 ;
-(NSString *)preferredSubtitleLanguageCode;
-(void)setSubtitleDisplayType:(long long)arg1 ;
-(void)setPreferSDHOverRegularSubtitles:(BOOL)arg1 ;
-(long long)mediaRepeatMode;
-(BOOL)showFuseMusic;
-(void)setShowFuseMusic:(BOOL)arg1 ;
-(void)_preferDescriptiveVideoUpdated;
-(long long)audioOutputFormat;
-(BOOL)transitionSoundEffectsEnabled;
@end

