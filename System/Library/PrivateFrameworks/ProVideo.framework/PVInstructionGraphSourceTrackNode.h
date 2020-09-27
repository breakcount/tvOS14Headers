/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@protocol PVStabilizationDelegate;
@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {

	atomic<int> _sourceTrackloaded;
	BOOL _stabilizationDelegateRespondsToDidStabilize;
	int _trackID;
	int _dataTrackID;
	int _fillMode;
	id<PVStabilizationDelegate> _stabilizationDelegate;
	id _userContext;
	CGSize _clipNaturalSize;
	CGRect _cropRect;

}

@property (assign,nonatomic) BOOL stabilizationDelegateRespondsToDidStabilize;               //@synthesize stabilizationDelegateRespondsToDidStabilize=_stabilizationDelegateRespondsToDidStabilize - In the implementation block
@property (assign,nonatomic) int trackID;                                                    //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) int dataTrackID;                                                //@synthesize dataTrackID=_dataTrackID - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) int fillMode;                                                   //@synthesize fillMode=_fillMode - In the implementation block
@property (nonatomic,retain) id<PVStabilizationDelegate> stabilizationDelegate;              //@synthesize stabilizationDelegate=_stabilizationDelegate - In the implementation block
@property (nonatomic,retain) id userContext;                                                 //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) CGSize clipNaturalSize;                                         //@synthesize clipNaturalSize=_clipNaturalSize - In the implementation block
+(id)newSourceTrackNodeWithStabilizationDelegate:(id)arg1 userContext:(id)arg2 trackID:(int)arg3 dataTrackID:(int)arg4 transform:(CGAffineTransform)arg5 clipNaturalSize:(CGSize)arg6 ;
+(id)newSourceTrackNode:(int)arg1 transform:(CGAffineTransform)arg2 cropRect:(CGRect)arg3 clipNaturalSize:(CGSize)arg4 ;
+(id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(CGSize)arg4 ;
+(id)newSourceTrackNodeWithStabilizationDelegate:(id)arg1 userContext:(id)arg2 trackID:(int)arg3 transform:(CGAffineTransform)arg4 clipNaturalSize:(CGSize)arg5 ;
-(id)init;
-(id)userContext;
-(int)fillMode;
-(void)setFillMode:(int)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(BOOL)isPortrait;
-(void)setUserContext:(id)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(void)loadIGNode:(HGRef<PVInstructionGraphContext>*)arg1 returnLoadedEffects:(id)arg2 ;
-(HGRef<HGNode>*)internalHGNodeForTime:(SCD_Struct_PV21)arg1 trackInputs:(const PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 igContext:(HGRef<PVInstructionGraphContext>*)arg4 ;
-(id)dotTreeLabel:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceTrackIDs;
-(BOOL)isPassthru;
-(void)unloadIGNode;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)setClipNaturalSize:(CGSize)arg1 ;
-(void)setDataTrackID:(int)arg1 ;
-(void)setStabilizationDelegate:(id<PVStabilizationDelegate>)arg1 ;
-(void)setStabilizationDelegateRespondsToDidStabilize:(BOOL)arg1 ;
-(id<PVStabilizationDelegate>)stabilizationDelegate;
-(BOOL)stabilizationDelegateRespondsToDidStabilize;
-(int)dataTrackID;
-(CGSize)clipNaturalSize;
@end

