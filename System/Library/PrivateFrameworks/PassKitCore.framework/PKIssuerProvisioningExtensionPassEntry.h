/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSString;

@interface PKIssuerProvisioningExtensionPassEntry : NSObject {

	NSString* _identifier;
	NSString* _title;
	CGImageRef _art;
	long long _type;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CGImageRef art;                     //@synthesize art=_art - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(NSString *)title;
-(id)paymentPassEntry;
-(id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(CGImageRef)arg4 ;
-(CGImageRef)art;
@end

