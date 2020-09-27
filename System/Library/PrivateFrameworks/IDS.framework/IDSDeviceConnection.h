/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSDeviceConnection, NSInputStream, NSOutputStream, NSDictionary;

@interface IDSDeviceConnection : NSObject {

	_IDSDeviceConnection* _internal;

}

@property (nonatomic,readonly) _IDSDeviceConnection * _internal; 
@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned long long mtu; 
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (nonatomic,readonly) NSDictionary * metrics; 
-(id)description;
-(void)dealloc;
-(void)close;
-(_IDSDeviceConnection *)_internal;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(NSDictionary *)metrics;
-(unsigned long long)mtu;
-(int)socket;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
@end

