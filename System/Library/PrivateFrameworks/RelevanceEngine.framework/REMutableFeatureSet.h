/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REFeatureSet.h>

@interface REMutableFeatureSet : REFeatureSet
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithFeature:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(void)addFeature:(id)arg1 ;
-(void)intersetFeatureSet:(id)arg1 ;
-(void)minusFeatureSet:(id)arg1 ;
-(void)unionFeatureSet:(id)arg1 ;
-(void)removeFeature:(id)arg1 ;
-(void)removeAllFeatures;
@end

