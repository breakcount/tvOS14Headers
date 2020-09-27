/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface IPAImageSizePolicy : NSObject <NSCoding>
+(id)originalSizePolicy;
+(id)scalePolicyWithScale:(double)arg1 ;
+(id)bestFitPolicyInSize:(CGSize)arg1 ;
+(id)bestFitPolicyInSquare:(double)arg1 ;
+(id)bestFitPolicyShortestEdge:(double)arg1 ;
+(id)bestFitPolicyWithWidth:(double)arg1 ;
+(id)bestFitPolicyWithHeight:(double)arg1 ;
+(id)bestFitPolicyThumbnail;
+(id)bestFitPolicyWithTotalPixelCount:(long long)arg1 ;
+(id)bestFitPolicyWithEvenTotalPixelCount:(long long)arg1 ;
+(id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)arg1 ;
+(id)largestPolicyWithPolicies:(id)arg1 ;
+(id)bestFitPolicyWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(PFIntSize_st)integralTransformSize:(CGSize)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
-(BOOL)isOriginalSizePolicy;
@end

