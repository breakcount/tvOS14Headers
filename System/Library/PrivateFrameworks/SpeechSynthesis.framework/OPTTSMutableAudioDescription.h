/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
#import <SpeechSynthesis/OPTTSAudioDescription.h>

@interface OPTTSMutableAudioDescription : OPTTSAudioDescription

@property (assign,nonatomic) double sample_rate; 
@property (assign,nonatomic) unsigned format_id; 
@property (assign,nonatomic) unsigned format_flags; 
@property (assign,nonatomic) unsigned bytes_per_packet; 
@property (assign,nonatomic) unsigned frames_per_packet; 
@property (assign,nonatomic) unsigned bytes_per_frame; 
@property (assign,nonatomic) unsigned channels_per_frame; 
@property (assign,nonatomic) unsigned bits_per_channel; 
@property (assign,nonatomic) unsigned reserved; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned)reserved;
-(void)setReserved:(unsigned)arg1 ;
-(unsigned)format_id;
-(double)sample_rate;
-(unsigned)format_flags;
-(unsigned)bytes_per_packet;
-(unsigned)frames_per_packet;
-(unsigned)bytes_per_frame;
-(unsigned)channels_per_frame;
-(unsigned)bits_per_channel;
-(void)setSample_rate:(double)arg1 ;
-(void)setFormat_id:(unsigned)arg1 ;
-(void)setFormat_flags:(unsigned)arg1 ;
-(void)setBytes_per_packet:(unsigned)arg1 ;
-(void)setFrames_per_packet:(unsigned)arg1 ;
-(void)setBytes_per_frame:(unsigned)arg1 ;
-(void)setChannels_per_frame:(unsigned)arg1 ;
-(void)setBits_per_channel:(unsigned)arg1 ;
@end

