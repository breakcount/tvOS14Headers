/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SADonateRankedQueriesToPortrait : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * queryDonations; 
@property (nonatomic,copy) NSString * resultCandidateId; 
@property (nonatomic,copy) NSString * utterance; 
+(id)donateRankedQueriesToPortrait;
+(id)donateRankedQueriesToPortraitWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSArray *)queryDonations;
-(void)setQueryDonations:(NSArray *)arg1 ;
@end

