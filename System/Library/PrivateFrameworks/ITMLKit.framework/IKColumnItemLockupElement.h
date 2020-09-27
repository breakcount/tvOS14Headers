/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, IKTextElement, IKOrdinalElement, IKImageElement, NSArray, IKTextBadgeAttachment, IKButtonElement, IKVideoElement;

@interface IKColumnItemLockupElement : IKViewElement

@property (nonatomic,copy,readonly) NSString * columnItemType; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * secondarySubtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) IKImageElement * image; 
@property (nonatomic,readonly) NSArray * images; 
@property (nonatomic,readonly) IKTextBadgeAttachment * titleBadge; 
@property (nonatomic,readonly) IKTextBadgeAttachment * subtitleBadge; 
@property (nonatomic,retain,readonly) IKButtonElement * button; 
@property (nonatomic,retain,readonly) IKVideoElement * video; 
@property (nonatomic,retain,readonly) NSArray * textElements; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,readonly) BOOL isWatchlisted; 
@property (nonatomic,readonly) BOOL onlyVisibleOnColumnHighlight; 
-(IKTextElement *)title;
-(IKTextElement *)subtitle;
-(IKButtonElement *)button;
-(IKImageElement *)image;
-(NSArray *)images;
-(IKOrdinalElement *)ordinal;
-(BOOL)hasSeparator;
-(IKTextElement *)descriptionText;
-(NSString *)columnItemType;
-(void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4 ;
-(IKTextElement *)secondarySubtitle;
-(IKTextBadgeAttachment *)titleBadge;
-(IKTextBadgeAttachment *)subtitleBadge;
-(IKVideoElement *)video;
-(NSArray *)textElements;
-(BOOL)isWatchlisted;
-(BOOL)onlyVisibleOnColumnHighlight;
@end
