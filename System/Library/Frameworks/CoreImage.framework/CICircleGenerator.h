/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface CICircleGenerator : CIFilter {

	CIColor* inputColor;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputEdgeBlur;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CICircle;
@end
