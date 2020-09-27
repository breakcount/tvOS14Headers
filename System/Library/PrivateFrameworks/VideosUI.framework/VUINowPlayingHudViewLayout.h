/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUINowPlayingHudMetaDataViewLayout, VUINowPlayingHudButtonsLayout;

@interface VUINowPlayingHudViewLayout : TVViewLayout {

	double _cornerRadius;
	TVImageLayout* _imageLayout;
	VUINowPlayingHudMetaDataViewLayout* _metaDataViewLayout;
	VUINowPlayingHudButtonsLayout* _buttonsLayout;

}

@property (nonatomic,readonly) double cornerRadius;                                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) TVImageLayout * imageLayout;                                          //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,readonly) VUINowPlayingHudMetaDataViewLayout * metaDataViewLayout;              //@synthesize metaDataViewLayout=_metaDataViewLayout - In the implementation block
@property (nonatomic,readonly) VUINowPlayingHudButtonsLayout * buttonsLayout;                        //@synthesize buttonsLayout=_buttonsLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(double)cornerRadius;
-(TVImageLayout *)imageLayout;
-(VUINowPlayingHudMetaDataViewLayout *)metaDataViewLayout;
-(VUINowPlayingHudButtonsLayout *)buttonsLayout;
@end

