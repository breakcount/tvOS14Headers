/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLClassifier.h>

@protocol MLClassifier <MLModeling>
@required
-(id)classLabels;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end


@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLClassifier : MLModel <MLClassifier>

@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)classLabels;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)classifierResultFromOutputFeatures:(id)arg1 error:(id*)arg2 ;
@end

