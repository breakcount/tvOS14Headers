/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AKDeveloperTeam : NSObject <NSSecureCoding> {

	NSString* _userIdentifier;
	NSString* _teamID;
	NSString* _privateEmail;
	NSDictionary* _apps;

}

@property (nonatomic,copy) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamID;                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * privateEmail;                //@synthesize privateEmail=_privateEmail - In the implementation block
@property (nonatomic,copy) NSDictionary * apps;                    //@synthesize apps=_apps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userIdentifier;
-(NSString *)teamID;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSDictionary *)apps;
-(void)setApps:(NSDictionary *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(id)initWithResponseInfo:(id)arg1 ;
-(NSString *)privateEmail;
-(void)setPrivateEmail:(NSString *)arg1 ;
@end

