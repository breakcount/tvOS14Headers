/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VUIFeatureManager : NSObject {

	NSDictionary* _features;

}

@property (nonatomic,retain) NSDictionary * features;              //@synthesize features=_features - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSDictionary *)features;
-(void)setFeatures:(NSDictionary *)arg1 ;
-(BOOL)isFeatureEnabled:(id)arg1 ;
-(void)setFeatureValue:(BOOL)arg1 forFeature:(id)arg2 ;
-(id)_allFeatures;
-(id)osFeatureFlagsJSON;
-(id)availableFeatures;
@end

