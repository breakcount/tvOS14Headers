/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph-Structs.h>
#import <MPSCore/MPSKernelDAGObject.h>

@interface StitchedRegionDAG : MPSKernelDAGObject {

	unordered_map<mlir::Operation *, int, std::__1::hash<mlir::Operation *>, std::__1::equal_to<mlir::Operation *>, std::__1::allocator<std::__1::pair<mlir::Operation *const, int> > >* _placeholderOpToUsesInStitchedRegionMap;
	vector<mlir::Operation *, std::__1::allocator<mlir::Operation *> >* _placeholdersInDAG;

}
-(void)dealloc;
@end

