/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemGroupItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@protocol HFCharacteristicValueSource;
@class HMAccessoryNetworkProtectionGroup, NSSet, NSString;

@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <HFHomeKitItemProtocol> {

	HMAccessoryNetworkProtectionGroup* _group;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) HMAccessoryNetworkProtectionGroup * group;                //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSSet * profiles; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(HMAccessoryNetworkProtectionGroup *)group;
-(NSSet *)profiles;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithGroup:(id)arg1 valueSource:(id)arg2 ;
@end

