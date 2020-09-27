/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, VSOptional, NSOperationQueue, VSDevice;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _subqueue;
	VSDevice* _currentDevice;

}

@property (nonatomic,retain) VSOptional * result;                      //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * subqueue;              //@synthesize subqueue=_subqueue - In the implementation block
@property (nonatomic,retain) VSDevice * currentDevice;                 //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                  //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(VSDevice *)currentDevice;
-(void)setCurrentDevice:(VSDevice *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)executionDidBegin;
-(NSOperationQueue *)subqueue;
-(void)setSubqueue:(NSOperationQueue *)arg1 ;
@end
