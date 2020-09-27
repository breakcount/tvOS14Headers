/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RETrainingSimulationClientDelegate.h>

@class RETrainingSimulationClient, NSString;

@interface RETrainingSimulator : NSObject <RETrainingSimulationClientDelegate> {

	RETrainingSimulationClient* _client;
	NSString* _targetProcessName;
	NSString* _relevanceEngineName;

}

@property (nonatomic,readonly) NSString * targetProcessName;                //@synthesize targetProcessName=_targetProcessName - In the implementation block
@property (nonatomic,readonly) NSString * relevanceEngineName;              //@synthesize relevanceEngineName=_relevanceEngineName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allElements;
-(id)availableRelevanceEngines;
-(void)trainingSimulationClientWasInterrupted:(id)arg1 ;
-(void)trainingSimulationClientWasInvalidated:(id)arg1 ;
-(id)initWithTargetProcess:(id)arg1 relevanceEngine:(id)arg2 ;
-(void)createElementFromDescription:(id)arg1 ;
-(BOOL)performCommand:(id)arg1 withOptions:(id)arg2 ;
-(id)allElementIdentifiers;
-(BOOL)runActionOfElementWithDescription1:(id)arg1 ;
-(id)storedDiagnosticLogsPath;
-(id)encodedObjectAtPath:(id)arg1 ;
-(NSString *)targetProcessName;
-(NSString *)relevanceEngineName;
@end

