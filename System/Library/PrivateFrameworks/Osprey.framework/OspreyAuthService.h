/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OspreyGRPCChannel, NSUUID;

@interface OspreyAuthService : NSObject {

	OspreyGRPCChannel* _channel;
	NSUUID* _authUUID;
	unsigned long long _authStrategyVersion;

}
-(id)initWithChannel:(id)arg1 authStrategyVersion:(unsigned long long)arg2 ;
-(void)certificateDataWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)createClientSessionWithData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

