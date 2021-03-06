/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOXPCUtil : NSObject
+(id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
+(id)defaultXPCServerConnectionQueue;
+(id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
+(id)createServerConnectionWithPort:(const char*)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(/*^block*/id)daemonXPCConnectionCreationBlock;
+(void)setDaemonXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
+(void)setDefaultXPCServerConnectionQueue:(id)arg1 ;
@end

