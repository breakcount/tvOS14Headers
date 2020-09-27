/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVEffectHitArea.h>
#import <libobjc.A.dylib/PVEffectTransformable.h>
#import <libobjc.A.dylib/PVEffectTimedProperties.h>
#import <libobjc.A.dylib/PVEffectTextual.h>
#import <libobjc.A.dylib/PVEffectTranscript.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSLock, NSMutableArray, PVEffectTimedPropertiesComponent, NSDictionary;

@interface PVEffect : NSObject <PVEffectHitArea, PVEffectTransformable, PVEffectTimedProperties, PVEffectTextual, PVEffectTranscript, NSSecureCoding, NSCopying> {

	NSString* _effectID;
	NSString* _effectType;
	NSString* _displayName;
	SCD_Struct_PV28 _effectRange;
	NSMutableDictionary* _inspectableProperties;
	NSLock* _inspectablePropertiesLock;
	NSMutableDictionary* _effectParameters;
	atomic<unsigned int>* _loadCount;
	NSMutableArray* _components;
	PVEffectTimedPropertiesComponent* _timedPropertiesComponent;
	BOOL _conformToInputAspect;
	BOOL _isPreview;
	BOOL _isRecording;
	BOOL _useLocalLoopTime;
	BOOL _isInInteractiveMode;
	BOOL _shouldDisableFadeOut;
	NSDictionary* _contentProperties;

}

@property (assign,nonatomic) SCD_Struct_PV28 effectRange;                         //@synthesize effectRange=_effectRange - In the implementation block
@property (assign,nonatomic) BOOL conformToInputAspect;                           //@synthesize conformToInputAspect=_conformToInputAspect - In the implementation block
@property (nonatomic,copy) NSDictionary * inspectableProperties; 
@property (nonatomic,retain) NSMutableDictionary * effectParameters;              //@synthesize effectParameters=_effectParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * contentProperties;                    //@synthesize contentProperties=_contentProperties - In the implementation block
@property (assign,nonatomic) BOOL isPreview;                                      //@synthesize isPreview=_isPreview - In the implementation block
@property (assign,nonatomic) BOOL isRecording;                                    //@synthesize isRecording=_isRecording - In the implementation block
@property (assign,nonatomic) BOOL useLocalLoopTime;                               //@synthesize useLocalLoopTime=_useLocalLoopTime - In the implementation block
@property (assign,nonatomic) BOOL isInInteractiveMode;                            //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableFadeOut;                           //@synthesize shouldDisableFadeOut=_shouldDisableFadeOut - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
+(BOOL)supportsSecureCoding;
+(void)setInteractiveMode:(BOOL)arg1 ;
+(void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3 ;
+(void)registerEffects;
+(id)newEffectWithID:(id)arg1 ;
+(id)categoryForEffectID:(id)arg1 ;
+(void)handleApplicationWillTerminate;
+(void)willTerminate:(id)arg1 ;
+(void)handleCleanupEffectsCache;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)cleanupEffectsCache;
+(void)cleanupEffectsSingletons;
+(BOOL)isInteractiveMode;
+(id)propertiesForEffect:(id)arg1 ;
+(id)newEffectWithURL:(id)arg1 ;
+(id)newEffectWithData:(id)arg1 ;
+(void)clearPreviewStats;
+(id)attributeForName:(id)arg1 fromAttributedString:(id)arg2 defaultAttributes:(id)arg3 ;
+(double)textHeightFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 scale:(double)arg3 ;
+(void)modifyAttributedStringByAdjustingShadow:(id)arg1 scale:(double)arg2 rotation:(double)arg3 ;
+(void)modifyAttributedStringByAdjustingOutline:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 scale:(double)arg4 ;
+(void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)arg1 scale:(double)arg2 ;
+(long long)verticalAlignmentFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(double)textHeightFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(id)shadowFromAttributedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(double)xOffsetForTextTrackingFromAttributedString:(id)arg1 ;
+(BOOL)isAllCapsFromAttributes:(id)arg1 ;
+(double)baselineOffsetFromAttributedString:(id)arg1 ;
+(void)modifyAttributedStringByAdjustingFontSize:(id)arg1 scale:(double)arg2 ;
+(void)modifyAttributedStringByAdjustingShadow:(id)arg1 effectTransform:(id)arg2 ;
+(void)modifyAttributedStringByAdjustingOutline:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
+(void)modifyAttributedStringByAdjustingForNegativeLineSpacing:(id)arg1 ;
+(void)modifyAttributedStringByAdjustingKerning:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 scale:(double)arg4 ;
+(void)modifyAttributedStringByAdjustingFont:(id)arg1 toFitSize:(CGSize)arg2 ;
+(void)modifyAttributedStringByApplyingSubstituteFont:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
+(void)runDeferredRegistration;
+(void)ensureEffectsRegistered;
+(id)_effectRegistry;
+(id)_effectRegistryForLookup;
+(id)_registryEntryForEffectID:(id)arg1 ;
+(id)allRegisteredEffectIDs;
+(id)effectTypeForEffectID:(id)arg1 ;
+(id)registeredEffectIDsForEffectType:(id)arg1 ;
+(Class)classForEffectID:(id)arg1 ;
+(void)appFinishedLaunching:(id)arg1 ;
+(void)deferEffectRegistrationForClass:(Class)arg1 ;
+(BOOL)effectIDIsRegistered:(id)arg1 ;
+(BOOL)effectIDIsNone:(id)arg1 ;
+(id)userVisibleEffectIDs;
+(id)registeredEffectIDsForEffectTypes:(id)arg1 ;
+(id)firstRegisteredEffectIDContainingSubstring:(id)arg1 ;
+(id)registeredEffectIDsForClass:(Class)arg1 ;
+(id)displayNameForEffectType:(id)arg1 ;
+(id)displayNameForEffectID:(id)arg1 ;
+(id)themeForEffectID:(id)arg1 ;
+(id)descriptionForEffectID:(id)arg1 ;
+(BOOL)isVideoForEffectID:(id)arg1 ;
+(id)defaultVideoTransitionEffectID;
+(id)_registeredEffectClasses;
+(void)initEffectRegistryWithHostDelegate:(id)arg1 ;
+(void)_registerBuiltInEffects;
+(void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2 ;
+(void)initEffectRegistry;
+(void)noteApplicationWillTerminate;
+(void)noteApplicationDidReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isReady;
-(id)displayName;
-(int)orientation;
-(BOOL)isHidden;
-(void)releaseResources;
-(void)setTransform:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(int)origin;
-(BOOL)isRecording;
-(id)categoryName;
-(id)effectType;
-(BOOL)isPreview;
-(CGSize)outputSize;
-(id)initWithEffectID:(id)arg1 ;
-(HGRef<HGNode>*)previewHGNodeForTime:(SCD_Struct_PV21)arg1 inputHGNode:(HGRef<HGNode>*)arg2 outputSize:(CGSize)arg3 renderer:(HGRenderer*)arg4 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV21)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(BOOL)loadEffect;
-(void)releaseEffect;
-(BOOL)conformToInputAspect;
-(void)assertInspectablePropertiesAreLocked;
-(void)assertInspectablePropertiesAreUnlocked;
-(id)textEditingBoundsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 useParagraphBounds:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(id)textEditingBounds:(SCD_Struct_PV21)arg1 ;
-(id)textTransformsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4 ;
-(id)textTransformsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5 ;
-(PVCGPointQuad)textCornersAtTime:(SCD_Struct_PV21)arg1 index:(unsigned long long)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 scale:(CGPoint)arg5 viewSize:(CGSize)arg6 viewOrigin:(int)arg7 ;
-(void)beginTextEditing;
-(void)endTextEditing;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(BOOL)supportsFlippingText;
-(BOOL)supportsOrientation;
-(BOOL)isTextFlipped;
-(BOOL)hasTimedPropertiesDelegates;
-(SCD_Struct_PV28)effectRange;
-(BOOL)supportsExtendedRangeInputs;
-(id)effectID;
-(id)effectDescription;
-(BOOL)isTranscription;
-(void)clearTranscription;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg1 ;
-(void)setTranscriptionText:(id)arg1 ;
-(BOOL)transcriptionHitTest:(CGPoint)arg1 time:(SCD_Struct_PV21)arg2 ;
-(void)updateLiveTitlePickerLoopTime:(BOOL)arg1 ;
-(id)transformAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeTransformAnimation:(BOOL)arg3 viewSize:(CGSize)arg4 viewOrigin:(int)arg5 ;
-(void)setInspectableProperty:(id)arg1 forKey:(id)arg2 ;
-(void)runWithInspectableProperties:(/*^block*/id)arg1 ;
-(id)inspectablePropertyForKey:(id)arg1 ;
-(PVCGPointQuad)cornersAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6 ;
-(id)transformAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 viewSize:(CGSize)arg3 viewOrigin:(int)arg4 ;
-(void)setTopLevelGroupTransform:(id)arg1 ;
-(id)cameraTransform;
-(id)cameraProjection;
-(void)enableCameraOverride:(id)arg1 projection:(id)arg2 ;
-(void)disableCameraOverride;
-(BOOL)isCameraOverrideEnabled;
-(BOOL)bounds:(CGRect*)arg1 atTime:(SCD_Struct_PV21)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(id)initWithContentID:(id)arg1 andDictionary:(id)arg2 ;
-(id)hitAreaPointsAtTime:(SCD_Struct_PV21)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(CGPoint)arg4 viewSize:(CGSize)arg5 viewOrigin:(int)arg6 ;
-(void)_configureComponents;
-(BOOL)loadResources;
-(id)contentPropertyForKey:(id)arg1 ;
-(void)_copyWithZone:(NSZone*)arg1 into:(id)arg2 ;
-(NSDictionary *)inspectableProperties;
-(void)setInspectableProperties:(NSDictionary *)arg1 ;
-(void)setEffectRange:(SCD_Struct_PV28)arg1 ;
-(void)setConformToInputAspect:(BOOL)arg1 ;
-(void)_postInit:(id)arg1 ;
-(void)_decodeFromCoder:(id)arg1 into:(id)arg2 ;
-(BOOL)resourcesAreReady;
-(void)updateInspectableProperties;
-(void)updateInspectableProperties:(id)arg1 ;
-(void)addEntriesToInspectableProperties:(id)arg1 ;
-(id)descriptionOfInspectableProperties;
-(NSMutableDictionary *)effectParameters;
-(void)setEffectParameters:(NSMutableDictionary *)arg1 ;
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(float)proxyRenderScale;
-(double)topLevelOpacity;
-(id)contentBundle;
-(BOOL)shouldRenderPreviewAtPosterTime;
-(BOOL)hasBuiltInEnvironment;
-(BOOL)usesDefaultChannelDataEncoding;
-(BOOL)writeDefaultChannels;
-(void)applyInspectableProperties;
-(NSDictionary *)contentProperties;
-(void)setContentProperties:(NSDictionary *)arg1 ;
-(void)setIsPreview:(BOOL)arg1 ;
-(void)setIsRecording:(BOOL)arg1 ;
-(BOOL)useLocalLoopTime;
-(void)setUseLocalLoopTime:(BOOL)arg1 ;
-(BOOL)isInInteractiveMode;
-(BOOL)shouldDisableFadeOut;
-(void)setShouldDisableFadeOut:(BOOL)arg1 ;
-(BOOL)applyTimedPropertiesForTime:(SCD_Struct_PV21)arg1 ;
-(void)addTimedPropertiesDelegate:(id)arg1 userContext:(id)arg2 ;
-(void)removeTimedPropertiesDelegate:(id)arg1 ;
-(void)removeAllTimedPropertiesDelegates;
-(id)timedPropertiesDelegates;
-(BOOL)hasTimedPropertiesDelegate:(id)arg1 ;
-(id)userContextForTimedPropertiesDelegate:(id)arg1 ;
-(BOOL)hasAllNecessaryResources;
@end

