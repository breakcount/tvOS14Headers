/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFWorkflowUser.h>

@class NSString, NSURL;

@interface WFMutableWorkflowUser : WFWorkflowUser {

	NSString* email;
	NSString* fullName;
	NSString* twitter;
	NSURL* websiteURL;
	NSURL* profileImageURL;
	long long mainIdentity;

}

@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * twitter; 
@property (nonatomic,retain) NSURL * websiteURL; 
@property (nonatomic,retain) NSURL * profileImageURL; 
@property (assign,nonatomic) long long mainIdentity; 
-(long long)mainIdentity;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(NSString *)twitter;
-(NSURL *)profileImageURL;
-(void)setTwitter:(NSString *)arg1 ;
-(void)setProfileImageURL:(NSURL *)arg1 ;
-(void)setMainIdentity:(long long)arg1 ;
@end

