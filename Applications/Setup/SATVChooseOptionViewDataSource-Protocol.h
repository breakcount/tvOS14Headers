//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SATVChooseOptionView, UIView;

@protocol SATVChooseOptionViewDataSource <NSObject>
- (NSString *)secondOptionButtonTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)firstOptionButtonTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)subtitleTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)titleTextForView:(SATVChooseOptionView *)arg1;

@optional
- (UIView *)thirdOptionButtonFooterViewForView:(SATVChooseOptionView *)arg1;
- (UIView *)secondOptionButtonFooterViewForView:(SATVChooseOptionView *)arg1;
- (UIView *)firstOptionButtonFooterViewForView:(SATVChooseOptionView *)arg1;
- (NSString *)thirdOptionButtonFooterTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)secondOptionButtonFooterTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)firstOptionButtonFooterTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)thirdOptionButtonTextForView:(SATVChooseOptionView *)arg1;
@end

