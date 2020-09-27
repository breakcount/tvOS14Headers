/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

@interface _TVTintedImageDecorator : TVImageScaleDecorator {

	IKColor* _tintColor;

}

@property (nonatomic,retain,readonly) IKColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(IKColor *)tintColor;
-(id)initWithTintColor:(id)arg1 ;
-(id)decoratorIdentifier;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
@end
