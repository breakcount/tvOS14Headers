/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (nonatomic,copy) NSString * filePath; 
@property (nonatomic,copy) NSNumber * length; 
+(id)voiceMail;
+(id)voiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)encodedClassName;
@end

