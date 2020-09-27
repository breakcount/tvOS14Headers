/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe {

	unsigned _recipeID;

}

@property (assign,nonatomic) unsigned recipeID;              //@synthesize recipeID=_recipeID - In the implementation block
+(double)_scaleFactorForInputSize:(CGSize)arg1 maximumPixelCount:(long long)arg2 ;
+(CGSize)scaleOriginalSize:(CGSize)arg1 toShortSideTarget:(double)arg2 maxLongSideLength:(double)arg3 ;
+(CGSize)scaleOriginalSize:(CGSize)arg1 toLongSideTarget:(double)arg2 ;
-(id)description;
-(id)_resourceGenerationAffectsRecipesForLibraryID:(id)arg1 ;
-(id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(BOOL)arg4 reason:(id)arg5 ;
-(void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned)arg2 conversionClient:(id)arg3 isHighPriority:(BOOL)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)utiInContext:(id)arg1 ;
-(BOOL)colorSpaceIsNativeForDisplay;
-(BOOL)isMarkedFullSize;
-(id)codecInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(id)expectedFileURLForVersion:(unsigned)arg1 asset:(id)arg2 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(BOOL)arg5 reason:(id)arg6 progress:(id*)arg7 completion:(/*^block*/id)arg8 ;
-(id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2 ;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1 ;
@end

