/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol MPMutableRadioStationEvent <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,copy) NSDate * endTime; 
@required
-(NSDate *)startTime;
-(void)setStartTime:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setEndTime:(id)arg1;
-(NSDate *)endTime;
-(NSString *)descriptionText;
-(void)setDescriptionText:(id)arg1;

@end

