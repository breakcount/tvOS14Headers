/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isTestContainer;
	BOOL _isAppleInternal;
	NSString* _containerIdentifier;
	long long _environment;
	long long _specialContainerType;

}

@property (assign,nonatomic) long long specialContainerType;                     //@synthesize specialContainerType=_specialContainerType - In the implementation block
@property (assign,nonatomic) BOOL isTestContainer;                               //@synthesize isTestContainer=_isTestContainer - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternal;                               //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                            //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(NSString *)containerIdentifier;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)sqliteRepresentation;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
-(long long)specialContainerType;
-(BOOL)isTestContainer;
-(void)_deriveContainerAttributes;
-(void)setSpecialContainerType:(long long)arg1 ;
-(void)setIsTestContainer:(BOOL)arg1 ;
-(void)setIsAppleInternal:(BOOL)arg1 ;
-(id)representativeDataclass;
-(BOOL)isAppleInternal;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

