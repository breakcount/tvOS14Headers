/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLModel.h>
#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface NLPMLClassifierModel : NLModel <MLCustomModel> {

	MLModelDescription* _modelDescription;

}

@property (copy,readonly) MLModelDescription * modelDescription; 
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
@end

