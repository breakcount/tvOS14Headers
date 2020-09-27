/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Osprey/OspreyDeviceAuthenticating.h>

@class OspreyConnectionPreferences, OspreyPreferences, NSDictionary, NSString;

@interface OspreyDeviceAuthentication : NSObject <OspreyDeviceAuthenticating> {

	OspreyConnectionPreferences* _connectionPreferences;
	OspreyPreferences* _allPreferences;
	NSDictionary* _strategies;
	unsigned long long _currentStrategyVersion;
	BOOL _hasCurrentStrategyVersion;

}

@property (assign,nonatomic) unsigned long long currentStrategyVersion;              //@synthesize currentStrategyVersion=_currentStrategyVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_currentStrategy;
-(unsigned long long)authenticationStrategyVersion;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(unsigned long long)currentStrategyVersion;
-(id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 allPreferences:(id)arg3 ;
-(void)setCurrentStrategyVersion:(unsigned long long)arg1 ;
@end

