/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {

	double _duration;
	unsigned long long _index;
	double _time;
	NSString* _title;
	NSURL* _url;
	long long _markerType;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) double comparableTime; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkAtPlaybackTime; 
@property (assign,nonatomic) double time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double maxTime; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long markerType;                       //@synthesize markerType=_markerType - In the implementation block
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(unsigned long long)index;
-(double)duration;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)time;
-(NSDictionary *)metadata;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setTime:(double)arg1 ;
-(id)urlTitleTrimmingCharacterSet;
-(id)initWithMarkerType:(long long)arg1 ;
-(double)comparableTime;
-(double)maxTime;
-(BOOL)hasArtworkAtPlaybackTime;
-(long long)markerType;
@end
