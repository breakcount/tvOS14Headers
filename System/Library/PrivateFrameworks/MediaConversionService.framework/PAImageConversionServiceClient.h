/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSXPCConnection *)serviceConnection;
-(void)setupServiceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)sendRequestWithOptions:(id)arg1 sourceURLCollection:(id)arg2 destinationURLCollection:(id)arg3 jobIdentifier:(id)arg4 attemptCount:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

