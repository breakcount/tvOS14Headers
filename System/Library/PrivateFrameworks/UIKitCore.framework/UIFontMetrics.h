/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIFontMetrics : NSObject {

	NSString* _textStyle;

}
+(id)metricsForTextStyle:(id)arg1 ;
+(id)defaultMetrics;
+(double)scaledValueForValue:(double)arg1 withTextStyle:(id)arg2 bodyLeading:(double)arg3 compatibleWithTraitCollection:(id)arg4 ;
-(id)init;
-(id)scaledFontForFont:(id)arg1 ;
-(double)scaledValueForValue:(double)arg1 ;
-(id)initForTextStyle:(id)arg1 ;
-(double)scaledValueForValue:(double)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(id)scaledFontForFont:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 ;
-(id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 ;
-(id)ib_scaledFontForFont:(id)arg1 ;
-(id)ib_scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 ;
@end

