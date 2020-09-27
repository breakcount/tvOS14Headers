/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject {

	id _ecdhKeySourceInternal;

}

@property (nonatomic,retain) _SFECKeyPair * localKeyPair; 
@property (nonatomic,retain) _SFECPublicKey * remotePublicKey; 
-(_SFECPublicKey *)remotePublicKey;
-(void)setRemotePublicKey:(_SFECPublicKey *)arg1 ;
-(_SFECKeyPair *)localKeyPair;
-(id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2 ;
-(void)setLocalKeyPair:(_SFECKeyPair *)arg1 ;
@end

