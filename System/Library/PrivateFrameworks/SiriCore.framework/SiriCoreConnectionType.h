/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(id)description;
-(long long)technology;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)isWWAN;
-(BOOL)isEdge;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

