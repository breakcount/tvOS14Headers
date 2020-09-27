/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REActivityRelevanceProviderManagerProperties.h>

@class NSString;

@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties> {

	float _activeEnergy;
	float _exerciseTime;
	float _standHour;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float activeEnergy; 
@property (nonatomic,readonly) float exerciseTime; 
@property (nonatomic,readonly) float standHour; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)resume;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(float)activeEnergy;
-(float)exerciseTime;
-(float)standHour;
@end

