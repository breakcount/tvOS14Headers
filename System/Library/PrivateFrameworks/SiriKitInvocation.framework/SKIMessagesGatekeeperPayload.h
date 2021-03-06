/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SKIDirectInvocationPayload;

@interface SKIMessagesGatekeeperPayload : NSObject {

	NSString* _appBundleId;

}

@property (copy) NSString * appBundleId;                                                 //@synthesize appBundleId=_appBundleId - In the implementation block
@property (retain,readonly) SKIDirectInvocationPayload * invocationPayload; 
+(BOOL)supports:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)initWithAppBundleId:(id)arg1 ;
-(SKIDirectInvocationPayload *)invocationPayload;
@end

