/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCMediaNegotiatorMomentsResults : NSObject {

	int _capabilities;
	int _imageType;
	int _videoCodec;
	int _multiwayCapabilities;

}

@property (assign,nonatomic) int capabilities;                               //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) int mulitwayCapabilities;                       //@synthesize multiwayCapabilities=_multiwayCapabilities - In the implementation block
@property (nonatomic,readonly) unsigned avcMomentsCapabilities; 
@property (assign,nonatomic) int imageType;                                  //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) int videoCodec;                                 //@synthesize videoCodec=_videoCodec - In the implementation block
-(int)capabilities;
-(void)setCapabilities:(int)arg1 ;
-(int)imageType;
-(void)setImageType:(int)arg1 ;
-(void)setVideoCodec:(int)arg1 ;
-(int)videoCodec;
-(unsigned)avcMomentsCapabilities;
-(int)mulitwayCapabilities;
-(void)setMulitwayCapabilities:(int)arg1 ;
@end
