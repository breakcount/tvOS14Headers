/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OspreyAnalytics : NSObject
+(id)reporter;
-(void)reportEvent:(id)arg1 payload:(id)arg2 ;
-(void)reportAbsintheMetrics:(id)arg1 ;
-(void)_addURL:(id)arg1 toContext:(id)arg2 ;
-(void)reportConnectionMetrics:(id)arg1 ;
-(void)reportHttpStatus:(long long)arg1 grpcStatus:(long long)arg2 forURL:(id)arg3 ;
-(void)reportError:(id)arg1 forURL:(id)arg2 ;
@end

