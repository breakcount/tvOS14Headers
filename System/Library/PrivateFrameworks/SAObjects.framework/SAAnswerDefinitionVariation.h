/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSString * variation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionVariation;
+(id)definitionVariationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)examples;
-(void)setExamples:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)variation;
-(void)setVariation:(NSString *)arg1 ;
@end
