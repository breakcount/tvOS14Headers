/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface TKTokenAuthOperation : NSObject <NSSecureCoding> {

	NSError* _authenticationError;

}

@property (copy) NSError * authenticationError;              //@synthesize authenticationError=_authenticationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)finishWithError:(id*)arg1 ;
-(void)setAuthenticationError:(NSError *)arg1 ;
-(NSError *)authenticationError;
-(void)importOperation:(id)arg1 ;
-(Class)baseClassForUI;
@end

