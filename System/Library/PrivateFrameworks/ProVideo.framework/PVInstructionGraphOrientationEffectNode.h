/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphEffectNode.h>

@class PVEffect;

@interface PVInstructionGraphOrientationEffectNode : PVInstructionGraphEffectNode {

	BOOL _bypassOutOfRangeEffects;
	PVEffect* _effect;

}
+(id)newOrientationEffectNodeWithInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3 ;
-(id)effect;
-(void)setEffect:(id)arg1 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV21)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>Ref)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(BOOL)bypassOutOfRangeEffects;
-(void)setBypassOutOfRangeEffects:(BOOL)arg1 ;
@end

