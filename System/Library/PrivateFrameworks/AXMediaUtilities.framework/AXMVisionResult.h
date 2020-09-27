/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class CIImage, NSArray, NSSet, NSNumber, AXMetricSession, NSObject, NSString, AXMVisionFeature, NSDictionary;

@interface AXMVisionResult : NSObject <NSSecureCoding> {

	CIImage* _image;
	NSArray* _features;
	NSSet* _evaluatedFeatureTypes;
	NSNumber* _appliedImageOrientation;
	NSArray* _effectiveTextDetectionLocales;
	AXMetricSession* _metricSession;
	long long _imageRegistrationState;
	NSObject*<NSSecureCoding> _userContext;
	NSString* _detectedTextDescription;

}

@property (nonatomic,readonly) NSArray * faceFeatures; 
@property (nonatomic,readonly) NSArray * sceneClassificationFeatures; 
@property (nonatomic,readonly) NSArray * objectClassificationFeatures; 
@property (nonatomic,readonly) NSArray * modelClassificationFeatures; 
@property (nonatomic,readonly) NSArray * captionFeatures; 
@property (nonatomic,readonly) NSArray * ocrFeatures; 
@property (nonatomic,readonly) NSArray * blurFeatures; 
@property (nonatomic,readonly) NSArray * brightnessFeatures; 
@property (nonatomic,readonly) NSArray * iconClassFeatures; 
@property (nonatomic,readonly) BOOL includesNSFWFeatures; 
@property (nonatomic,readonly) NSArray * sensitiveContentForCaptionFeatures; 
@property (nonatomic,readonly) BOOL captionMayContainSensitiveContent; 
@property (nonatomic,retain) NSString * detectedTextDescription;                          //@synthesize detectedTextDescription=_detectedTextDescription - In the implementation block
@property (nonatomic,retain) CIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * features;                                          //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSSet * evaluatedFeatureTypes;                               //@synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes - In the implementation block
@property (nonatomic,retain) NSNumber * appliedImageOrientation;                          //@synthesize appliedImageOrientation=_appliedImageOrientation - In the implementation block
@property (nonatomic,retain) AXMetricSession * metricSession;                             //@synthesize metricSession=_metricSession - In the implementation block
@property (assign,nonatomic) long long imageRegistrationState;                            //@synthesize imageRegistrationState=_imageRegistrationState - In the implementation block
@property (nonatomic,retain) NSObject*<NSSecureCoding> userContext;                       //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSArray * effectiveTextDetectionLocales;                     //@synthesize effectiveTextDetectionLocales=_effectiveTextDetectionLocales - In the implementation block
@property (nonatomic,readonly) AXMVisionFeature * colorInfoFeature; 
@property (nonatomic,readonly) AXMVisionFeature * assetMetadataFeature; 
@property (nonatomic,readonly) NSString * localizedDetectedTextHint; 
@property (nonatomic,readonly) NSDictionary * featureGates; 
+(BOOL)supportsSecureCoding;
+(id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4 userContext:(id)arg5 ;
+(id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSObject*<NSSecureCoding>)userContext;
-(NSArray *)features;
-(CIImage *)image;
-(void)setImage:(CIImage *)arg1 ;
-(void)setFeatures:(NSArray *)arg1 ;
-(void)setUserContext:(NSObject*<NSSecureCoding>)arg1 ;
-(id)detectedFeatureDescriptionWithOptions:(id)arg1 ;
-(NSString *)detectedTextDescription;
-(long long)imageRegistrationState;
-(id)sortedFeatures;
-(void)setAppliedImageOrientation:(NSNumber *)arg1 ;
-(AXMetricSession *)metricSession;
-(NSSet *)evaluatedFeatureTypes;
-(NSNumber *)appliedImageOrientation;
-(NSArray *)effectiveTextDetectionLocales;
-(void)setEffectiveTextDetectionLocales:(NSArray *)arg1 ;
-(void)setEvaluatedFeatureTypes:(NSSet *)arg1 ;
-(void)setMetricSession:(AXMetricSession *)arg1 ;
-(void)setImageRegistrationState:(long long)arg1 ;
-(BOOL)isEqualToAXMVisionResult:(id)arg1 ;
-(NSArray *)ocrFeatures;
-(NSArray *)faceFeatures;
-(NSArray *)sceneClassificationFeatures;
-(NSArray *)objectClassificationFeatures;
-(NSArray *)captionFeatures;
-(BOOL)includesNSFWFeatures;
-(NSArray *)sensitiveContentForCaptionFeatures;
-(NSArray *)blurFeatures;
-(NSArray *)brightnessFeatures;
-(NSArray *)iconClassFeatures;
-(void)setDetectedTextDescription:(NSString *)arg1 ;
-(NSDictionary *)featureGates;
-(AXMVisionFeature *)colorInfoFeature;
-(AXMVisionFeature *)assetMetadataFeature;
-(NSString *)localizedDetectedTextHint;
-(BOOL)captionMayContainSensitiveContent;
-(NSArray *)modelClassificationFeatures;
-(id)sensitiveContentFeatures;
@end

