/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTSessionSigningDelegate <ASTSessionDelegate>
@optional
-(void)session:(id)arg1 signPayload:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 signFile:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;

@end

