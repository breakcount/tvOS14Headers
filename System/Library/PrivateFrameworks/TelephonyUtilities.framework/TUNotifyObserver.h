/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUNotifyObserver.h>

@protocol TUNotifyObserver <NSObject>
@property (nonatomic,copy) id callback; 
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isObserving,nonatomic,readonly) BOOL observing; 
@required
-(unsigned long long)state;
-(id)callback;
-(void)setCallback:(/*^block*/id)arg1;
-(BOOL)isObserving;
-(void)beginObserving;
-(void)endObserving;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TUNotifyObserver : NSObject <TUNotifyObserver> {

	int _token;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _notificationName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * notificationName;                        //@synthesize notificationName=_notificationName - In the implementation block
@property (assign,nonatomic) int token;                                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id callback;                                        //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isObserving,nonatomic,readonly) BOOL observing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)state;
-(int)token;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setToken:(int)arg1 ;
-(BOOL)isObserving;
-(NSString *)notificationName;
-(void)_endObserving;
-(void)beginObserving;
-(void)endObserving;
-(id)initWithNotificationName:(id)arg1 queue:(id)arg2 ;
-(void)setNotificationName:(NSString *)arg1 ;
@end

