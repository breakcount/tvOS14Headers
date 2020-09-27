/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {

	BOOL _shouldPlayMusic;
	BOOL _summarizeMomentSections;
	int _transition;
	MPMediaItemCollection* _musicCollection;

}
+(id)sharedInstance;
+(int)randomTransition;
-(id)init;
-(void)dealloc;
-(int)transition;
-(void)setTransition:(int)arg1 ;
-(void)reloadPhotoDefaultValues;
-(void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1 ;
-(BOOL)summarizeMomentSections;
-(int)transitionForAnimationMovingForward:(BOOL)arg1 ;
-(BOOL)shouldPlayMusic;
-(void)setShouldPlayMusic:(BOOL)arg1 ;
-(void)setMusicCollection:(id)arg1 ;
-(id)musicCollection;
@end

