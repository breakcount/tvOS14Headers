/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIResponseKitManaging.h>

@class NSString;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedTIResponseKitManager;
-(id)init;
-(void)resetResponseKit;
-(void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(BOOL)arg7 stringIsBlacklisted:(BOOL)arg8 async:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(BOOL)arg8 ;
-(void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3 ;
-(void)resetResponseKitConversationHistory;
-(void)persistResponseKitDynamicDataToDisk;
@end

