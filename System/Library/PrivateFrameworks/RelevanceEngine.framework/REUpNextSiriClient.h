/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface REUpNextSiriClient : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(void)completedRequestWithDomain:(id)arg1 ;
-(void)_performOnRemoteObject:(/*^block*/id)arg1 ;
@end

