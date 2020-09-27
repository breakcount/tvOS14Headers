/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CLSNowPlayingStreamStatistics : NSObject {

	NSArray* _sortedAlbums;
	NSArray* _sortedArtists;
	NSArray* _sortedTitles;
	NSArray* _sortedGenres;
	NSArray* _sortedSources;
	NSArray* _sortedSessions;
	double _maxDurationInSeconds;
	double _minDurationInSeconds;

}

@property (nonatomic,readonly) NSArray * sortedAlbums;                   //@synthesize sortedAlbums=_sortedAlbums - In the implementation block
@property (nonatomic,readonly) NSArray * sortedArtists;                  //@synthesize sortedArtists=_sortedArtists - In the implementation block
@property (nonatomic,readonly) NSArray * sortedTitles;                   //@synthesize sortedTitles=_sortedTitles - In the implementation block
@property (nonatomic,readonly) NSArray * sortedGenres;                   //@synthesize sortedGenres=_sortedGenres - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSources;                  //@synthesize sortedSources=_sortedSources - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSessions;                 //@synthesize sortedSessions=_sortedSessions - In the implementation block
@property (nonatomic,readonly) double maxDurationInSeconds;              //@synthesize maxDurationInSeconds=_maxDurationInSeconds - In the implementation block
@property (nonatomic,readonly) double minDurationInSeconds;              //@synthesize minDurationInSeconds=_minDurationInSeconds - In the implementation block
-(void)computeStatistics;
-(id)initWithNowPlayingStreamSessions:(id)arg1 ;
-(void)logStatistics;
-(NSArray *)sortedAlbums;
-(NSArray *)sortedArtists;
-(NSArray *)sortedTitles;
-(NSArray *)sortedGenres;
-(NSArray *)sortedSources;
-(NSArray *)sortedSessions;
-(double)maxDurationInSeconds;
-(double)minDurationInSeconds;
@end

