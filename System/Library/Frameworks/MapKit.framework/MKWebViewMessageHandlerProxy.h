/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@protocol WKScriptMessageHandler;
@class NSString;

@interface MKWebViewMessageHandlerProxy : NSObject <WKScriptMessageHandler> {

	id<WKScriptMessageHandler> _target;

}

@property (assign,nonatomic,__weak) id<WKScriptMessageHandler> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<WKScriptMessageHandler>)arg1 ;
-(id<WKScriptMessageHandler>)target;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
@end

