/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <libobjc.A.dylib/OS_sec_certificate.h>

@class NSString;

@interface SecConcrete_sec_certificate : NSObject <OS_sec_certificate> {

	SecCertificateRef certificate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
@end

