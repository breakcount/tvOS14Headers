/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet, NSError;

@interface TRSetupAuthenticationResponse : TRResponseMessage {

	NSSet* _unauthenticatedAccountServices;
	NSError* _error;

}

@property (nonatomic,retain) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
@end

