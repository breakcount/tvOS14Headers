/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCTransport;

@interface VCSecureDataChannel : NSObject {

	unsigned _localCallID;
	unsigned _remoteCallID;
	tls_record_sRef tlsRecord;
	id _delegate;
	VCTransport* _transport;
	unsigned long long _maxUDPPayloadSize;

}

@property (assign,nonatomic) id<VCSecureDataChannelDelegate> delegate; 
@property (nonatomic,readonly) long long maxEncryptedDataSize; 
@property (nonatomic,readonly) long long maxUnencryptedDataSize; 
@property (assign,nonatomic) unsigned long long maxUDPPayloadSize;                  //@synthesize maxUDPPayloadSize=_maxUDPPayloadSize - In the implementation block
-(void)dealloc;
-(id<VCSecureDataChannelDelegate>)delegate;
-(void)setDelegate:(id<VCSecureDataChannelDelegate>)arg1 ;
-(void)setMaxUDPPayloadSize:(unsigned long long)arg1 ;
-(int)sendData:(id)arg1 messageType:(unsigned)arg2 encrypted:(BOOL)arg3 ;
-(id)initWithLocalCallID:(unsigned)arg1 remoteCallID:(unsigned)arg2 isCaller:(BOOL)arg3 sharedSecret:(id)arg4 error:(id*)arg5 ;
-(int)setupWithSharedSecret:(id)arg1 isCaller:(BOOL)arg2 error:(id*)arg3 ;
-(int)convertEncryptedData:(id)arg1 toData:(id*)arg2 encrypted:(BOOL)arg3 ;
-(long long)maxEncryptedDataSize;
-(long long)maxUnencryptedDataSize;
-(int)convertData:(id)arg1 toEncryptedData:(id*)arg2 encrypted:(BOOL)arg3 ;
-(unsigned long long)maxUDPPayloadSize;
@end

