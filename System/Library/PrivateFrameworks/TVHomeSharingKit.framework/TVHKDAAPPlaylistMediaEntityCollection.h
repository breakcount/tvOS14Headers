/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityCollection.h>

@class NSString, TVHKMediaEntityType, TVHKMediaEntityIdentifier, TVHKDMAPPlaylistIdentifier;

@interface TVHKDAAPPlaylistMediaEntityCollection : TVHKMediaEntityCollection {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	unsigned long long _playlistType;
	TVHKMediaEntityIdentifier* _parentPlaylistIdentifier;
	TVHKDMAPPlaylistIdentifier* _playlistIdentifier;

}

@property (nonatomic,copy) TVHKDMAPPlaylistIdentifier * playlistIdentifier;              //@synthesize playlistIdentifier=_playlistIdentifier - In the implementation block
+(unsigned long long)_playlistTypeFromDMAPEntity:(id)arg1 ;
-(id)type;
-(id)identifier;
-(unsigned long long)playlistType;
-(id)imageIdentifier;
-(TVHKDMAPPlaylistIdentifier *)playlistIdentifier;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 ;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)isAutoGenerated;
-(id)isOrganizational;
-(id)mediaItemCount;
-(id)parentPlaylistIdentifier;
-(void)setPlaylistIdentifier:(TVHKDMAPPlaylistIdentifier *)arg1 ;
@end

