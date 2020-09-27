/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFResidentDeviceStatusDetailsItemProvider : HFItemProvider {

	HMHome* _home;
	/*^block*/id _filter;
	NSMutableSet* _residentDeviceItems;

}

@property (nonatomic,retain) NSMutableSet * residentDeviceItems;              //@synthesize residentDeviceItems=_residentDeviceItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                         //@synthesize filter=_filter - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)filter;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(NSMutableSet *)residentDeviceItems;
-(id)invalidationReasons;
-(id)reloadItems;
-(void)setResidentDeviceItems:(NSMutableSet *)arg1 ;
@end

