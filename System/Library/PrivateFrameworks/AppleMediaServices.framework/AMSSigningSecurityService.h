/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSDServiceBrokerProtocol;
@interface AMSSigningSecurityService : NSObject {

	id<AMSDServiceBrokerProtocol> _serviceBroker;

}

@property (nonatomic,readonly) id<AMSDServiceBrokerProtocol> serviceBroker;              //@synthesize serviceBroker=_serviceBroker - In the implementation block
-(id)init;
-(id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
-(id)handleResponse:(id)arg1 bag:(id)arg2 ;
-(id)initWithServiceBroker:(id)arg1 ;
-(id<AMSDServiceBrokerProtocol>)serviceBroker;
-(id)_handleResponse:(id)arg1 bag:(id)arg2 securityServicePromise:(id)arg3 onDenied:(/*^block*/id)arg4 ;
-(id)_headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 securityServicePromise:(id)arg4 onDenied:(/*^block*/id)arg5 ;
-(void)_handleSecurityServicePromise:(id)arg1 onConnected:(/*^block*/id)arg2 onDenied:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(id)_defaultSecurityServiceWithDelegate:(id)arg1 ;
@end
