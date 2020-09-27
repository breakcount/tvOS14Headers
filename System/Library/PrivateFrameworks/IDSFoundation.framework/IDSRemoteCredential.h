/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSRemoteCredential : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	BOOL _wantsRetries;

}

@property (assign,nonatomic) BOOL wantsRetries;              //@synthesize wantsRetries=_wantsRetries - In the implementation block
-(void)dealloc;
-(void)_disconnected;
-(BOOL)_connect;
-(BOOL)_disconnect;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(BOOL)arg3 allowQuery:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)wantsRetries;
-(void)setWantsRetries:(BOOL)arg1 ;
@end

