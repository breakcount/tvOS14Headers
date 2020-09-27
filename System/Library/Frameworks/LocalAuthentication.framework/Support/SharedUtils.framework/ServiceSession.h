/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol ServiceSession <NSObject>
@property (nonatomic,readonly) NSUUID * sessionID; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) id<Service> service; 
@property (nonatomic,readonly) NSString * clientID; 
@required
-(NSString *)serviceType;
-(NSUUID *)sessionID;
-(id<Service>)service;
-(NSString *)clientID;

@end

