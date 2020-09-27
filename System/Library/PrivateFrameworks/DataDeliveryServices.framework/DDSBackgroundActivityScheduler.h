/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSBackgroundActivitySchedulerDelegate;
@class NSMutableDictionary;

@interface DDSBackgroundActivityScheduler : NSObject {

	id<DDSBackgroundActivitySchedulerDelegate> _delegate;
	NSMutableDictionary* _schedulerByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * schedulerByIdentifier;                      //@synthesize schedulerByIdentifier=_schedulerByIdentifier - In the implementation block
@property (nonatomic,retain) id<DDSBackgroundActivitySchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<DDSBackgroundActivitySchedulerDelegate>)delegate;
-(void)setDelegate:(id<DDSBackgroundActivitySchedulerDelegate>)arg1 ;
-(void)setSchedulerByIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)schedulerByIdentifier;
-(void)scheduleActivityWithIdentifier:(id)arg1 interval:(double)arg2 tolerance:(double)arg3 ;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
@end

