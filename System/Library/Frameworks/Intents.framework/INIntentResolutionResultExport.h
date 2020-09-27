/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSObject;


@protocol INIntentResolutionResultExport <NSObject,JSExport>
@property (nonatomic,retain) NSArray * disambiguationItems; 
@property (nonatomic,retain) NSArray * alternatives; 
@property (nonatomic,retain) NSObject * resolvedValue; 
@property (nonatomic,retain) NSObject * itemToConfirm; 
@property (assign,nonatomic) unsigned long long unsupportedReason; 
@required
+(id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+(id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+(id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+(id)resolutionResultNeedsValue;
+(id)resolutionResultNotRequired;
-(id)init;
-(NSArray *)alternatives;
-(void)setAlternatives:(id)arg1;
-(NSArray *)disambiguationItems;
-(void)setDisambiguationItems:(id)arg1;
-(NSObject *)resolvedValue;
-(void)setResolvedValue:(id)arg1;
-(id)_dataForIntentSlotDescription:(id)arg1;
-(NSObject *)itemToConfirm;
-(void)setItemToConfirm:(id)arg1;
-(unsigned long long)unsupportedReason;
-(void)setUnsupportedReason:(unsigned long long)arg1;

@end
