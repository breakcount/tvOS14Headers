/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSArray, SAMLEvidence, NSString;

@interface SAMLAuthZDecision : SAMLBaseElement

@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) SAMLEvidence * evidence; 
@property (nonatomic,readonly) NSString * decision; 
@property (nonatomic,readonly) NSString * resource; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)actions;
-(NSString *)resource;
-(NSString *)decision;
-(SAMLEvidence *)evidence;
@end

