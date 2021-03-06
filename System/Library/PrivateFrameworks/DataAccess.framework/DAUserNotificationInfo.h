/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DAUserNotificationInfo : NSObject {

	NSString* _groupIdentifier;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy) NSString * groupIdentifier;                                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

