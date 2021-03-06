/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, NSNumber;

@interface SAUIAssistantUtteranceView : SAAceView

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (nonatomic,copy) NSNumber * postDialogDelayInMilliseconds; 
@property (nonatomic,copy) NSString * text; 
+(id)assistantUtteranceView;
+(id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogIdentifier;
-(id)af_text;
-(id)af_speakableText;
-(BOOL)af_isUtterance;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSNumber *)postDialogDelayInMilliseconds;
-(void)setPostDialogDelayInMilliseconds:(NSNumber *)arg1 ;
@end

