/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTask.h>

@class NSUUID, AXMVisionPipelineContext, AXMSourceNode;

@interface _AXMVisionEngineAnalysisTask : AXMTask {

	NSUUID* _identifier;
	AXMVisionPipelineContext* _context;
	AXMSourceNode* _source;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AXMVisionPipelineContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXMSourceNode * source;                          //@synthesize source=_source - In the implementation block
+(id)itemWithSource:(id)arg1 context:(id)arg2 ;
-(NSUUID *)identifier;
-(AXMSourceNode *)source;
-(void)setSource:(AXMSourceNode *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(AXMVisionPipelineContext *)context;
-(void)setContext:(AXMVisionPipelineContext *)arg1 ;
-(id)initWithSource:(id)arg1 context:(id)arg2 ;
@end
