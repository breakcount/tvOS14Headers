/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {

	MPModelStorePlatformMetadataGenericObjectBuilder* _storePlatformBuilder;
	SCD_Struct_MP5 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(id)initWithRequestedProperties:(id)arg1 ;
-(MPPropertySet *)requestedProperties;
-(id)genericObjectForRadioStationTrack:(id)arg1 containerUniqueID:(id)arg2 userIdentity:(id)arg3 ;
@end

