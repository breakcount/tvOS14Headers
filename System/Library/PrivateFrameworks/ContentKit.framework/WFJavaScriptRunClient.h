/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListenerEndpoint;

@interface WFJavaScriptRunClient : NSObject {

	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithEndpoint:(id)arg1 ;
-(void)runJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
