/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handleNewFlow:(id)arg1 ;
-(void)handleRulesChanged;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3 ;
-(id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3 ;
-(id)handleInboundDataCompleteForFlow:(id)arg1 ;
-(id)handleOutboundDataCompleteForFlow:(id)arg1 ;
-(id)handleRemediationForFlow:(id)arg1 ;
-(void)resumeFlow:(id)arg1 withVerdict:(id)arg2 ;
-(void)updateFlow:(id)arg1 usingVerdict:(id)arg2 forDirection:(long long)arg3 ;
@end

