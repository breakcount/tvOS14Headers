/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@interface PVPushTransition : PVHeliumEffect {

	int _transitionDirection;

}

@property (assign,nonatomic) int transitionDirection;              //@synthesize transitionDirection=_transitionDirection - In the implementation block
+(void)registerEffectWithID:(id)arg1 displayName:(id)arg2 ;
-(int)transitionDirection;
-(void)setTransitionDirection:(int)arg1 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV21)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>*)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
@end

