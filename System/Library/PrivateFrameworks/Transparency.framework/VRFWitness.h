/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class NSObject, TransparencyVRFVerifier, NSData;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyVRFVerifier * verifier; 
@property (retain) NSData * message; 
@property (retain) NSData * salt; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSData * output; 
@property (nonatomic,copy) NSData * proof; 
+(id)descriptor;
-(NSData *)message;
-(void)setMessage:(NSData *)arg1 ;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencyVRFVerifier *)verifier;
-(void)setVerifier:(TransparencyVRFVerifier *)arg1 ;
@end

