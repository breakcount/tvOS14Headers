/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrialServer/TrialServer-Structs.h>
@interface TRISignatureKey : NSObject {

	SecKeyRef _key;

}
+(id)keyFromData:(id)arg1 ;
+(SecKeyRef)_keyFromCertificateChain:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithKey:(SecKeyRef)arg1 ;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 ;
-(BOOL)_validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(const CFStringRef)arg3 ;
-(BOOL)_validateSignature:(id)arg1 data:(id)arg2 algorithm:(const CFStringRef)arg3 ;
@end

