/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, BKSProcessAssertion;

@interface TVSSSearchAppServiceConnection : NSObject {

	NSXPCConnection* _connection;
	BKSProcessAssertion* _processAssertion;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
+(void)connectionWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)_init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BKSProcessAssertion *)processAssertion;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
@end

