/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalCalendarDataContainerProvider.h>

@class NSURL, NSString;

@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider> {

	NSURL* _calendarDataContainerURL;

}

@property (nonatomic,retain) NSURL * calendarDataContainerURL;              //@synthesize calendarDataContainerURL=_calendarDataContainerURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)calendarDataContainerURL;
-(id)containerForPersonaIdentifier:(id)arg1 ;
-(void)setCalendarDataContainerURL:(NSURL *)arg1 ;
@end

