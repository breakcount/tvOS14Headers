/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPStreamDelegate <NSObject>
@required
-(void)streamDidSuspend:(id)arg1;
-(void)streamDidResume:(id)arg1;
-(void)stream:(id)arg1 didCloseWithError:(id)arg2;
-(void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3;

@end

