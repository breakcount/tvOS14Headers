/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIImage, NSString, NSArray, NSDictionary;

@interface CIFilter : NSObject <NSSecureCoding, NSCopying> {

	void** _priv[8];
	BOOL _enabled;

}

@property (nonatomic,readonly) CIImage * outputImage; 
@property (nonatomic,copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * inputKeys; 
@property (nonatomic,readonly) NSArray * outputKeys; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
+(id)customAttributes;
+(id)filterWithName:(id)arg1 withInputParameters:(id)arg2 ;
+(id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(CGRect)arg2 error:(id*)arg3 ;
+(id)filterWithString:(id)arg1 ;
+(const CGImageMetadataRef)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromImageMetadata:(CGImageMetadataRef)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 ;
+(unsigned)indexForWrapperNumber:(unsigned)arg1 ;
+(BOOL)exchangeImplementationsForClass;
+(BOOL)wrapClassIfNeeded:(Class)arg1 ;
+(id)filterName:(id)arg1 replacement:(id)arg2 arguments:(id)arg3 ;
+(id)filterName:(id)arg1 append:(id)arg2 arguments:(id)arg3 ;
+(id)filterName:(id)arg1 prepend:(id)arg2 imageName:(id)arg3 arguments:(id)arg4 ;
+(void)addFilterToSkip:(id)arg1 ;
+(id)filterName:(id)arg1 replacement:(id)arg2 ;
+(id)filterWithName:(id)arg1 setDefaults:(BOOL)arg2 ;
+(id)filterNamesInCategories:(id)arg1 ;
+(id)filterWithName:(id)arg1 keysAndValues:(id)arg2 ;
+(id)filterNamesInCategory:(id)arg1 ;
+(void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3 ;
+(id)localizedNameForFilterName:(id)arg1 ;
+(id)localizedNameForCategory:(id)arg1 ;
+(id)localizedDescriptionForFilterName:(id)arg1 ;
+(id)localizedReferenceDocumentationForFilterName:(id)arg1 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3 ;
+(id)allCategories:(BOOL)arg1 ;
+(void)unregisterFilterName:(id)arg1 ;
+(id)metalFilterWithName:(id)arg1 ;
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)filterWithCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 options:(id)arg3 ;
+(id)supportedRawCameraModels;
+(id)gaussianGradientFilter;
+(id)hueSaturationValueGradientFilter;
+(id)linearGradientFilter;
+(id)radialGradientFilter;
+(id)smoothLinearGradientFilter;
+(id)sharpenLuminanceFilter;
+(id)unsharpMaskFilter;
+(id)circularScreenFilter;
+(id)CMYKHalftone;
+(id)dotScreenFilter;
+(id)hatchedScreenFilter;
+(id)lineScreenFilter;
+(id)bicubicScaleTransformFilter;
+(id)edgePreserveUpsampleFilter;
+(id)keystoneCorrectionCombinedFilter;
+(id)keystoneCorrectionHorizontalFilter;
+(id)keystoneCorrectionVerticalFilter;
+(id)lanczosScaleTransformFilter;
+(id)perspectiveCorrectionFilter;
+(id)perspectiveRotateFilter;
+(id)perspectiveTransformFilter;
+(id)perspectiveTransformWithExtentFilter;
+(id)straightenFilter;
+(id)accordionFoldTransitionFilter;
+(id)barsSwipeTransitionFilter;
+(id)copyMachineTransitionFilter;
+(id)disintegrateWithMaskTransitionFilter;
+(id)dissolveTransitionFilter;
+(id)flashTransitionFilter;
+(id)modTransitionFilter;
+(id)pageCurlTransitionFilter;
+(id)pageCurlWithShadowTransitionFilter;
+(id)rippleTransitionFilter;
+(id)swipeTransitionFilter;
+(id)additionCompositingFilter;
+(id)colorBlendModeFilter;
+(id)colorBurnBlendModeFilter;
+(id)colorDodgeBlendModeFilter;
+(id)darkenBlendModeFilter;
+(id)differenceBlendModeFilter;
+(id)divideBlendModeFilter;
+(id)exclusionBlendModeFilter;
+(id)hardLightBlendModeFilter;
+(id)hueBlendModeFilter;
+(id)lightenBlendModeFilter;
+(id)linearBurnBlendModeFilter;
+(id)linearDodgeBlendModeFilter;
+(id)luminosityBlendModeFilter;
+(id)maximumCompositingFilter;
+(id)minimumCompositingFilter;
+(id)multiplyBlendModeFilter;
+(id)multiplyCompositingFilter;
+(id)overlayBlendModeFilter;
+(id)pinLightBlendModeFilter;
+(id)saturationBlendModeFilter;
+(id)screenBlendModeFilter;
+(id)softLightBlendModeFilter;
+(id)sourceAtopCompositingFilter;
+(id)sourceInCompositingFilter;
+(id)sourceOutCompositingFilter;
+(id)sourceOverCompositingFilter;
+(id)subtractBlendModeFilter;
+(id)colorAbsoluteDifferenceFilter;
+(id)colorClampFilter;
+(id)colorControlsFilter;
+(id)colorMatrixFilter;
+(id)colorPolynomialFilter;
+(id)colorThresholdFilter;
+(id)colorThresholdOtsuFilter;
+(id)depthToDisparityFilter;
+(id)disparityToDepthFilter;
+(id)exposureAdjustFilter;
+(id)gammaAdjustFilter;
+(id)hueAdjustFilter;
+(id)linearToSRGBToneCurveFilter;
+(id)sRGBToneCurveToLinearFilter;
+(id)temperatureAndTintFilter;
+(id)toneCurveFilter;
+(id)vibranceFilter;
+(id)whitePointAdjustFilter;
+(id)colorCrossPolynomialFilter;
+(id)colorCubeFilter;
+(id)colorCubesMixedWithMaskFilter;
+(id)colorCubeWithColorSpaceFilter;
+(id)colorCurvesFilter;
+(id)colorInvertFilter;
+(id)colorMapFilter;
+(id)colorMonochromeFilter;
+(id)colorPosterizeFilter;
+(id)ditherFilter;
+(id)documentEnhancerFilter;
+(id)falseColorFilter;
+(id)LabDeltaE;
+(id)maskToAlphaFilter;
+(id)maximumComponentFilter;
+(id)minimumComponentFilter;
+(id)paletteCentroidFilter;
+(id)palettizeFilter;
+(id)photoEffectChromeFilter;
+(id)photoEffectFadeFilter;
+(id)photoEffectInstantFilter;
+(id)photoEffectMonoFilter;
+(id)photoEffectNoirFilter;
+(id)photoEffectProcessFilter;
+(id)photoEffectTonalFilter;
+(id)photoEffectTransferFilter;
+(id)sepiaToneFilter;
+(id)thermalFilter;
+(id)vignetteFilter;
+(id)vignetteEffectFilter;
+(id)xRayFilter;
+(id)bumpDistortionFilter;
+(id)bumpDistortionLinearFilter;
+(id)circleSplashDistortionFilter;
+(id)circularWrapFilter;
+(id)displacementDistortionFilter;
+(id)drosteFilter;
+(id)glassDistortionFilter;
+(id)glassLozengeFilter;
+(id)holeDistortionFilter;
+(id)lightTunnelFilter;
+(id)ninePartStretchedFilter;
+(id)ninePartTiledFilter;
+(id)pinchDistortionFilter;
+(id)stretchCropFilter;
+(id)torusLensDistortionFilter;
+(id)twirlDistortionFilter;
+(id)vortexDistortionFilter;
+(id)affineClampFilter;
+(id)affineTileFilter;
+(id)eightfoldReflectedTileFilter;
+(id)fourfoldReflectedTileFilter;
+(id)fourfoldRotatedTileFilter;
+(id)fourfoldTranslatedTileFilter;
+(id)glideReflectedTileFilter;
+(id)kaleidoscopeFilter;
+(id)opTileFilter;
+(id)parallelogramTileFilter;
+(id)perspectiveTileFilter;
+(id)sixfoldReflectedTileFilter;
+(id)sixfoldRotatedTileFilter;
+(id)triangleKaleidoscopeFilter;
+(id)triangleTileFilter;
+(id)twelvefoldReflectedTileFilter;
+(id)attributedTextImageGeneratorFilter;
+(id)aztecCodeGeneratorFilter;
+(id)barcodeGeneratorFilter;
+(id)checkerboardGeneratorFilter;
+(id)code128BarcodeGeneratorFilter;
+(id)lenticularHaloGeneratorFilter;
+(id)meshGeneratorFilter;
+(id)PDF417BarcodeGenerator;
+(id)QRCodeGenerator;
+(id)randomGeneratorFilter;
+(id)roundedRectangleGeneratorFilter;
+(id)starShineGeneratorFilter;
+(id)stripesGeneratorFilter;
+(id)sunbeamsGeneratorFilter;
+(id)textImageGeneratorFilter;
+(id)blendWithAlphaMaskFilter;
+(id)blendWithBlueMaskFilter;
+(id)blendWithMaskFilter;
+(id)blendWithRedMaskFilter;
+(id)bloomFilter;
+(id)comicEffectFilter;
+(id)convolution3X3Filter;
+(id)convolution5X5Filter;
+(id)convolution7X7Filter;
+(id)convolution9HorizontalFilter;
+(id)convolution9VerticalFilter;
+(id)coreMLModelFilter;
+(id)crystallizeFilter;
+(id)depthOfFieldFilter;
+(id)edgesFilter;
+(id)edgeWorkFilter;
+(id)gaborGradientsFilter;
+(id)gloomFilter;
+(id)heightFieldFromMaskFilter;
+(id)hexagonalPixellateFilter;
+(id)highlightShadowAdjustFilter;
+(id)lineOverlayFilter;
+(id)mixFilter;
+(id)pixellateFilter;
+(id)pointillizeFilter;
+(id)saliencyMapFilter;
+(id)shadedMaterialFilter;
+(id)spotColorFilter;
+(id)spotLightFilter;
+(id)bokehBlurFilter;
+(id)boxBlurFilter;
+(id)discBlurFilter;
+(id)gaussianBlurFilter;
+(id)maskedVariableBlurFilter;
+(id)medianFilter;
+(id)morphologyGradientFilter;
+(id)morphologyMaximumFilter;
+(id)morphologyMinimumFilter;
+(id)morphologyRectangleMaximumFilter;
+(id)morphologyRectangleMinimumFilter;
+(id)motionBlurFilter;
+(id)noiseReductionFilter;
+(id)zoomBlurFilter;
+(id)areaAverageFilter;
+(id)areaHistogramFilter;
+(id)areaMaximumFilter;
+(id)areaMaximumAlphaFilter;
+(id)areaMinimumFilter;
+(id)areaMinimumAlphaFilter;
+(id)areaMinMaxFilter;
+(id)areaMinMaxRedFilter;
+(id)columnAverageFilter;
+(id)histogramDisplayFilter;
+(id)KMeansFilter;
+(id)rowAverageFilter;
+(id)metalFilterWithName:(id)arg1 withInputParameters:(id)arg2 ;
+(int)getMinMaxSimulatedApertureFrom:(CFDataRef)arg1 minValue:(float*)arg2 maxValue:(float*)arg3 version:(int*)arg4 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(void)finalize;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)isEnabled;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_isIdentity;
-(void)setDefaults;
-(id)apply:(id)arg1 ;
-(id)customAttributes;
-(CIImage *)outputImage;
-(NSArray *)inputKeys;
-(void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1 className:(const char*)arg2 overridesDealloc:(BOOL)arg3 ;
-(NSArray *)outputKeys;
-(id)_copyFilterWithZone:(NSZone*)arg1 ;
-(id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(BOOL)_filterClassInCategory:(id)arg1 ;
-(id)_serializedXMPString;
-(void)setIdentity;
-(void)_prependSingleFilter:(id)arg1 ;
-(id)_appendSingleFilterTo:(id)arg1 filterAndSettings:(id)arg2 ;
-(void)_prepend:(id)arg1 ;
-(id)_append:(id)arg1 image:(id)arg2 ;
-(id)outputImageCatchAll:(unsigned)arg1 ;
-(id)wrappedOutputImage10;
-(id)wrappedOutputImage11;
-(id)wrappedOutputImage12;
-(id)wrappedOutputImage13;
-(id)wrappedOutputImage14;
-(id)wrappedOutputImage15;
-(id)wrappedOutputImage16;
-(id)wrappedOutputImage17;
-(id)wrappedOutputImage18;
-(id)wrappedOutputImage19;
-(id)wrappedOutputImage20;
-(id)wrappedOutputImage21;
-(id)wrappedOutputImage22;
-(id)wrappedOutputImage23;
-(id)wrappedOutputImage24;
-(id)wrappedOutputImage25;
-(id)wrappedOutputImage26;
-(id)wrappedOutputImage27;
-(id)wrappedOutputImage28;
-(id)wrappedOutputImage29;
-(id)wrappedOutputImage30;
-(id)wrappedOutputImage31;
-(id)wrappedOutputImage32;
-(id)wrappedOutputImage33;
-(id)wrappedOutputImage34;
-(id)wrappedOutputImage35;
-(id)wrappedOutputImage36;
-(id)wrappedOutputImage37;
-(id)wrappedOutputImage38;
-(id)wrappedOutputImage39;
-(id)wrappedOutputImage40;
-(id)wrappedOutputImage41;
-(id)wrappedOutputImage42;
-(id)wrappedOutputImage43;
-(id)wrappedOutputImage44;
-(id)wrappedOutputImage45;
-(id)wrappedOutputImage46;
-(id)wrappedOutputImage47;
-(id)wrappedOutputImage48;
-(id)wrappedOutputImage49;
-(id)wrappedOutputImage50;
-(id)wrappedOutputImage51;
-(id)wrappedOutputImage52;
-(id)wrappedOutputImage53;
-(id)wrappedOutputImage54;
-(id)wrappedOutputImage55;
-(id)wrappedOutputImage56;
-(id)wrappedOutputImage57;
-(id)wrappedOutputImage58;
-(id)wrappedOutputImage59;
-(id)wrappedOutputImage60;
-(id)wrappedOutputImage61;
-(id)wrappedOutputImage62;
-(id)wrappedOutputImage63;
-(id)wrappedOutputImage64;
-(id)wrappedOutputImage65;
-(id)wrappedOutputImage66;
-(id)wrappedOutputImage67;
-(id)wrappedOutputImage68;
-(id)wrappedOutputImage69;
-(id)wrappedOutputImage70;
-(id)wrappedOutputImage71;
-(id)wrappedOutputImage72;
-(id)wrappedOutputImage73;
-(id)wrappedOutputImage74;
-(id)wrappedOutputImage75;
-(id)wrappedOutputImage76;
-(id)wrappedOutputImage77;
-(id)wrappedOutputImage78;
-(id)wrappedOutputImage79;
-(id)wrappedOutputImage80;
-(id)wrappedOutputImage81;
-(id)wrappedOutputImage82;
-(id)wrappedOutputImage83;
-(id)wrappedOutputImage84;
-(id)wrappedOutputImage85;
-(id)wrappedOutputImage86;
-(id)wrappedOutputImage87;
-(id)wrappedOutputImage88;
-(id)wrappedOutputImage89;
-(id)wrappedOutputImage90;
-(id)wrappedOutputImage91;
-(id)wrappedOutputImage92;
-(id)wrappedOutputImage93;
-(id)wrappedOutputImage94;
-(id)wrappedOutputImage95;
-(id)wrappedOutputImage96;
-(id)wrappedOutputImage97;
-(id)wrappedOutputImage98;
-(id)wrappedOutputImage99;
-(int)compatibilityVersion;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(CGColorSpaceRef)arg4 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(CGColorSpaceRef)arg4 ;
@end

