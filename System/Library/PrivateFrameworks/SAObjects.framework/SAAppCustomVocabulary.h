/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAppCustomVocabulary : SADomainObject

@property (nonatomic,copy) NSString * intentSlotValue; 
@property (nonatomic,retain) id<SAIntentGroupCustomVocabularyEntity> vocabularyEntity; 
@property (nonatomic,copy) NSString * vocabularyIdentifier; 
+(id)appCustomVocabulary;
+(id)appCustomVocabularyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)vocabularyIdentifier;
-(void)setVocabularyIdentifier:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)intentSlotValue;
-(void)setIntentSlotValue:(NSString *)arg1 ;
-(id<SAIntentGroupCustomVocabularyEntity>)vocabularyEntity;
-(void)setVocabularyEntity:(id<SAIntentGroupCustomVocabularyEntity>)arg1 ;
@end

