/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ACDEventLedger : NSObject {

	char* _crashInfoString;
	NSMutableArray* _eventLedger;

}

@property (retain) NSMutableArray * eventLedger;              //@synthesize eventLedger=_eventLedger - In the implementation block
+(id)sharedLedger;
-(id)init;
-(void)simulateCrashWithMessage:(id)arg1 ;
-(void)recordEvent:(id)arg1 ;
-(NSMutableArray *)eventLedger;
-(id)historyDescription;
-(void)setEventLedger:(NSMutableArray *)arg1 ;
@end

