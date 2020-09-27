/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject {

	BOOL _autoPlaySection;
	MPCPlayerResponse* _response;
	MPModelGenericObject* _metadataObject;

}

@property (getter=isAutoPlaySection,nonatomic,readonly) BOOL autoPlaySection;              //@synthesize autoPlaySection=_autoPlaySection - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;                      //@synthesize metadataObject=_metadataObject - In the implementation block
-(MPCPlayerResponse *)response;
-(id)remove;
-(id)initWithModelGenericObject:(id)arg1 sectionIndex:(long long)arg2 response:(id)arg3 ;
-(BOOL)isAutoPlaySection;
-(MPModelGenericObject *)metadataObject;
@end

