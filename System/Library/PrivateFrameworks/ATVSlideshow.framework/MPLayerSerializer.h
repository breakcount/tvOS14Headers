/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MPLayer.h>

@class MCContainerSerializer, MPTransition;

@interface MPLayerSerializer : MPLayer {

	MCContainerSerializer* _layerSerializer;
	MPTransition* _introTransition;

}
-(id)description;
-(void)dealloc;
-(void)finalize;
-(id)container;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)removeEffectContainersAtIndices:(id)arg1 ;
-(void)insertEffectContainers:(id)arg1 atIndex:(long long)arg2 ;
-(void)setIntroTransition:(id)arg1 ;
-(void)moveEffectContainersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)setLayerSerializer:(id)arg1 ;
-(id)introTransition;
@end

