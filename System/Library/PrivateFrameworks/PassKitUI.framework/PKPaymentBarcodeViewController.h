/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class PKRightAngleRotatingView, UILabel, UIButton, UILayoutGuide, NSArray, UIImageView, PKPaymentPass, NSData;

@interface PKPaymentBarcodeViewController : UIViewController {

	PKRightAngleRotatingView* _barcodeView;
	UILabel* _disclaimerText;
	UIButton* _closeButton;
	UILayoutGuide* _barcodeGuide;
	NSArray* _constraints;
	UIImageView* _compactBankLogoView;
	PKPaymentPass* _pass;
	NSData* _barcodeData;

}

@property (nonatomic,retain) NSData * barcodeData;              //@synthesize barcodeData=_barcodeData - In the implementation block
-(void)invalidate;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(BOOL)_canShowWhileLocked;
-(id)initWithPass:(id)arg1 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)setBarcodeData:(NSData *)arg1 ;
-(NSData *)barcodeData;
@end

