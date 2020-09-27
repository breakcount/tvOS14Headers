/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFOtherNetworkProvider <WFCredentialsProvider>
@property (nonatomic,copy,readonly) NSString * SSID; 
@property (nonatomic,readonly) long long securityMode; 
@property (assign,nonatomic) BOOL joining; 
@property (assign,nonatomic) NSString * activityString; 
@property (nonatomic,readonly) id WAPIIdentity; 
@property (nonatomic,readonly) id WAPIRootCertificate; 
@optional
-(long long)securityMode;
-(void)setActivityString:(id)arg1;
-(NSString *)activityString;
-(void)setJoining:(BOOL)arg1;
-(id)WAPIIdentity;
-(id)WAPIRootCertificate;
-(BOOL)joining;

@required
-(NSString *)SSID;

@end

