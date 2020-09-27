/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSHandle, MPSImageAllocator;
@class MPSNNFilterNode;

@interface MPSNNImageNode : NSObject {

	id<MPSHandle> _handle;
	MPSNNFilterNode* _parent;
	id<MPSImageAllocator> _imageAllocator;
	unsigned long long _clientCount;
	unsigned long long _format;
	BOOL _exportFromGraph;
	BOOL _synchronize;
	BOOL _stopGradient;
	BOOL _initializedWithParent;

}

@property (nonatomic,retain) id<MPSHandle> handle;                              //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) unsigned long long format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) id<MPSImageAllocator> imageAllocator;              //@synthesize imageAllocator=_imageAllocator - In the implementation block
@property (assign,nonatomic) BOOL exportFromGraph;                              //@synthesize exportFromGraph=_exportFromGraph - In the implementation block
@property (assign,nonatomic) BOOL synchronizeResource;                          //@synthesize synchronize=_synchronize - In the implementation block
@property (assign,nonatomic) BOOL stopGradient;                                 //@synthesize stopGradient=_stopGradient - In the implementation block
+(id)nodeWithHandle:(id)arg1 ;
+(id)exportedNodeWithHandle:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(id<MPSHandle>)handle;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(id)initWithHandle:(id)arg1 ;
-(id)debugQuickLookObject;
-(id<MPSImageAllocator>)imageAllocator;
-(id)initWithParent:(id)arg1 ;
-(void)setImageAllocator:(id<MPSImageAllocator>)arg1 ;
-(void)setHandle:(id<MPSHandle>)arg1 ;
-(BOOL)exportFromGraph;
-(void)setExportFromGraph:(BOOL)arg1 ;
-(BOOL)synchronizeResource;
-(void)setSynchronizeResource:(BOOL)arg1 ;
-(BOOL)stopGradient;
-(void)setStopGradient:(BOOL)arg1 ;
@end

