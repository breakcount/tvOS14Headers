/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator {

	unsigned _maxbuf : 16;
	unsigned _securityLevel : 2;
	NSData* _expectedResponse;
	void* _cryptInfo;

}
-(void)dealloc;
-(int)securityLevel;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(void)setSecurityLevel:(int)arg1 ;
-(void)setMaxBuffer:(unsigned)arg1 ;
-(void)setCryptInfo:(void*)arg1 ;
-(void)setExpectedResponse:(id)arg1 ;
@end

