/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface MSVLyricsSongInfo : NSObject {

	long long _type;
	double _songDuration;
	NSArray* _songwriters;
	NSString* _lyricGenId;
	NSString* _language;
	NSArray* _lyricsLines;
	NSArray* _lyricsSections;
	NSDictionary* _translationsMap;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double songDuration;                            //@synthesize songDuration=_songDuration - In the implementation block
@property (nonatomic,retain) NSArray * songwriters;                          //@synthesize songwriters=_songwriters - In the implementation block
@property (nonatomic,copy) NSString * lyricGenId;                            //@synthesize lyricGenId=_lyricGenId - In the implementation block
@property (nonatomic,copy) NSString * language;                              //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSArray * lyricsSections;                       //@synthesize lyricsSections=_lyricsSections - In the implementation block
@property (nonatomic,retain) NSArray * lyricsLines;                          //@synthesize lyricsLines=_lyricsLines - In the implementation block
@property (nonatomic,retain) NSDictionary * translationsMap;                 //@synthesize translationsMap=_translationsMap - In the implementation block
@property (nonatomic,readonly) NSArray * availableTranslations; 
+(id)_elementsInArray:(id)arg1 atTimeOffset:(double)arg2 errorMargin:(double)arg3 ;
+(id)_descriptionForLyricsInfoType:(long long)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSDictionary *)translationsMap;
-(void)setTranslationsMap:(NSDictionary *)arg1 ;
-(void)setSongDuration:(double)arg1 ;
-(void)setLyricGenId:(NSString *)arg1 ;
-(NSArray *)songwriters;
-(NSArray *)lyricsSections;
-(void)setSongwriters:(NSArray *)arg1 ;
-(void)setLyricsLinesSortedByStartTime:(id)arg1 ;
-(void)setLyricsLines:(NSArray *)arg1 ;
-(void)setLyricsSections:(NSArray *)arg1 ;
-(NSArray *)lyricsLines;
-(double)songDuration;
-(NSArray *)availableTranslations;
-(id)_sortLyricsLinesByStartTime:(id)arg1 ;
-(id)lyricsLinesAtTimeOffset:(double)arg1 errorMargin:(double)arg2 ;
-(id)lyricsWordsAtTimeOffset:(double)arg1 errorMargin:(double)arg2 ;
-(id)lyricsLineStartingBeforeTimeOffset:(double)arg1 ;
-(id)translatedTextForLyricsLine:(id)arg1 language:(id)arg2 ;
-(NSString *)lyricGenId;
@end

