/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPCPlayerPath, MPPropertySet, NSString;


@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (readonly) SCD_Struct_MP1 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@optional
-(NSString *)preferredFallbackItemRelationship;

@required
-(MPCPlayerPath *)playerPath;
-(SCD_Struct_MP1)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;

@end

