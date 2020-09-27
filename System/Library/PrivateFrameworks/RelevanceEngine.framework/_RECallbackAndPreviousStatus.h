/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _RECallbackAndPreviousStatus : NSObject {

	int _status;
	/*^block*/id _invalidationCallback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) id invalidationCallback;                           //@synthesize invalidationCallback=_invalidationCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(int)status;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)invalidationCallback;
-(void)setInvalidationCallback:(id)arg1 ;
@end

