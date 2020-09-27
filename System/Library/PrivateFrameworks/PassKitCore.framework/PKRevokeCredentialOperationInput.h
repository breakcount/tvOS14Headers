/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSError;

@interface PKRevokeCredentialOperationInput : NSObject {

	NSURL* _passURL;
	NSError* _error;

}

@property (nonatomic,copy) NSURL * passURL;                //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
@end

