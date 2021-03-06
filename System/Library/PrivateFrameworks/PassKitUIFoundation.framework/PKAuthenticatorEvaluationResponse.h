/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface PKAuthenticatorEvaluationResponse : NSObject {

	BOOL _biometricMatch;
	long long _result;
	NSString* _kextBlacklistVersion;
	NSData* _credential;

}

@property (nonatomic,copy) NSString * kextBlacklistVersion;              //@synthesize kextBlacklistVersion=_kextBlacklistVersion - In the implementation block
@property (nonatomic,readonly) long long result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL biometricMatch;                      //@synthesize biometricMatch=_biometricMatch - In the implementation block
@property (nonatomic,readonly) NSData * credential;                      //@synthesize credential=_credential - In the implementation block
+(id)responseWithResult:(long long)arg1 biometricMatch:(BOOL)arg2 credential:(id)arg3 ;
+(id)responseWithResult:(long long)arg1 ;
-(NSData *)credential;
-(long long)result;
-(void)setKextBlacklistVersion:(NSString *)arg1 ;
-(NSString *)kextBlacklistVersion;
-(BOOL)biometricMatch;
@end

