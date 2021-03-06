/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/DevicePINController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class PKPasscodeUpgradeFlowController, NSString;

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate> {

	PKPasscodeUpgradeFlowController* _flowController;
	BOOL _viewHasAppeared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)requiresKeyboard;
-(id)stringsBundle;
-(id)pinInstructionsPrompt;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 ;
@end

