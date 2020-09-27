/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFType.h>

@class NSBundle, NSString;

@interface WFObjectType : WFType {

	Class _objectClass;
	NSBundle* _bundle;
	NSString* _className;

}

@property (nonatomic,readonly) NSBundle * bundle;                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * className;                //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) Class objectClass;                   //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * string; 
+(BOOL)supportsSecureCoding;
+(id)typeWithClass:(Class)arg1 ;
+(id)typeWithClassName:(id)arg1 frameworkName:(id)arg2 location:(unsigned long long)arg3 ;
+(id)typesWithClasses:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)className;
-(Class)objectClass;
-(BOOL)conformsToType:(id)arg1 ;
-(BOOL)conformsToClass:(Class)arg1 ;
-(BOOL)isEqualToClass:(Class)arg1 ;
-(BOOL)isEqualToType:(id)arg1 ;
-(id)initWithClassName:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithObjectClass:(Class)arg1 ;
@end

