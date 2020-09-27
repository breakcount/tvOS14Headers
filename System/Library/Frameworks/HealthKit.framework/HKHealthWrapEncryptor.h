/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSOutputStream, NSMutableData, NSUUID, HKHealthWrapCodableMessageHeader;

@interface HKHealthWrapEncryptor : NSObject {

	NSOutputStream* _outputStream;
	SecCertificateRef _certificate;
	unsigned _algorithm;
	unsigned _options;
	unsigned _keySize;
	CCCryptorRef _cryptor;
	unsigned _hmacAlgorithm;
	SCD_Struct_HK29 _hmacContext;
	CC_SHA256state_st _sha256Context;
	NSMutableData* _buffer;
	NSUUID* _studyUUID;
	NSUUID* _uuid;
	HKHealthWrapCodableMessageHeader* _header;
	BOOL _compressionEnabled;
	unsigned long long _encryptedBytesCount;

}
-(void)dealloc;
-(id)initWithOutputStream:(id)arg1 certificate:(SecCertificateRef)arg2 algorithm:(unsigned)arg3 options:(unsigned)arg4 keySize:(unsigned)arg5 uuid:(id)arg6 studyUUID:(id)arg7 compressionEnabled:(BOOL)arg8 ;
-(BOOL)startWithError:(id*)arg1 ;
-(BOOL)appendData:(id)arg1 error:(id*)arg2 ;
-(BOOL)finalizeWithError:(id*)arg1 ;
-(SecKeyRef)_copyAndVerifyPublicKeyFromCertificate:(SecCertificateRef)arg1 error:(id*)arg2 ;
-(id)_encryptData:(id)arg1 withCertificate:(SecCertificateRef)arg2 error:(id*)arg3 ;
-(BOOL)_updateHeaderWithKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 error:(id*)arg4 ;
-(BOOL)_startCryptorWithError:(id*)arg1 ;
-(BOOL)_writeStream:(const char*)arg1 length:(unsigned long long)arg2 hash:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_appendEncryptedBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_updateCryptorWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_finalizeCryptorWithError:(id*)arg1 ;
@end

