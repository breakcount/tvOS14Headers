/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OspreyRPC;
@class NSString;

@interface OspreyMethodCall : NSObject {

	NSString* _methodName;
	id<OspreyRPC> _channel;
	/*^block*/id _serializeRequest;
	/*^block*/id _deserializeResponse;
	/*^block*/id _defaultRequestBuilder;

}
-(id)callWithRequestBuilder:(/*^block*/id)arg1 messageReceived:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMethodName:(id)arg1 channel:(id)arg2 serializeRequest:(/*^block*/id)arg3 deserializeResponse:(/*^block*/id)arg4 defaultRequestBuilder:(/*^block*/id)arg5 ;
-(id)callWithMessageReceived:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

