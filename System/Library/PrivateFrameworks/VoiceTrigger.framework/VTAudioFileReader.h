/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface VTAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id)readSamples:(unsigned long long)arg1 ;
@end

