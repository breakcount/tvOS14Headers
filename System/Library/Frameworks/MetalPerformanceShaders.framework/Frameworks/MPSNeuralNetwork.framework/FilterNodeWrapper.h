/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FilterNodeWrapper : NSObject <NSSecureCoding> {

	FilterGraphNode* node;

}
+(BOOL)supportsSecureCoding;
+(id)wrapperWithFilterNode:(FilterGraphNode*)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FilterGraphNode*)node;
-(id)initWithFilterNode:(FilterGraphNode*)arg1 ;
@end

