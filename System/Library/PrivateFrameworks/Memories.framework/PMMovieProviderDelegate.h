/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMMovieProviderDelegate <NSObject>
@optional
-(void)progressDidChange:(double)arg1 description:(id)arg2 stageDescription:(id)arg3;
-(void)resultWasUpdated:(id)arg1;
-(void)didSaveSuccessfully:(BOOL)arg1;

@required
-(CGSize*)naturalSizeForPlayback;
-(void)didRefreshPlayerItem:(id)arg1 downloadError:(id)arg2;

@end

