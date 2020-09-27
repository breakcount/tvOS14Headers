/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSXPCListenerDelegate;
@class NSString;

@interface _PASXPCListener : NSObject {

	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	NSString* _displayName;

}

@property (nonatomic,readonly) id<NSXPCListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
-(id)init;
-(id<NSXPCListenerDelegate>)delegate;
-(NSString *)displayName;
-(NSString *)serviceName;
-(id)initWithDelegate:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3 ;
@end
