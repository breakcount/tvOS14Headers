/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libamsupport.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

@end
