/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, WFTrigger, NSData;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor {

	BOOL _shouldPrompt;
	BOOL _enabled;
	int _source;
	NSString* _workflowID;
	WFTrigger* _trigger;
	NSData* _suggestionData;

}

@property (nonatomic,readonly) NSString * workflowID;                      //@synthesize workflowID=_workflowID - In the implementation block
@property (nonatomic,readonly) WFTrigger * trigger;                        //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) int source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSData * suggestionData;                        //@synthesize suggestionData=_suggestionData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)source;
-(BOOL)isEnabled;
-(WFTrigger *)trigger;
-(NSString *)workflowID;
-(NSData *)suggestionData;
-(BOOL)shouldPrompt;
-(id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(BOOL)arg4 enabled:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(BOOL)arg4 enabled:(BOOL)arg5 triggerSource:(int)arg6 suggestionData:(id)arg7 ;
-(void)setSuggestionData:(NSData *)arg1 ;
@end

