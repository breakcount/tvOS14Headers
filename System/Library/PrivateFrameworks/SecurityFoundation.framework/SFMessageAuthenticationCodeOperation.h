/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFSigningOperation.h>

@class _SFKeySpecifier, NSString;

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation> {

	id _messageAuthenticationCodeOperationInternal;

}

@property (nonatomic,copy,readonly) _SFKeySpecifier * signingKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultMacOperation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
@end
