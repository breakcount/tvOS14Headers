/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface TVPlaylist : NSObject {

	NSArray* _mediaItems;
	long long _endAction;
	long long _repeatMode;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) long long endAction;                      //@synthesize endAction=_endAction - In the implementation block
@property (assign,nonatomic) long long repeatMode;                     //@synthesize repeatMode=_repeatMode - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
-(void)addObject:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)mediaItems;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
@end
