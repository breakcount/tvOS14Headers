/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface PKContactPicker : NSObject {

	UIViewController* _pickerViewController;
	/*^block*/id _selectionHandler;
	/*^block*/id _cancelationHandler;

}

@property (nonatomic,retain) UIViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                    //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
-(id)cancelationHandler;
-(void)setCancelationHandler:(id)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(id)initWithSelectionHandler:(/*^block*/id)arg1 cancelationHandler:(/*^block*/id)arg2 ;
-(UIViewController *)pickerViewController;
-(void)setPickerViewController:(UIViewController *)arg1 ;
@end
