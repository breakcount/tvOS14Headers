/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneParameters.h>

@class FBSDisplayConfiguration, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSMutableSceneParameters : FBSSceneParameters {

	FBSDisplayConfiguration* _displayConfiguration;

}

@property (setter=_setSpecification:,nonatomic,copy) FBSSceneSpecification * specification; 
@property (nonatomic,copy) FBSSceneSettings * settings; 
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)setDisplay:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)_setSpecification:(id)arg1 ;
-(void)applyParameters:(id)arg1 ;
@end

