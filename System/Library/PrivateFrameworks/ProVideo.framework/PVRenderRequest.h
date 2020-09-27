/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSArray;

@interface PVRenderRequest : NSObject {

	BOOL _highQuality;
	int _priority;
	int _gcdPriority;
	int _gpuPriority;
	unsigned _outputCVPixelBufferFormat;
	unsigned _parentCode;
	unsigned _childCode;
	NSArray* _outputNodes;
	id _userContext;
	CGSize _outputSize;
	SCD_Struct_PV21 _time;

}

@property (nonatomic,readonly) NSArray * outputNodes;                         //@synthesize outputNodes=_outputNodes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV21 time;                          //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                             //@synthesize outputSize=_outputSize - In the implementation block
@property (assign,nonatomic) int priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) int gcdPriority;                                 //@synthesize gcdPriority=_gcdPriority - In the implementation block
@property (assign,nonatomic) int gpuPriority;                                 //@synthesize gpuPriority=_gpuPriority - In the implementation block
@property (assign,nonatomic) BOOL highQuality;                                //@synthesize highQuality=_highQuality - In the implementation block
@property (nonatomic,retain) id userContext;                                  //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) unsigned outputCVPixelBufferFormat;              //@synthesize outputCVPixelBufferFormat=_outputCVPixelBufferFormat - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                             //@synthesize parentCode=_parentCode - In the implementation block
@property (assign,nonatomic) unsigned childCode;                              //@synthesize childCode=_childCode - In the implementation block
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(SCD_Struct_PV21)time;
-(id)userContext;
-(void)setHighQuality:(BOOL)arg1 ;
-(BOOL)highQuality;
-(void)setUserContext:(id)arg1 ;
-(CGSize)outputSize;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(unsigned)childCode;
-(void)setChildCode:(unsigned)arg1 ;
-(id)initWithOutputs:(id)arg1 atTime:(SCD_Struct_PV21)arg2 outputSize:(CGSize)arg3 ;
-(NSArray *)outputNodes;
-(int)gcdPriority;
-(void)setGcdPriority:(int)arg1 ;
-(int)gpuPriority;
-(void)setGpuPriority:(int)arg1 ;
-(unsigned)outputCVPixelBufferFormat;
-(void)setOutputCVPixelBufferFormat:(unsigned)arg1 ;
@end

