/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AWAttentionAwarenessClientConfig : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	NSMutableDictionary* _notifyQueues;
	NSMutableDictionary* _notifyBlocks;
	unsigned long long _supportedEvents;
	BOOL _supportedEventsValid;
	unsigned long long _nextTagIndex;
	NSMutableDictionary* _tagMap;
	NSMutableDictionary* _tagRefCount;

}
+(id)sharedClientConfig;
-(id)init;
-(void)dealloc;
-(void)updateState:(BOOL)arg1 ;
-(unsigned long long)supportedEvents;
-(AWNotification_sRef)notifySupportedEventsChangedWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelNotification:(AWNotification_sRef)arg1 ;
-(unsigned long long)addTag:(id)arg1 ;
-(id)tagForIndex:(unsigned long long)arg1 ;
-(void)incrementTagIndexRefCount:(unsigned long long)arg1 ;
-(void)decrementTagIndexRefCount:(unsigned long long)arg1 ;
@end

