/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EspressoBrick.h>

@class NSArray, NSString;

@interface MLSineBrick : NSObject <EspressoBrick> {

	NSArray* _inputRanks;
	NSArray* _outputRanks;
	NSArray* _inputShapes;
	NSArray* _outputShapes;

}

@property (nonatomic,readonly) NSArray * inputRanks;                //@synthesize inputRanks=_inputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * outputRanks;               //@synthesize outputRanks=_outputRanks - In the implementation block
@property (nonatomic,readonly) NSArray * inputShapes;               //@synthesize inputShapes=_inputShapes - In the implementation block
@property (nonatomic,readonly) NSArray * outputShapes;              //@synthesize outputShapes=_outputShapes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParameters:(id)arg1 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(NSArray *)inputRanks;
-(NSArray *)outputRanks;
-(NSArray *)inputShapes;
-(NSArray *)outputShapes;
@end

