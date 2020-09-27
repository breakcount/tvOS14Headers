/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject {

	AKAppleIDAuthenticationContext* _context;

}

@property (nonatomic,retain) AKAppleIDAuthenticationContext * context;              //@synthesize context=_context - In the implementation block
-(AKAppleIDAuthenticationContext *)context;
-(void)setContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1 ;
-(void)_revokeDeviceTrust;
-(void)handleResponseError:(id)arg1 ;
@end
