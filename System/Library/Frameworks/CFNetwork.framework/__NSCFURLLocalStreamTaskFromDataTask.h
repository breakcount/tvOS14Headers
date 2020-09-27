/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLLocalStreamTask.h>
#import <libobjc.A.dylib/__NSCFURLSessionConnectionDelegate.h>

@class NSMutableArray, NSString;

@interface __NSCFURLLocalStreamTaskFromDataTask : __NSCFURLLocalStreamTask <__NSCFURLSessionConnectionDelegate> {

	CFReadStreamRef _myReadToHisWrite;
	BOOL _myReadToHisWriteEOF;
	BOOL _myReadToHisWriteSignaled;
	SCD_Struct_NS25 _myReadToHisWriteError;
	CFWriteStreamRef _myWriteToHisRead;
	BOOL _myWriteToHisReadEOF;
	BOOL _myWriteToHisReadSignaled;
	SCD_Struct_NS25 _myWriteToHisReadError;
	NSMutableArray* _myWriteToHisReadWork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectionWillFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4 ;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2 ;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2 ;
-(void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr<TransportConnection>*)arg2 extraBytes:(id)arg3 ;
-(id)initWithTask:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(/*^block*/id)arg4 ;
@end

