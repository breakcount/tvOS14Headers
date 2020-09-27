/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:37 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TVSettingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableDictionary, NSArray;

@interface TSKPieChartView : UIView {

	NSMutableDictionary* _valueDict;
	NSMutableDictionary* _colorDict;
	NSMutableDictionary* _slices;
	NSArray* _sliceIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * sliceIdentifiers;              //@synthesize sliceIdentifiers=_sliceIdentifiers - In the implementation block
-(void)_updateSlices:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sliceIdentifiers:(id)arg2 colors:(id)arg3 values:(id)arg4 ;
-(void)updateValues:(id)arg1 forSlicesWithIdentifiers:(id)arg2 animated:(BOOL)arg3 ;
-(NSArray *)sliceIdentifiers;
@end

