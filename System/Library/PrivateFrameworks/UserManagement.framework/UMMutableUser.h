/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UMUser.h>

@class NSString, NSURL, NSDate, NSArray, NSError;

@interface UMMutableUser : UMUser

@property (assign,nonatomic) unsigned uid; 
@property (assign,nonatomic) unsigned gid; 
@property (nonatomic,copy) NSString * alternateDSID; 
@property (nonatomic,copy) NSURL * homeDirectoryURL; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSURL * photoURL; 
@property (nonatomic,copy) NSString * userAuxiliaryString; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * lastLoginDate; 
@property (nonatomic,copy) NSDate * lastRemoteAuthDate; 
@property (assign,nonatomic) unsigned long long passcodeType; 
@property (assign,nonatomic) BOOL isLoginUser; 
@property (assign,nonatomic) BOOL isAuditor; 
@property (assign,nonatomic) BOOL isDisabled; 
@property (assign,nonatomic) BOOL isTransientUser; 
@property (assign,nonatomic) unsigned long long passcodeLockGracePeriod; 
@property (nonatomic,copy) NSArray * languages; 
@property (assign,nonatomic) BOOL hasManagedCredentials; 
@property (assign,nonatomic) unsigned long long dataQuota; 
@property (assign,nonatomic) unsigned long long dataUsed; 
@property (assign,nonatomic) BOOL hasDataToSync; 
@property (nonatomic,retain) NSError * errorCausingLogout; 
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(id*)arg1 ;
@end

