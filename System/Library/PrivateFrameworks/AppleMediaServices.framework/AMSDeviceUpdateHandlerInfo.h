/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSDeviceMessengerFilter;

@interface AMSDeviceUpdateHandlerInfo : NSObject {

	AMSDeviceMessengerFilter* _filter;
	/*^block*/id _block;

}

@property (nonatomic,retain) AMSDeviceMessengerFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
-(id)block;
-(AMSDeviceMessengerFilter *)filter;
-(void)setFilter:(AMSDeviceMessengerFilter *)arg1 ;
-(void)setBlock:(id)arg1 ;
@end

