/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy {

	NSArray* _events;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
-(id)allEvents;
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(BOOL)isSequenceTerminated;
@end
