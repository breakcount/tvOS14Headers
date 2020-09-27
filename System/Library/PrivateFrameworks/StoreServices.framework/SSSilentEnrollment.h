/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSSilentEnrollmentContext, NSString;

@interface SSSilentEnrollment : SSRequest <SSXPCCoding> {

	SSSilentEnrollmentContext* _context;

}

@property (retain) SSSilentEnrollmentContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SSSilentEnrollmentContext *)context;
-(void)setContext:(SSSilentEnrollmentContext *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithSilentEnrollmentContext:(id)arg1 ;
@end
