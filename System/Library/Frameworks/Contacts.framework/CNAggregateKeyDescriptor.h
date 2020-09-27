/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSArray, NSString, CNContactKeyVector;

@interface CNAggregateKeyDescriptor : NSObject <CNKeyDescriptor_Private> {

	NSArray* _keyDescriptors;
	NSString* _privateDescription;
	CNContactKeyVector* _unauthorizedKeys;

}

@property (nonatomic,copy) NSArray * keyDescriptors;                             //@synthesize keyDescriptors=_keyDescriptors - In the implementation block
@property (nonatomic,copy) NSString * privateDescription;                        //@synthesize privateDescription=_privateDescription - In the implementation block
@property (nonatomic,retain) CNContactKeyVector * unauthorizedKeys;              //@synthesize unauthorizedKeys=_unauthorizedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)_cn_recursiveDescriptionWithPrefix:(id)arg1 ;
-(id)_cn_unauthorizedKeys;
-(void)_cn_setUnauthorizedKeys:(id)arg1 ;
-(id)initWithKeyDescriptors:(id)arg1 description:(id)arg2 ;
-(void)setKeyDescriptors:(NSArray *)arg1 ;
-(void)setPrivateDescription:(NSString *)arg1 ;
-(NSArray *)keyDescriptors;
-(NSString *)privateDescription;
-(CNContactKeyVector *)unauthorizedKeys;
-(void)setUnauthorizedKeys:(CNContactKeyVector *)arg1 ;
-(id)_recursiveDescription;
@end

