/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <TVUIKit/TVLockupHeaderFooterView.h>

@class UILabel, NSString;

@interface _TVSMVibrantHeaderFooterView : TVLockupHeaderFooterView {

	BOOL _isFocused;
	UILabel* _standardLabel;
	NSString* _labelText;

}

@property (nonatomic,readonly) UILabel * standardLabel;              //@synthesize standardLabel=_standardLabel - In the implementation block
@property (nonatomic,copy) NSString * labelText;                     //@synthesize labelText=_labelText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(void)_updateCompositingEffects;
-(UILabel *)standardLabel;
@end

