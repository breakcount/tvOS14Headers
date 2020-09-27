/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKContainer;

@interface IDSCloudKitKeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKContainer* _container;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSCKContainer * container;                      //@synthesize container=_container - In the implementation block
-(IDSCKContainer *)container;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setContainer:(IDSCKContainer *)arg1 ;
-(id)initWithContainer:(id)arg1 queue:(id)arg2 ;
-(void)fetchDataForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

