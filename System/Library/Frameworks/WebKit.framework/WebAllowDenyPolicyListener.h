/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebAllowDenyPolicyListener <NSObject>
@required
-(void)deny;
-(void)allow;
-(void)denyOnlyThisRequest;
-(BOOL)shouldClearCache;

@end

