/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSFinanceAuthenticateResponse, AMSFinanceDialogResponse, AMSFinancePaymentSheetResponse, NSDictionary, AMSURLTaskInfo, ACAccount, NSArray, NSError, NSURL;

@interface AMSFinanceResponse : NSObject {

	AMSFinanceAuthenticateResponse* _cachedAuthenticateResponse;
	AMSFinanceDialogResponse* _cachedDialogResponse;
	AMSFinancePaymentSheetResponse* _cachedPaymentSheetResponse;
	long long _dialogKind;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;

}

@property (nonatomic,retain) AMSFinanceAuthenticateResponse * cachedAuthenticateResponse;              //@synthesize cachedAuthenticateResponse=_cachedAuthenticateResponse - In the implementation block
@property (nonatomic,retain) AMSFinanceDialogResponse * cachedDialogResponse;                          //@synthesize cachedDialogResponse=_cachedDialogResponse - In the implementation block
@property (nonatomic,retain) AMSFinancePaymentSheetResponse * cachedPaymentSheetResponse;              //@synthesize cachedPaymentSheetResponse=_cachedPaymentSheetResponse - In the implementation block
@property (nonatomic,readonly) long long dialogKind;                                                   //@synthesize dialogKind=_dialogKind - In the implementation block
@property (nonatomic,retain) NSDictionary * responseDictionary;                                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;                                                //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (nonatomic,readonly) NSError * serverError; 
@property (nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
+(id)valueForProtocolKey:(id)arg1 inResponse:(id)arg2 ;
-(NSArray *)actions;
-(ACAccount *)account;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSArray *)pingURLs;
-(long long)dialogKind;
-(id)_valueForProtocolKey:(id)arg1 ;
-(NSURL *)versionMismatchURL;
-(NSError *)serverError;
-(AMSURLTaskInfo *)taskInfo;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(id)_performerForAuthenticate;
-(id)_performerForDialog;
-(id)_performerForPaymentSheet;
-(id)_performerForActionDictionary;
-(id)_performerForCreditDisplay;
-(AMSFinanceAuthenticateResponse *)cachedAuthenticateResponse;
-(void)setCachedAuthenticateResponse:(AMSFinanceAuthenticateResponse *)arg1 ;
-(AMSFinanceDialogResponse *)cachedDialogResponse;
-(void)setCachedDialogResponse:(AMSFinanceDialogResponse *)arg1 ;
-(AMSFinancePaymentSheetResponse *)cachedPaymentSheetResponse;
-(void)setCachedPaymentSheetResponse:(AMSFinancePaymentSheetResponse *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(BOOL)supportedProtocolVersion;
@end

