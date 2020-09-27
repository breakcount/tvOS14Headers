/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISettingTemplateViewController.h>

@class SiriUISelectionTemplateView;

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateViewControllerDelegate> delegate; 
@property (nonatomic,retain) id<SiriUISelectionTemplateModel> templateModel; 
@property (nonatomic,retain) SiriUISelectionTemplateView * view; 
@property (assign,nonatomic) BOOL selected; 
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)loadView;
-(Class)templateViewClass;
-(void)_didSelectChoiceFromSender:(id)arg1 ;
@end

