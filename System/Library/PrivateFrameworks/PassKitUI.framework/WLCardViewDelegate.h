/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(void)passViewTapped:(id)arg1;
-(void)faceFrameDidChangeForPassView:(id)arg1;
-(void)passViewDidResize:(id)arg1 animated:(BOOL)arg2;
-(void)passViewExpandButtonTapped:(id)arg1;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2;
-(void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;

@end

