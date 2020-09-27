/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFKeyAttributes.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class _SFKeySpecifier, NSString;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes> {

	id _symmetricKeyAttributesInternal;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)persistentIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(NSString *)localizedLabel;
-(_SFKeySpecifier *)keySpecifier;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)keyDomain;
-(id)initWithSpecifier:(id)arg1 domain:(id)arg2 ;
-(void)setKeySpecifier:(_SFKeySpecifier *)arg1 ;
@end

