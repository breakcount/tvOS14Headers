/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * duckingEventSyncDelay; 
@property (nonatomic,copy) NSNumber * preTriggerToDuckingEndDuration; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setAudioDuckingDelay;
+(id)setAudioDuckingDelayWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)duckingEventSyncDelay;
-(void)setDuckingEventSyncDelay:(NSNumber *)arg1 ;
-(NSNumber *)preTriggerToDuckingEndDuration;
-(void)setPreTriggerToDuckingEndDuration:(NSNumber *)arg1 ;
@end

