/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>
@optional
-(void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_URLSession:(id)arg1 companionAvailabilityChanged:(BOOL)arg2;
-(void)_URLSession:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

