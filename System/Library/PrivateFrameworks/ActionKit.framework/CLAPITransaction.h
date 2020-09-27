/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLConnection, NSMutableData, NSHTTPURLResponse, NSString;

@interface CLAPITransaction : NSObject {

	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _receivedData;
	NSHTTPURLResponse* _response;
	long long _requestType;
	NSString* _identifier;
	id _userInfo;
	id _internalContext;

}

@property (nonatomic,retain) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
@property (assign,nonatomic) long long requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id internalContext;                        //@synthesize internalContext=_internalContext - In the implementation block
+(id)transaction;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(NSString *)identifier;
-(NSURLRequest *)request;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)response;
-(void)setUserInfo:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(long long)requestType;
-(void)setRequestType:(long long)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(id)internalContext;
-(void)setInternalContext:(id)arg1 ;
@end

