/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface AFFuture : NSObject {

	NSObject*<OS_dispatch_group> _group;
	id _value;

}
-(id)initAndGetSetterBlock:(/*^block*/id*)arg1 ;
-(id)waitForValue:(unsigned long long)arg1 ;
@end

