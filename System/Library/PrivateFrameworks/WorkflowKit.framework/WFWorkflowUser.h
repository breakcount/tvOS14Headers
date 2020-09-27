/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSUUID, NSString, NSURL, NSDate, NSNumber, NSDictionary;

@interface WFWorkflowUser : MTLModel <MTLJSONSerializing> {

	NSUUID* _identifier;
	NSString* _email;
	NSString* _fullName;
	NSString* _twitter;
	NSURL* _websiteURL;
	NSURL* _profileImageURL;
	NSDate* _dateJoined;
	NSNumber* _isAdmin;
	long long _mainIdentity;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * twitter;                               //@synthesize twitter=_twitter - In the implementation block
@property (nonatomic,readonly) NSURL * websiteURL;                               //@synthesize websiteURL=_websiteURL - In the implementation block
@property (nonatomic,readonly) NSURL * profileImageURL;                          //@synthesize profileImageURL=_profileImageURL - In the implementation block
@property (nonatomic,readonly) NSDate * dateJoined;                              //@synthesize dateJoined=_dateJoined - In the implementation block
@property (nonatomic,readonly) NSNumber * isAdmin;                               //@synthesize isAdmin=_isAdmin - In the implementation block
@property (nonatomic,readonly) long long mainIdentity;                           //@synthesize mainIdentity=_mainIdentity - In the implementation block
@property (nonatomic,readonly) NSString * websiteDisplayName; 
@property (nonatomic,readonly) NSString * twitterDisplayName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)mainIdentityJSONTransformer;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)identifier;
-(NSString *)displayName;
-(long long)mainIdentity;
-(NSString *)email;
-(NSString *)fullName;
-(NSURL *)websiteURL;
-(NSNumber *)isAdmin;
-(NSString *)twitter;
-(NSURL *)profileImageURL;
-(NSString *)websiteDisplayName;
-(NSString *)twitterDisplayName;
-(NSDate *)dateJoined;
@end

