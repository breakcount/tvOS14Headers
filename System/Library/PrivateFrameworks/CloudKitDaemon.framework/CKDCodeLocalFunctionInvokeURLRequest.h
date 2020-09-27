/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest {

	/*^block*/id _serializedResultsCallback;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedParameters;
	NSURL* _resolvedBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                      //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSData * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (nonatomic,copy) NSURL * resolvedBaseURL;                      //@synthesize resolvedBaseURL=_resolvedBaseURL - In the implementation block
@property (nonatomic,copy) id serializedResultsCallback;                 //@synthesize serializedResultsCallback=_serializedResultsCallback - In the implementation block
-(id)url;
-(NSString *)serviceName;
-(NSString *)functionName;
-(long long)databaseScope;
-(void)setServiceName:(NSString *)arg1 ;
-(long long)serverType;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSURL *)resolvedBaseURL;
-(void)setResolvedBaseURL:(NSURL *)arg1 ;
-(long long)partitionType;
-(id)additionalHeaderValues;
-(id)requestBodyStream;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(Class)expectedResponseClass;
-(BOOL)parsingStandaloneMessage;
-(BOOL)shouldCompressBody;
-(BOOL)allowsAnonymousAccount;
-(Class)requestMessageClass;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(id)serializedResultsCallback;
-(id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 resolvedBaseURL:(id)arg5 ;
-(void)setSerializedResultsCallback:(id)arg1 ;
@end

