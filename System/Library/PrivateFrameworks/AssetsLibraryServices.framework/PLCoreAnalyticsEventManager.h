/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLCoreAnalyticsEventManager : NSObject {

	NSMutableDictionary* _eventMap;
	os_unfair_lock_s _lock;

}
-(id)description;
-(id)init;
-(id)_eventForEventName:(id)arg1 ;
-(id)valueForKey:(id)arg1 onEventWithName:(id)arg2 ;
-(void)setPayloadValue:(id)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 ;
-(void)mergePayload:(id)arg1 onEventWithName:(id)arg2 ;
-(void)removePayloadValueForKey:(id)arg1 onEventWithName:(id)arg2 ;
-(void)removeEventWithName:(id)arg1 ;
-(id)rawEventForEventName:(id)arg1 ;
-(double)startRecordingTimedEventToken;
-(void)stopRecordingTimedEventWithToken:(double)arg1 forKey:(id)arg2 onEventWithName:(id)arg3 ;
-(void)publishEventWithName:(id)arg1 ;
-(void)publishAllEvents;
@end

