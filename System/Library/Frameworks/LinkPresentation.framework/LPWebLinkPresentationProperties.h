/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPLinkPresentationPropertyProvider.h>

@class LPCaptionBarPresentationProperties, NSString, LPImage, LPImagePresentationProperties, NSArray, LPVideo, LPAudio, UIColor, NSNumber, LPInlineMediaPlaybackInformation;

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {

	BOOL _preliminary;
	long long _style;
	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	NSString* _quotedText;
	LPImage* _image;
	LPImagePresentationProperties* _imageProperties;
	NSArray* _alternateImages;
	LPVideo* _video;
	LPAudio* _audio;
	UIColor* _backgroundColor;
	NSNumber* _minimumHeight;
	LPInlineMediaPlaybackInformation* _inlinePlaybackInformation;
	NSString* _domainNameForIndicator;

}

@property (assign,getter=isPreliminary,nonatomic) BOOL preliminary;                                     //@synthesize preliminary=_preliminary - In the implementation block
@property (assign,nonatomic) long long style;                                                           //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * captionBar;                           //@synthesize captionBar=_captionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * mediaTopCaptionBar;                   //@synthesize mediaTopCaptionBar=_mediaTopCaptionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * mediaBottomCaptionBar;                //@synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar - In the implementation block
@property (nonatomic,copy) NSString * quotedText;                                                       //@synthesize quotedText=_quotedText - In the implementation block
@property (nonatomic,retain) LPImage * image;                                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImagePresentationProperties * imageProperties;                           //@synthesize imageProperties=_imageProperties - In the implementation block
@property (nonatomic,retain) NSArray * alternateImages;                                                 //@synthesize alternateImages=_alternateImages - In the implementation block
@property (nonatomic,retain) LPVideo * video;                                                           //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) LPAudio * audio;                                                           //@synthesize audio=_audio - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSNumber * minimumHeight;                                                  //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,retain) LPInlineMediaPlaybackInformation * inlinePlaybackInformation;              //@synthesize inlinePlaybackInformation=_inlinePlaybackInformation - In the implementation block
@property (nonatomic,copy) NSString * domainNameForIndicator;                                           //@synthesize domainNameForIndicator=_domainNameForIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(LPImage *)image;
-(void)setImage:(LPImage *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setImageProperties:(LPImagePresentationProperties *)arg1 ;
-(LPImagePresentationProperties *)imageProperties;
-(NSNumber *)minimumHeight;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(LPVideo *)video;
-(LPAudio *)audio;
-(void)setVideo:(LPVideo *)arg1 ;
-(void)setAudio:(LPAudio *)arg1 ;
-(void)setAlternateImages:(NSArray *)arg1 ;
-(NSArray *)alternateImages;
-(void)setCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(LPCaptionBarPresentationProperties *)captionBar;
-(void)setMediaBottomCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
-(void)setMediaTopCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
-(void)setInlinePlaybackInformation:(LPInlineMediaPlaybackInformation *)arg1 ;
-(LPInlineMediaPlaybackInformation *)inlinePlaybackInformation;
-(BOOL)isPreliminary;
-(NSString *)quotedText;
-(NSString *)domainNameForIndicator;
-(void)setPreliminary:(BOOL)arg1 ;
-(void)setQuotedText:(NSString *)arg1 ;
-(void)setDomainNameForIndicator:(NSString *)arg1 ;
@end

