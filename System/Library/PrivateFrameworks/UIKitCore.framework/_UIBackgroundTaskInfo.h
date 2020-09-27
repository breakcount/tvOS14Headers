/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface _UIBackgroundTaskInfo : NSObject {

	unsigned long long _taskId;
	/*^block*/id _expireHandler;
	BKSProcessAssertion* _processAssertion;
	NSString* _taskName;
	long long _creationTime;
	BOOL _alreadyWarnedAboutExpiration;

}
+(id)backgroundTaskAssertionQueue;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(id)initWithProcessAssertion:(id)arg1 taskName:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)fireExpirationHandler;
@end

