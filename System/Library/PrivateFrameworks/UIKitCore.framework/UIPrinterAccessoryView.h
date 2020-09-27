/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIPrinterAccessoryViewDelegate;
@class UIButton, UIView;

@interface UIPrinterAccessoryView : UIView {

	int _printerState;
	UIButton* _infoButton;
	UIView* _statusView;
	id<UIPrinterAccessoryViewDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * infoButton;                                           //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIView * statusView;                                             //@synthesize statusView=_statusView - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrinterAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int printerState;                                                //@synthesize printerState=_printerState - In the implementation block
-(id<UIPrinterAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<UIPrinterAccessoryViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(UIView *)statusView;
-(void)setStatusView:(UIView *)arg1 ;
-(void)infoButtonPressed:(id)arg1 ;
-(void)setPrinterState:(int)arg1 ;
-(int)printerState;
@end

