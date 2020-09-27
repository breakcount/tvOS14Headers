/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIMediaTagsViewLayout;

@interface VUITVEpisodeInformationLayout : TVViewLayout {

	double _cornerRadius;
	VUITextLayout* _episodeLayout;
	VUITextLayout* _titleLayout;
	VUITextLayout* _descriptionLayout;
	VUIMediaTagsViewLayout* _metadataLayout;

}

@property (nonatomic,readonly) double cornerRadius;                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) VUITextLayout * episodeLayout;                        //@synthesize episodeLayout=_episodeLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleLayout;                          //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionLayout;                    //@synthesize descriptionLayout=_descriptionLayout - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * metadataLayout;              //@synthesize metadataLayout=_metadataLayout - In the implementation block
-(id)init;
-(double)cornerRadius;
-(VUITextLayout *)titleLayout;
-(VUITextLayout *)descriptionLayout;
-(void)_configureLayout;
-(VUITextLayout *)episodeLayout;
-(VUIMediaTagsViewLayout *)metadataLayout;
-(UIEdgeInsets)highlightedContentMargin;
-(UIEdgeInsets)focusedContentMargin;
-(UIEdgeInsets)defaultContentMargin;
-(id)defaultBackgroundColorWithTraitCollection:(id)arg1 ;
-(id)highlightedBackgroundColorWithTraitCollection:(id)arg1 ;
-(id)focusedBackgroundColorWithTraitCollection:(id)arg1 ;
@end

