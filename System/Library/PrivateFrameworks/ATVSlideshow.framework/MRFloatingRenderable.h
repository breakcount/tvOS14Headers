/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRSlideProvider, MRImage;

@interface MRFloatingRenderable : MUPoolObject {

	MRSlideProvider* provider;
	MRImage* slide;
	CGSize size;
	double shadowWidth;
	double shadowHeight;
	unsigned long long vboOffsetPlain;
	unsigned long long vboOffsetSoft;
	unsigned long long vboOffsetShadow;
	double aspectRatio;
	double scale;
	CGPoint bottomLeft;
	CGPoint topRight;
	MRFloatingRenderable* next;

}

@property (nonatomic,retain) MRImage * slide; 
+(void)initialize;
+(SCD_Struct_MR15*)poolInfo;
-(void)dealloc;
-(void)purge;
-(void)setSlide:(MRImage *)arg1 ;
-(MRImage *)slide;
@end

