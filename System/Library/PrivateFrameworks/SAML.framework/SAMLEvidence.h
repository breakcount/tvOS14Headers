/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic,readonly) NSString * assertionIdRef; 
@property (nonatomic,readonly) NSString * assertionURIRef; 
@property (nonatomic,readonly) SAMLAssertion * assertion; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(NSString *)assertionIdRef;
-(NSString *)assertionURIRef;
@end

