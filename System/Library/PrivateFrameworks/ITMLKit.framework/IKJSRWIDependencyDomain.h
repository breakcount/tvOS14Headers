/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IKJSRWIDependencyDomain : NSObject {

	NSString* _identifier;
	Class _agentClass;
	NSDictionary* _types;
	NSDictionary* _commands;
	NSDictionary* _events;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) Class agentClass;                                //@synthesize agentClass=_agentClass - In the implementation block
@property (nonatomic,readonly) NSString * dispatcherClassString; 
@property (nonatomic,readonly) NSDictionary * types;                          //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSDictionary * commands;                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSDictionary * events;                         //@synthesize events=_events - In the implementation block
+(id)allDomains;
+(id)allowedDomains;
+(id)domainAgentClassMap;
+(void)processDomains:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)events;
-(NSDictionary *)types;
-(NSDictionary *)commands;
-(BOOL)isValidWithError:(id*)arg1 ;
-(Class)agentClass;
-(NSString *)dispatcherClassString;
-(id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2 ;
-(void)setAgentClass:(Class)arg1 ;
-(BOOL)isValidForTypesWithError:(id*)arg1 ;
-(BOOL)isValidForAgentWithError:(id*)arg1 ;
-(BOOL)isValidForEventsWithError:(id*)arg1 ;
@end

