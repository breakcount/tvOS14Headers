/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSData;

@interface Mutation : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int mutationType; 
@property (assign,nonatomic) unsigned long long mutationMs; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,copy) NSData * deviceIdVrfoutput; 
@property (nonatomic,copy) NSData * clientDataVrfoutput; 
@property (assign,nonatomic) unsigned long long appVersion; 
+(id)descriptor;
@end

