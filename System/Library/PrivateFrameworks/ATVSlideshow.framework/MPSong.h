/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MCSong, MPAudioPlaylist, MPSongInternal, NSURL;

@interface MPSong : NSObject <NSCopying> {

	NSString* _path;
	MCSong* _song;
	MPAudioPlaylist* _parentPlaylist;
	MPSongInternal* _internal;

}

@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSURL * URL; 
+(id)song;
+(id)songWithPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSURL *)URL;
-(double)startTime;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(long long)index;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)stopTime;
-(double)audioVolume;
-(void)setAudioVolume:(double)arg1 ;
-(id)song;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)maxDuration;
-(void)setSong:(id)arg1 ;
-(id)parentPlaylist;
-(void)setParentPlaylist:(id)arg1 ;
-(id)parentDocument;
-(void)copyStruct:(id)arg1 ;
-(void)setInternalDuration;
-(void)setInternalStartTime;
@end

