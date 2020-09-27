/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDRequestDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASDRequestObserver, ASDRequestProxy;
@class NSUUID;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding> {

	id<ASDRequestObserver> _observer;
	NSUUID* _requestID;
	id<ASDRequestProxy> _proxy;

}

@property (retain) id<ASDRequestProxy> proxy;                    //@synthesize proxy=_proxy - In the implementation block
@property (__weak) id<ASDRequestObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSUUID * requestID;               //@synthesize requestID=_requestID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_sharedBroker;
+(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObserver:(id<ASDRequestObserver>)arg1 ;
-(void)setProxy:(id<ASDRequestProxy>)arg1 ;
-(id<ASDRequestProxy>)proxy;
-(id<ASDRequestObserver>)observer;
-(NSUUID *)requestID;
-(void)_startWithErrorHandler:(/*^block*/id)arg1 ;
-(void)receiveResponse:(id)arg1 ;
-(void)_callErrorHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_callErrorHandler:(/*^block*/id)arg1 withError:(id)arg2 orDefaultCode:(unsigned long long)arg3 ;
-(void)_notifyObserverOfCompletionWithError:(id)arg1 ;
-(void)_submitRequestWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_cancelWithErrorHandler:(/*^block*/id)arg1 ;
@end

