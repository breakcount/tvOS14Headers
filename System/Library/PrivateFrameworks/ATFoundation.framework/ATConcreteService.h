/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATService.h>
#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface ATConcreteService : ATService <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _signalSource;
	double _startTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)run;
-(BOOL)stop;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
@end

