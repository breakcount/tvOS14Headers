/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, WFRealmWorkflow, NSDate;

@interface WFRealmWorkflowRunEvent : RLMObject <WFRecordStorage> {

	NSString* _identifier;
	WFRealmWorkflow* _workflow;
	NSDate* _date;
	NSString* _source;
	NSString* _triggerID;
	long long _outcome;

}

@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (retain) WFRealmWorkflow * workflow;                      //@synthesize workflow=_workflow - In the implementation block
@property (retain) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (assign) NSString * source;                               //@synthesize source=_source - In the implementation block
@property (copy) NSString * triggerID;                              //@synthesize triggerID=_triggerID - In the implementation block
@property (assign) long long outcome;                               //@synthesize outcome=_outcome - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)className;
+(id)primaryKey;
+(id)requiredProperties;
+(id)defaultPropertyValues;
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)outcome;
-(void)setOutcome:(long long)arg1 ;
-(id)descriptor;
-(void)setDate:(NSDate *)arg1 ;
-(WFRealmWorkflow *)workflow;
-(void)setWorkflow:(WFRealmWorkflow *)arg1 ;
-(NSString *)triggerID;
-(void)setTriggerID:(NSString *)arg1 ;
@end

