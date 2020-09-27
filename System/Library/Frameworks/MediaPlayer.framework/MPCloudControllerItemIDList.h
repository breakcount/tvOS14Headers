/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject {

	ICCloudItemIDList* _cloudItemIDList;

}

@property (nonatomic,retain) ICCloudItemIDList * cloudItemIDList;              //@synthesize cloudItemIDList=_cloudItemIDList - In the implementation block
+(id)cloudItemIDListForPlaylist:(id)arg1 ;
-(id)init;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)ICCloudItemIDList;
-(ICCloudItemIDList *)cloudItemIDList;
-(void)setCloudItemIDList:(ICCloudItemIDList *)arg1 ;
@end

