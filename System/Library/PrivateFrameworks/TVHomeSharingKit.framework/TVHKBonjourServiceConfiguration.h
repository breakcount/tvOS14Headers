/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVHKBonjourServiceConfiguration : NSObject <NSCopying> {

	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;

}

@property (nonatomic,copy) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceDomain;              //@synthesize serviceDomain=_serviceDomain - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceDomain;
-(void)setServiceDomain:(NSString *)arg1 ;
-(id)initWithServiceName:(id)arg1 serviceTyoe:(id)arg2 serviceDomain:(id)arg3 ;
@end

