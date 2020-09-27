/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIColor, NSString;

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) long long actionDelayInSeconds; 
@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * countdownTextColor; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)countdownTimerItem;
+(id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)encodedClassName;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(long long)actionDelayInSeconds;
-(void)setActionDelayInSeconds:(long long)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)countdownTextColor;
-(void)setCountdownTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerBackgroundColor;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
@end

