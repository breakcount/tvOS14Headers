/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Osprey/Osprey-Structs.h>
@interface OspreyMescalSession : NSObject {

	FPSAPContextOpaque_Ref _fairplayContext;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned long long _state;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)_exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)handshakeRequestWithCertificateData:(id)arg1 error:(id*)arg2 ;
-(BOOL)completeWithHandshakeResponse:(id)arg1 error:(id*)arg2 ;
@end
