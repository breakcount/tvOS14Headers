/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class VSMappedData, NSMutableArray;

@interface VSStreamAudioData : NSObject {

	VSMappedData* _mappedData;
	NSMutableArray* _mappedAudioInfo;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) VSMappedData * mappedData;                       //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mappedAudioInfo;                //@synthesize mappedAudioInfo=_mappedAudioInfo - In the implementation block
@property (nonatomic,readonly) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
-(double)duration;
-(VSMappedData *)mappedData;
-(AudioStreamBasicDescription)asbd;
-(BOOL)writeWaveToFilePath:(id)arg1 ;
-(void)appendAudioData:(id)arg1 packetCount:(unsigned long long)arg2 packetDescriptions:(id)arg3 ;
-(void)enumerateAudioWithBlock:(/*^block*/id)arg1 ;
-(void)setMappedData:(VSMappedData *)arg1 ;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 ;
-(NSMutableArray *)mappedAudioInfo;
-(void)setMappedAudioInfo:(NSMutableArray *)arg1 ;
@end

