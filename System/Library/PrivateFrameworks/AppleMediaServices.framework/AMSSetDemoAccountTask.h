/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSProcessInfo, NSString;

@interface AMSSetDemoAccountTask : AMSTask {

	AMSProcessInfo* _clientInfo;
	NSString* _password;
	NSString* _username;

}

@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * password;                      //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * username;                      //@synthesize username=_username - In the implementation block
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)performTask;
@end

