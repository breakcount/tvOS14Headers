/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _HMDAccountIdentifier, NSUUID;

@interface HMDAccountIdentifier : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	_HMDAccountIdentifier* _internal;

}

@property (copy,readonly) _HMDAccountIdentifier * internal;                       //@synthesize internal=_internal - In the implementation block
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (copy,readonly) NSString * senderCorrelationIdentifier; 
@property (copy,readonly) NSUUID * identifier; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)accountIdentifierForAccountHandle:(id)arg1 ;
+(id)accountIdentifierForAppleAccountContext:(id)arg1 ;
+(id)accountIdentifierForMessageContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)shortDescription;
-(BOOL)isAuthenticated;
-(_HMDAccountIdentifier *)internal;
-(NSString *)senderCorrelationIdentifier;
-(NSArray *)attributeDescriptions;
-(id)initWithInternal:(id)arg1 ;
@end

