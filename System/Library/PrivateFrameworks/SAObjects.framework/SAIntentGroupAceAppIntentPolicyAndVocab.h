/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (nonatomic,retain) SAIntentGroupProtobufMessage * aceAppBundleInfo; 
+(id)aceAppIntentPolicyAndVocab;
+(id)aceAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAIntentGroupProtobufMessage *)aceAppBundleInfo;
-(void)setAceAppBundleInfo:(SAIntentGroupProtobufMessage *)arg1 ;
@end

