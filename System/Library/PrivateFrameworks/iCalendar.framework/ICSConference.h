/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(NSString *)info;
-(NSString *)feature;
-(NSString *)language;
-(NSString *)region;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(void)setFeature:(NSString *)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

