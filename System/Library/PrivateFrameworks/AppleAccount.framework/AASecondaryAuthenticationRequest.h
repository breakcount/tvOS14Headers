/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {

	NSString* _primaryToken;
	NSString* _dsid;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithDSID:(id)arg1 primaryToken:(id)arg2 ;
@end

