/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, NSNumber, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,copy) NSNumber * perceivableStartTimeInSeconds; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)_af_mediaItemWithMRContentItemRef:(void*)arg1 ;
+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAMPReleaseInfo *)releaseInfo;
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(SACalendar *)datePurchased;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(NSNumber *)perceivableStartTimeInSeconds;
-(void)setPerceivableStartTimeInSeconds:(NSNumber *)arg1 ;
-(NSString *)sortAlbum;
-(void)setSortAlbum:(NSString *)arg1 ;
@end

