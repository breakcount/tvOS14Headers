/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, ICSDuration, ICSUserAddress, NSString;

@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray * attendee; 
@property (retain) ICSDate * created; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (retain) ICSDuration * duration; 
@property (nonatomic,retain) NSArray * freebusy; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSString * summary; 
@property (retain) NSString * uid; 
@property (nonatomic,retain) NSString * x_calendarserver_mask_uid; 
@property (nonatomic,retain) NSString * x_calendarserver_extended_freebusy; 
+(id)name;
-(NSArray *)freebusy;
-(void)setFreebusy:(NSArray *)arg1 ;
-(NSString *)x_calendarserver_mask_uid;
-(void)setX_calendarserver_mask_uid:(NSString *)arg1 ;
-(NSString *)x_calendarserver_extended_freebusy;
-(void)setX_calendarserver_extended_freebusy:(NSString *)arg1 ;
@end

