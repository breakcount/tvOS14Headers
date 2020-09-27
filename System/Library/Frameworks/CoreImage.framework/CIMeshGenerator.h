/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSNumber, CIColor, NSArray;

@interface CIMeshGenerator : CIFilter {

	NSNumber* inputWidth;
	CIColor* inputColor;
	NSArray* inputMesh;

}

@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSArray * inputMesh; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3 ;
-(id)_CIMesh32;
-(id)_CIMesh16;
-(id)_CIMesh8;
-(id)_CIMesh4;
-(id)_CIMesh2;
-(id)_CIMesh1;
-(NSArray *)inputMesh;
-(void)setInputMesh:(NSArray *)arg1 ;
@end

