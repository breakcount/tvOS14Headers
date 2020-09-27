/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest {

	NSArray* _infoKeys;

}

@property (nonatomic,copy) NSArray * infoKeys;              //@synthesize infoKeys=_infoKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)allPlatformSecurityInfoKeys;
+(id)tvOSSecurityInfoKeys;
+(id)currentPlatformSecurityInfoKeys;
+(id)iOSSecurityInfoKeys;
+(id)macOSSecurityInfoKeys;
+(id)watchOSSecurityInfoKeys;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)infoKeys;
-(void)setInfoKeys:(NSArray *)arg1 ;
@end

