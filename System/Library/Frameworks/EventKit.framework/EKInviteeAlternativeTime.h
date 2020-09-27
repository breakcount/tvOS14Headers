/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface EKInviteeAlternativeTime : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3 ;
-(NSArray *)conflictedParticipants;
-(void)setConflictedParticipants:(NSArray *)arg1 ;
@end
