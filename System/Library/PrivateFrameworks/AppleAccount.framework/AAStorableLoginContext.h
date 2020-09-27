/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AAStorableLoginContext : NSObject {

	NSString* _appleID;
	NSString* _altDSID;
	NSString* _DSID;
	NSString* _rawPassword;
	NSString* _continuationKey;
	NSString* _passwordResetKey;
	NSString* _cloudKitToken;

}

@property (nonatomic,readonly) NSString * appleID;                   //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;                   //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * rawPassword;                   //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,copy) NSString * continuationKey;               //@synthesize continuationKey=_continuationKey - In the implementation block
@property (nonatomic,copy) NSString * passwordResetKey;              //@synthesize passwordResetKey=_passwordResetKey - In the implementation block
@property (nonatomic,copy) NSString * cloudKitToken;                 //@synthesize cloudKitToken=_cloudKitToken - In the implementation block
-(NSString *)altDSID;
-(NSString *)appleID;
-(NSString *)DSID;
-(void)setDSID:(NSString *)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(NSString *)rawPassword;
-(NSString *)cloudKitToken;
-(void)setCloudKitToken:(NSString *)arg1 ;
-(void)setContinuationKey:(NSString *)arg1 ;
-(void)setPasswordResetKey:(NSString *)arg1 ;
-(NSString *)continuationKey;
-(NSString *)passwordResetKey;
@end

