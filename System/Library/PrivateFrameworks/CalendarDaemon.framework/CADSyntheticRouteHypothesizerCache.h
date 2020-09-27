/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CADSyntheticRouteHypothesizerCache : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _eventExternalURLToSyntheticRouteHypothesizerMap;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventExternalURLToSyntheticRouteHypothesizerMap;              //@synthesize eventExternalURLToSyntheticRouteHypothesizerMap=_eventExternalURLToSyntheticRouteHypothesizerMap - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableDictionary *)eventExternalURLToSyntheticRouteHypothesizerMap;
-(id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1 ;
-(void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
-(void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1 ;
@end

