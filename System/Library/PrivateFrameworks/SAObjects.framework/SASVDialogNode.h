/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASVDialogNode : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSString * nodeTypeHint; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialogNode;
+(id)dialogNodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSArray *)children;
-(id)groupIdentifier;
-(void)setChildren:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)nodeTypeHint;
-(void)setNodeTypeHint:(NSString *)arg1 ;
@end

