/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@interface NWSSnapshotSource : NSObject {

	int _sockFd;

}
+(id)routeSnapshotForIPv4Host:(sockaddr_in*)arg1 viaInterfaceIndex:(int)arg2 ;
+(id)routeSnapshotForIPv6Host:(sockaddr_in6*)arg1 viaInterfaceIndex:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)send:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
-(long long)recv:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
@end

