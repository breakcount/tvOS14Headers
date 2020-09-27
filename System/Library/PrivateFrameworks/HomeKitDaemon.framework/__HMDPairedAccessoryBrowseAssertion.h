/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFAssertion.h>

@class HMDAccessoryBrowser;

@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion {

	HMDAccessoryBrowser* _accessoryBrowser;

}

@property (__weak,readonly) HMDAccessoryBrowser * accessoryBrowser;              //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(HMDAccessoryBrowser *)accessoryBrowser;
-(id)initWithAccessoryBrowser:(id)arg1 reason:(id)arg2 ;
@end
