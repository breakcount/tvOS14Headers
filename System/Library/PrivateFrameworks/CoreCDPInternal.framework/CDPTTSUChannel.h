/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPSecureChannelProxy.h>
#import <libobjc.A.dylib/CDPSecureChannelApprovingProxy.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy> {

	CUMessageSession* _sharingSession;
	BOOL _approverBackupRecordsExist;
	unsigned long long _approveriCloudKeychainState;
	BOOL _sentInitialResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)sendPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)approverBackupRecordsExist;
-(unsigned long long)approveriCloudKeychainState;
-(void)listenForPayloadsWithHandler:(/*^block*/id)arg1 ;
-(void)setApproverBackupRecordsExist:(BOOL)arg1 ;
-(void)setApproveriCloudKeychainState:(unsigned long long)arg1 ;
@end
