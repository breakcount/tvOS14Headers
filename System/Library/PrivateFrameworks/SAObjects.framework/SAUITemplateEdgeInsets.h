/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>

@property (assign,nonatomic) float bottom; 
@property (assign,nonatomic) float left; 
@property (assign,nonatomic) float right; 
@property (assign,nonatomic) float top; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)edgeInsets;
+(id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(float)left;
-(float)right;
-(void)setLeft:(float)arg1 ;
-(float)top;
-(float)bottom;
-(void)setBottom:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setTop:(float)arg1 ;
-(id)encodedClassName;
@end

