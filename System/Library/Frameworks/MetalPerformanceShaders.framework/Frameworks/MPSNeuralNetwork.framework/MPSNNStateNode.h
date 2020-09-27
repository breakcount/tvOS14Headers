/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSHandle;
@class MPSNNFilterNode;

@interface MPSNNStateNode : NSObject {

	id<MPSHandle> _handle;
	MPSNNFilterNode* _parent;
	unsigned long long _clientCount;
	BOOL _synchronize;
	BOOL _exportFromGraph;
	BOOL _initializedWithParent;

}

@property (nonatomic,retain) id<MPSHandle> handle;                  //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL exportFromGraph;                  //@synthesize exportFromGraph=_exportFromGraph - In the implementation block
@property (assign,nonatomic) BOOL synchronizeResource;              //@synthesize synchronize=_synchronize - In the implementation block
-(id)debugDescription;
-(void)dealloc;
-(id<MPSHandle>)handle;
-(id)debugQuickLookObject;
-(id)initWithParent:(id)arg1 ;
-(void)setHandle:(id<MPSHandle>)arg1 ;
-(BOOL)exportFromGraph;
-(void)setExportFromGraph:(BOOL)arg1 ;
-(BOOL)synchronizeResource;
-(void)setSynchronizeResource:(BOOL)arg1 ;
@end

