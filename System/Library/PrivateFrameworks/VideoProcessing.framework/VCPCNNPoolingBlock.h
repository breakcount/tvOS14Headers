/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNPoolingBlock : VCPCNNBlock {

	int _px;
	int _py;
	int _chunk;

}
+(id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
-(BOOL)useGPU;
-(BOOL)supportGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)forward;
-(id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3 ;
@end

