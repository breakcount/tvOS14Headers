/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSArray;

@interface VSIdentityProviderAppsResponse : NSObject {

	NSArray* _providerAppAdamIDs;
	NSArray* _channelMappings;

}

@property (nonatomic,copy) NSArray * providerAppAdamIDs;              //@synthesize providerAppAdamIDs=_providerAppAdamIDs - In the implementation block
@property (nonatomic,copy) NSArray * channelMappings;                 //@synthesize channelMappings=_channelMappings - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProviderAppAdamIDs:(NSArray *)arg1 ;
-(void)setChannelMappings:(NSArray *)arg1 ;
-(NSArray *)providerAppAdamIDs;
-(NSArray *)channelMappings;
@end
