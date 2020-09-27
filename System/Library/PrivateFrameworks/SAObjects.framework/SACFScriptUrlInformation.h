/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSURL, NSDictionary, NSString;

@interface SACFScriptUrlInformation : SABaseAceObject

@property (nonatomic,copy) NSURL * downloadUrl; 
@property (nonatomic,copy) NSDictionary * headerFields; 
@property (nonatomic,copy) NSString * requestMethodType; 
+(id)scriptUrlInformation;
+(id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)headerFields;
-(id)encodedClassName;
-(NSURL *)downloadUrl;
-(void)setDownloadUrl:(NSURL *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSString *)requestMethodType;
-(void)setRequestMethodType:(NSString *)arg1 ;
@end

