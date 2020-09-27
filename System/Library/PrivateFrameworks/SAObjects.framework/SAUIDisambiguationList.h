/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>
#import <libobjc.A.dylib/AFDisambiguationAssistancePrivate.h>

@class NSData, AFDisambiguationInfo, NSString, SAUIDomainObjectPicker, NSArray;

@interface SAUIDisambiguationList : SAAceView <AFDisambiguationAssistancePrivate>

@property (nonatomic,readonly) NSData * af_disambiguationIdentifier; 
@property (setter=af_setDisambiguationInfo:,nonatomic,retain) AFDisambiguationInfo * af_disambiguationInfo; 
@property (assign,nonatomic) BOOL autoDisambiguationDisabled; 
@property (nonatomic,copy) NSString * disambiguationKey; 
@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,copy) NSArray * fallbackCommands; 
@property (nonatomic,copy) NSString * groupTitle; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * speakableDelimiter; 
@property (nonatomic,copy) NSString * speakableFinalDelimiter; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * speakableSuffix; 
@property (nonatomic,copy) NSString * title; 
+(id)disambiguationList;
+(id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)af_disambiguationIdentifier;
-(id)af_indexIdentifierForItem:(id)arg1 ;
-(id)af_itemForIndexIdentifier:(id)arg1 ;
-(AFDisambiguationInfo *)af_disambiguationInfo;
-(void)af_setDisambiguationInfo:(id)arg1 ;
-(id)af_assistedSelectionItem;
-(void)af_saveItemSelection:(id)arg1 forType:(long long)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
-(BOOL)autoDisambiguationDisabled;
-(void)setAutoDisambiguationDisabled:(BOOL)arg1 ;
-(NSString *)disambiguationKey;
-(void)setDisambiguationKey:(NSString *)arg1 ;
-(SAUIDomainObjectPicker *)domainObjectPicker;
-(void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg1 ;
-(NSArray *)fallbackCommands;
-(void)setFallbackCommands:(NSArray *)arg1 ;
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)speakableDelimiter;
-(void)setSpeakableDelimiter:(NSString *)arg1 ;
-(NSString *)speakableFinalDelimiter;
-(void)setSpeakableFinalDelimiter:(NSString *)arg1 ;
-(NSString *)speakableSuffix;
-(void)setSpeakableSuffix:(NSString *)arg1 ;
@end

