/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString, NSDictionary, AALoginResponseAppleAccountInfo, AALoginResponseiCloudTokens, AALoginResponseDataclasses;

@interface AALoginAccountResponse : AAResponse {

	NSNumber* _status;
	NSString* _statusMessage;
	NSDictionary* _responseForDelegates;
	NSString* _dsid;
	AALoginResponseAppleAccountInfo* _appleAccountInfo;
	AALoginResponseiCloudTokens* _iCloudTokens;
	AALoginResponseDataclasses* _dataclasses;

}

@property (nonatomic,readonly) NSNumber * status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * statusMessage;                                        //@synthesize statusMessage=_statusMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseForDelegates;                             //@synthesize responseForDelegates=_responseForDelegates - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) AALoginResponseAppleAccountInfo * appleAccountInfo;              //@synthesize appleAccountInfo=_appleAccountInfo - In the implementation block
@property (nonatomic,readonly) AALoginResponseiCloudTokens * iCloudTokens;                      //@synthesize iCloudTokens=_iCloudTokens - In the implementation block
@property (nonatomic,readonly) AALoginResponseDataclasses * dataclasses;                        //@synthesize dataclasses=_dataclasses - In the implementation block
-(NSNumber *)status;
-(NSString *)dsid;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)statusMessage;
-(void)_parseResponse:(long long)arg1 responseBody:(id)arg2 ;
-(NSDictionary *)responseForDelegates;
-(id)responseParametersForServiceIdentifier:(id)arg1 ;
-(id)initWithHttpStatus:(long long)arg1 responseBody:(id)arg2 ;
-(id)convertToProvisioningResponse;
-(id)convertToLoginDelegatesResponse;
-(AALoginResponseAppleAccountInfo *)appleAccountInfo;
-(AALoginResponseiCloudTokens *)iCloudTokens;
-(AALoginResponseDataclasses *)dataclasses;
@end

