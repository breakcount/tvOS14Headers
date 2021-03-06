/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMMessage.h>
#import <libobjc.A.dylib/ACMAuthenticationResponse.h>

@class NSString, NSDictionary, NSError;

@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authenticationResponse;
@end

