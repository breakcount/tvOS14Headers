/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFItemBuilderItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@protocol HFServiceLikeItem;
@class HMHome, HFAccessoryBuilder, HFItem, NSString, NSSet;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {

	HMHome* _home;
	HFAccessoryBuilder* _accessoryBuilder;
	HFItem*<HFServiceLikeItem> _accessoryItem;

}

@property (nonatomic,retain) HFAccessoryBuilder * accessoryBuilder;                      //@synthesize accessoryBuilder=_accessoryBuilder - In the implementation block
@property (nonatomic,retain) HFItem*<HFServiceLikeItem> accessoryItem;                   //@synthesize accessoryItem=_accessoryItem - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSSet * services; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSSet *)services;
-(HMHome *)home;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2 ;
-(void)setAccessoryBuilder:(HFAccessoryBuilder *)arg1 ;
-(void)setAccessoryItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFAccessoryBuilder *)accessoryBuilder;
-(HFItem*<HFServiceLikeItem>)accessoryItem;
@end
