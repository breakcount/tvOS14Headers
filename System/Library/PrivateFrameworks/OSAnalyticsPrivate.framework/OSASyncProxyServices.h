/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSASyncProxyServices <NSObject>
@required
-(void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)request:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)requestProxyMetadata:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
-(void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)listDevices:(/*^block*/id)arg1;
-(void)request:(id)arg1 logList:(/*^block*/id)arg2;
-(void)request:(id)arg1 transferLog:(id)arg2 onComplete:(/*^block*/id)arg3;

@end

