/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL;

@interface ICSAvailability : ICSComponent

@property (retain) ICSDate * created; 
@property (retain) NSString * uid; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDuration * duration; 
@property (retain) ICSDate * dtstart; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDate * last_modified; 
@property (assign) unsigned long long sequence; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSString * summary; 
@property (retain) NSURL * url; 
+(id)name;
@end

