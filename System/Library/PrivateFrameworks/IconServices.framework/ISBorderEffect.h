/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISEffect.h>

@class ISColor, NSString;

@interface ISBorderEffect : NSObject <ISEffect> {

	ISColor* _color;
	double _lineWidth;

}

@property (retain) ISColor * color;                                 //@synthesize color=_color - In the implementation block
@property (assign) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ISColor *)color;
-(void)setColor:(ISColor *)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
-(id)initWithLineWidth:(double)arg1 color:(id)arg2 ;
@end
