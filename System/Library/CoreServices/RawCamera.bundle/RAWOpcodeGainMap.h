/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

@interface RAWOpcodeGainMap : CIFilter {

	CIImage* inputImage;
	NSDictionary* arguments;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,retain) NSDictionary * arguments; 
-(NSDictionary *)arguments;
-(void)setArguments:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)initWithArguments:(id)arg1 ;
@end

