/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDFairPlaySAPSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didCloseWithError:(id)arg2;

@required
-(void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(/*^block*/id)arg2;
-(void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end
