/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSNumber, NSString;

@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent {

	BOOL _userHasAccessories;
	NSNumber* _foregroundDuration;
	NSString* _processName;

}

@property (assign,nonatomic) NSNumber * foregroundDuration;              //@synthesize foregroundDuration=_foregroundDuration - In the implementation block
@property (assign,nonatomic) BOOL userHasAccessories;                    //@synthesize userHasAccessories=_userHasAccessories - In the implementation block
@property (nonatomic,retain) NSString * processName;                     //@synthesize processName=_processName - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)payload;
-(NSNumber *)foregroundDuration;
-(BOOL)userHasAccessories;
-(void)setForegroundDuration:(NSNumber *)arg1 ;
-(void)setUserHasAccessories:(BOOL)arg1 ;
@end
