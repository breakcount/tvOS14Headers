/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TransparencyTrustedKeyStore;

@interface TransparencyConsistencyProofVerifier : NSObject {

	TransparencyTrustedKeyStore* _trustedKeyStore;

}

@property (retain) TransparencyTrustedKeyStore * trustedKeyStore;              //@synthesize trustedKeyStore=_trustedKeyStore - In the implementation block
-(TransparencyTrustedKeyStore *)trustedKeyStore;
-(unsigned long long)verifyConsistencyProof:(id)arg1 startLogHead:(id)arg2 endLogHead:(id)arg3 error:(id*)arg4 ;
-(BOOL)verifyConsistencyProof:(id)arg1 startHash:(id)arg2 startSize:(unsigned long long)arg3 endHash:(id)arg4 endSize:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)initWithTrustedKeyStore:(id)arg1 ;
-(void)setTrustedKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
@end

