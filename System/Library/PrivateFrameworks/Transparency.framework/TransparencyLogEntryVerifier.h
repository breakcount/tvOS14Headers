/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TransparencyTrustedKeyStore;

@interface TransparencyLogEntryVerifier : NSObject {

	TransparencyTrustedKeyStore* _trustedKeyStore;

}

@property (retain) TransparencyTrustedKeyStore * trustedKeyStore;              //@synthesize trustedKeyStore=_trustedKeyStore - In the implementation block
-(TransparencyTrustedKeyStore *)trustedKeyStore;
-(id)initWithTrustedKeyStore:(id)arg1 ;
-(void)setTrustedKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(unsigned long long)verifyLogEntryWithLogLeaf:(id)arg1 position:(unsigned long long)arg2 hashesToRoot:(id)arg3 signedLogHead:(id)arg4 error:(id*)arg5 ;
-(BOOL)verifyInclusionOfLogLeaf:(id)arg1 position:(unsigned long long)arg2 treeSize:(unsigned long long)arg3 treeHead:(id)arg4 hashPath:(id)arg5 error:(id*)arg6 ;
@end

