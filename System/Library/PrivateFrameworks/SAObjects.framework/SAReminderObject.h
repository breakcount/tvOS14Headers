/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSArray, SAReminderRecurrence, SAReminderListObject, SAReminderTrigger;

@interface SAReminderObject : SADomainObject

@property (nonatomic,copy) NSString * alternateSubject; 
@property (assign,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSString * dueDateTimeZoneId; 
@property (assign,nonatomic) BOOL important; 
@property (nonatomic,copy) NSArray * lists; 
@property (nonatomic,retain) id<SAReminderPayload> payload; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) SAReminderListObject * toList; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)completed;
-(id<SAReminderPayload>)payload;
-(SAReminderTrigger *)trigger;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSDate *)dueDate;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(id)encodedClassName;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(BOOL)important;
-(void)setImportant:(BOOL)arg1 ;
-(NSArray *)lists;
-(void)setLists:(NSArray *)arg1 ;
-(SAReminderListObject *)toList;
-(void)setToList:(SAReminderListObject *)arg1 ;
@end

