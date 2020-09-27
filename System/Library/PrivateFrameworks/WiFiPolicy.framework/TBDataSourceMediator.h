/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TBCoreDataSource, TBDataSource, NSOperationQueue;

@interface TBDataSourceMediator : NSObject {

	TBCoreDataSource* _local;
	TBDataSource* _remote;
	NSOperationQueue* _fetchQueue;

}

@property (nonatomic,retain) TBCoreDataSource * local;                   //@synthesize local=_local - In the implementation block
@property (nonatomic,retain) TBDataSource * remote;                      //@synthesize remote=_remote - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
-(void)setLocal:(TBCoreDataSource *)arg1 ;
-(TBCoreDataSource *)local;
-(TBDataSource *)remote;
-(void)setRemote:(TBDataSource *)arg1 ;
-(void)executeFetchRequest:(id)arg1 ;
-(NSOperationQueue *)fetchQueue;
-(void)setFetchQueue:(NSOperationQueue *)arg1 ;
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLocalStoreDescriptor:(id)arg1 remoteStore:(id)arg2 ;
-(id)initWithLocalStoreDescriptor:(id)arg1 ;
-(void)removeWithFetchRequest:(id)arg1 ;
@end

