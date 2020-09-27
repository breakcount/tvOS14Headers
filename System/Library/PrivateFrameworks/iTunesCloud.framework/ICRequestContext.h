/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICNetworkConstraints, ICClientInfo, ICDeviceInfo, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned _allowsMutation : 1;
	ICNetworkConstraints* _networkConstraints;
	ICClientInfo* _clientInfo;
	ICDeviceInfo* _deviceInfo;
	ICURLResponseAuthenticationProvider* _authenticationProvider;

}

@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                                            //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) ICDeviceInfo * deviceInfo;                                                 //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent; 
@property (nonatomic,readonly) ICURLResponseAuthenticationProvider * authenticationProvider;              //@synthesize authenticationProvider=_authenticationProvider - In the implementation block
@property (nonatomic,copy,readonly) ICNetworkConstraints * networkConstraints;                            //@synthesize networkConstraints=_networkConstraints - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)userAgent;
-(ICClientInfo *)clientInfo;
-(void)setClientInfo:(ICClientInfo *)arg1 ;
-(ICNetworkConstraints *)networkConstraints;
-(void)setNetworkConstraints:(ICNetworkConstraints *)arg1 ;
-(ICDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(ICDeviceInfo *)arg1 ;
-(void)setAuthenticationProvider:(ICURLResponseAuthenticationProvider *)arg1 ;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_allowsMutation;
-(ICURLResponseAuthenticationProvider *)authenticationProvider;
-(id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2 ;
-(id)_webkitUserAgentVersion;
-(id)initWithClientInfo:(id)arg1 ;
@end

