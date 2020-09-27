/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _organizationDisplayName;
	NSString* _organizationType;

}

@property (nonatomic,copy) NSString * organizationIdentifier;               //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * organizationDisplayName;              //@synthesize organizationDisplayName=_organizationDisplayName - In the implementation block
@property (nonatomic,copy) NSString * organizationType;                     //@synthesize organizationType=_organizationType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSString *)organizationType;
-(NSString *)organizationDisplayName;
-(void)setOrganizationDisplayName:(NSString *)arg1 ;
-(void)setOrganizationType:(NSString *)arg1 ;
@end

