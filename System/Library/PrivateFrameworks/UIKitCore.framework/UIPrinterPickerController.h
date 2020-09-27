/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPrinterPickerControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIPrinter;

@interface UIPrinterPickerController : NSObject {

	/*^block*/id _completionHandler;
	id _state;
	UIPrinter* _selectedPrinter;
	id<UIPrinterPickerControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIPrinter * selectedPrinter;                                        //@synthesize selectedPrinter=_selectedPrinter - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrinterPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1 ;
-(id<UIPrinterPickerControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPrinterPickerControllerDelegate>)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)_printerPickerDidDismiss;
-(BOOL)_delegateFiltersPrinters;
-(BOOL)_shouldShowPrinter:(id)arg1 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)presentAnimated:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithInitiallySelectedPrinter:(id)arg1 ;
-(void)setSelectedPrinter:(UIPrinter *)arg1 ;
-(BOOL)_setupPickerPanel:(/*^block*/id)arg1 ;
-(UIPrinter *)selectedPrinter;
@end

