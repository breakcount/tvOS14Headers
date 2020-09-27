/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters {

	BOOL _browsing;

}

@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;              //@synthesize browsing=_browsing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)signature;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(id)initWithEntitlements:(unsigned long long)arg1 browsing:(BOOL)arg2 ;
@end
