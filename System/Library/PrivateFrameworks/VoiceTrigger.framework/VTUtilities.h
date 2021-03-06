/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(id)deviceProductType;
+(BOOL)isIOS;
+(id)deviceProductVersion;
+(BOOL)isNano;
+(BOOL)VTIsHorseman;
+(BOOL)supportBargeIn;
+(void)forceReload;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(BOOL)isTorpedo;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(double)systemUpTime;
+(BOOL)supportTTS;
+(BOOL)supportExternalPhraseSpotter;
+(BOOL)supportPremiumAssets;
+(id)deviceSoftwareVersion;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
@end

