/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUIMPMediaEntityImageLoadParamsCreating.h>

@class NSString, MPMediaItem;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {

	NSString* _coverArtImageIdentifier;
	NSString* _previewFrameImageIdentifier;
	MPMediaItem* _mediaItem;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)isLocal;
-(id)resolution;
-(id)assetType;
-(id)contentRating;
-(id)isPlayable;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)studio;
-(id)rentalExpirationDate;
-(id)extrasURL;
-(id)credits;
-(id)assetController;
-(id)showIdentifier;
-(id)playedState;
-(id)seasonIdentifier;
-(id)mediaPlayerMediaItem;
-(id)HLSResolution;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)HLSAudioCapability;
-(id)audioCapability;
-(id)showCanonicalID;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)seasonCanonicalID;
-(id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
@end

