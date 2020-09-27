/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {

	BOOL _useFunctionConstants;
	NSString* _originalSourceCode;
	NSArray* _injectionPointRanges;
	NSString* _originalLightingSourceCode;
	NSArray* _lightingInjectionPointRanges;

}
-(id)init;
-(void)dealloc;
-(int)profile;
-(void)emptyShaderCache;
-(void)collectShaderForProgram:(C3DFXMetalProgramRef)arg1 newVertexFunctionName:(id)arg2 newFragmentFunctionName:(id)arg3 sourceCodeBlock:(/*^block*/id)arg4 additionalFileBlock:(/*^block*/id)arg5 ;
-(C3DFXProgramRef)_newProgramWithHashCode:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
-(void)_loadSourceCode;
-(C3DFXProgramRef)_newProgramWithHashCodeWithFunctionConstants:(C3DProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 introspectionDataPtr:(void*)arg3 ;
@end

