/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface TDDeviceTraits : NSObject <NSCopying> {

	double _scale;
	long long _idiomValue;
	NSArray* _hostedIdiomValues;
	long long _subtype;
	long long _sizeClassHorizontal;
	long long _sizeClassVertical;
	long long _displayGamutValue;
	long long _deploymentTargetValue;
	long long _memoryPerformanceClass;
	long long _graphicsPerformanceClass;
	long long _graphicsFeatureSetClassValue;
	NSArray* _graphicsFeatureSetFallbackValues;
	NSArray* _subtypeFallbackValues;
	long long _dynamicDisplayModeValue;

}

@property (assign,nonatomic) long long idiomValue;                                  //@synthesize idiomValue=_idiomValue - In the implementation block
@property (nonatomic,copy) NSArray * hostedIdiomValues;                             //@synthesize hostedIdiomValues=_hostedIdiomValues - In the implementation block
@property (assign,nonatomic) long long graphicsFeatureSetClassValue;                //@synthesize graphicsFeatureSetClassValue=_graphicsFeatureSetClassValue - In the implementation block
@property (nonatomic,copy) NSArray * graphicsFeatureSetFallbackValues;              //@synthesize graphicsFeatureSetFallbackValues=_graphicsFeatureSetFallbackValues - In the implementation block
@property (assign,nonatomic) long long displayGamutValue;                           //@synthesize displayGamutValue=_displayGamutValue - In the implementation block
@property (assign,nonatomic) long long deploymentTargetValue;                       //@synthesize deploymentTargetValue=_deploymentTargetValue - In the implementation block
@property (assign,nonatomic) long long dynamicDisplayModeValue;                     //@synthesize dynamicDisplayModeValue=_dynamicDisplayModeValue - In the implementation block
@property (assign,nonatomic) double scale;                                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSString * idiom; 
@property (nonatomic,retain) NSArray * hostedIdioms; 
@property (assign,nonatomic) long long subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,retain) NSString * displayGamut; 
@property (nonatomic,retain) NSString * deploymentTarget; 
@property (assign,nonatomic) long long memoryPerformanceClass;                      //@synthesize memoryPerformanceClass=_memoryPerformanceClass - In the implementation block
@property (assign,nonatomic) long long graphicsPerformanceClass;                    //@synthesize graphicsPerformanceClass=_graphicsPerformanceClass - In the implementation block
@property (nonatomic,retain) NSString * graphicsFeatureSetClass; 
@property (nonatomic,retain) NSArray * graphicsFeatureSetFallbacks; 
@property (nonatomic,retain) NSArray * subtypeFallbackValues;                       //@synthesize subtypeFallbackValues=_subtypeFallbackValues - In the implementation block
@property (nonatomic,retain) NSString * dynamicDisplayMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(double)scale;
-(long long)subtype;
-(void)setScale:(double)arg1 ;
-(void)setSubtype:(long long)arg1 ;
-(NSString *)idiom;
-(void)setIdiom:(NSString *)arg1 ;
-(NSString *)displayGamut;
-(void)setDisplayGamut:(NSString *)arg1 ;
-(void)setHostedIdiomValues:(NSArray *)arg1 ;
-(void)setGraphicsFeatureSetFallbackValues:(NSArray *)arg1 ;
-(void)setSubtypeFallbackValues:(NSArray *)arg1 ;
-(long long)idiomValue;
-(void)setIdiomValue:(long long)arg1 ;
-(NSArray *)hostedIdiomValues;
-(long long)displayGamutValue;
-(void)setDisplayGamutValue:(long long)arg1 ;
-(long long)deploymentTargetValue;
-(void)setDeploymentTargetValue:(long long)arg1 ;
-(long long)memoryPerformanceClass;
-(void)setMemoryPerformanceClass:(long long)arg1 ;
-(long long)graphicsFeatureSetClassValue;
-(void)setGraphicsFeatureSetClassValue:(long long)arg1 ;
-(NSArray *)graphicsFeatureSetFallbackValues;
-(NSArray *)subtypeFallbackValues;
-(long long)dynamicDisplayModeValue;
-(void)setDynamicDisplayModeValue:(long long)arg1 ;
-(long long)_idiomFromTraitString:(id)arg1 ;
-(id)_idiomToTraitString:(long long)arg1 ;
-(long long)_graphicsFeatureSetClassFromTraitString:(id)arg1 ;
-(id)_graphicsFeatureSetClassToTraitString:(long long)arg1 ;
-(long long)_displayGamutFromTraitString:(id)arg1 ;
-(id)_displayGamutToTraitString:(long long)arg1 ;
-(long long)_deploymentTargetFromTraitString:(id)arg1 ;
-(id)_deploymentTargetToTraitString:(long long)arg1 ;
-(long long)_dynamicDisplayModeFromTraitString:(id)arg1 ;
-(void)setHostedIdioms:(NSArray *)arg1 ;
-(NSArray *)hostedIdioms;
-(void)setGraphicsFeatureSetClass:(NSString *)arg1 ;
-(NSString *)graphicsFeatureSetClass;
-(void)setGraphicsFeatureSetFallbacks:(NSArray *)arg1 ;
-(NSArray *)graphicsFeatureSetFallbacks;
-(void)setDeploymentTarget:(NSString *)arg1 ;
-(NSString *)deploymentTarget;
-(id)_dynamicDisplayModeToTraitString:(long long)arg1 ;
-(NSString *)dynamicDisplayMode;
-(void)setDynamicDisplayMode:(NSString *)arg1 ;
-(long long)graphicsPerformanceClass;
-(void)setGraphicsPerformanceClass:(long long)arg1 ;
@end

