/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject {

	_IDSRealTimeEncryptionProxy* _internal;

}
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)sendPrekeyToGroup:(id)arg1 ;
-(void)requestPublicKeys;
-(void)sendMasterKeyMaterialToGroup:(id)arg1 ;
-(void)requestMasterKeyMaterialForGroup:(id)arg1 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg1 ;
-(void)resetKeysForGroup:(id)arg1 ;
@end

