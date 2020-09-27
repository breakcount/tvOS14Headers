/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {

	unsigned _layoutTag;
	AudioChannelLayout* _layout;
	void* _reserved;

}

@property (nonatomic,readonly) unsigned layoutTag; 
@property (nonatomic,readonly) const AudioChannelLayout* layout; 
@property (nonatomic,readonly) unsigned channelCount; 
+(BOOL)supportsSecureCoding;
+(id)layoutWithLayoutTag:(unsigned)arg1 ;
+(id)layoutWithLayout:(const AudioChannelLayout*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const AudioChannelLayout*)layout;
-(unsigned)channelCount;
-(id)initWithLayoutTag:(unsigned)arg1 ;
-(id)initWithLayout:(const AudioChannelLayout*)arg1 ;
-(unsigned)layoutTag;
-(unsigned long long)layoutSize;
@end

