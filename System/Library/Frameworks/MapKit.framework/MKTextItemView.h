/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface MKTextItemView : UIView {

	NSArray* _labels;

}

@property (nonatomic,copy) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4 ;
@end

