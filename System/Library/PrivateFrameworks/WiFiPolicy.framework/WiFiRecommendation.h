/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WiFiRecommendation
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) id<WiFiCandidateNetwork> network; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) id<WiFiScannedNetwork> scannedNetwork; 
@property (nonatomic,readonly) BOOL unwantedNetworkName; 
@required
-(long long)priority;
-(id<WiFiCandidateNetwork>)network;
-(NSString *)SSID;
-(id<WiFiScannedNetwork>)scannedNetwork;
-(BOOL)unwantedNetworkName;

@end

