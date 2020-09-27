/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VSSpeechEngine, VSVoiceResourceAsset, NSObject;

@interface VSPrewarmService : NSObject {

	VSSpeechEngine* _cachedEngine;
	VSVoiceResourceAsset* _loadedResources;
	NSObject*<OS_dispatch_queue> _prewarmQueue;

}

@property (nonatomic,retain) VSSpeechEngine * cachedEngine;                          //@synthesize cachedEngine=_cachedEngine - In the implementation block
@property (nonatomic,retain) VSVoiceResourceAsset * loadedResources;                 //@synthesize loadedResources=_loadedResources - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> prewarmQueue;              //@synthesize prewarmQueue=_prewarmQueue - In the implementation block
+(id)sharedService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)prewarmQueue;
-(void)setPrewarmQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)prewarmWithRequest:(id)arg1 ;
-(id)cachedEngineForVoice:(id)arg1 resources:(id)arg2 ;
-(id)loadEngineForVoice:(id)arg1 resources:(id)arg2 ;
-(id)_cachedEngineForVoice:(id)arg1 resources:(id)arg2 ;
-(id)_engineForVoice:(id)arg1 resources:(id)arg2 ;
-(void)_loadVoiceResources:(id)arg1 forEngine:(id)arg2 ;
-(VSSpeechEngine *)cachedEngine;
-(void)waitUntilPrewarmFinish;
-(void)setCachedEngine:(VSSpeechEngine *)arg1 ;
-(VSVoiceResourceAsset *)loadedResources;
-(void)setLoadedResources:(VSVoiceResourceAsset *)arg1 ;
@end

