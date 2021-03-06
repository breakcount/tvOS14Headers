/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData, NSError;

@interface ENTestResultPersistentSession : NSObject {

	NSString* _certificate;
	NSDictionary* _fetchedMetadata;
	NSData* _HMACKey;
	NSString* _revisionToken;
	NSError* _verificationError;
	NSString* _verificationToken;

}

@property (nonatomic,copy) NSString * certificate;                      //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,copy) NSDictionary * fetchedMetadata;              //@synthesize fetchedMetadata=_fetchedMetadata - In the implementation block
@property (nonatomic,copy) NSData * HMACKey;                            //@synthesize HMACKey=_HMACKey - In the implementation block
@property (nonatomic,copy) NSString * revisionToken;                    //@synthesize revisionToken=_revisionToken - In the implementation block
@property (nonatomic,copy) NSError * verificationError;                 //@synthesize verificationError=_verificationError - In the implementation block
@property (nonatomic,copy) NSString * verificationToken;                //@synthesize verificationToken=_verificationToken - In the implementation block
-(NSString *)certificate;
-(void)setCertificate:(NSString *)arg1 ;
-(NSString *)verificationToken;
-(void)setVerificationToken:(NSString *)arg1 ;
-(NSError *)verificationError;
-(void)setFetchedMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)fetchedMetadata;
-(void)setVerificationError:(NSError *)arg1 ;
-(NSData *)HMACKey;
-(void)setHMACKey:(NSData *)arg1 ;
-(NSString *)revisionToken;
-(void)setRevisionToken:(NSString *)arg1 ;
@end

