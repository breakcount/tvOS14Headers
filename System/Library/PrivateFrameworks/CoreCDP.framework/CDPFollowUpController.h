/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {

	CDPDaemonConnection* _daemonConn;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)postFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearFollowUpWithContext:(id)arg1 error:(id*)arg2 ;
@end

