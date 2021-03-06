/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TUIAnalyticsSession.h>

@class NSLocale, NSString;

@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {

	NSLocale* _locale;
	NSString* _trackedSearchQuery;
	NSString* _initialInputModeIdentifier;
	unsigned long long _numberOfInitialCharacters;
	unsigned long long _numberOfEmojiInserted;
	unsigned long long _numberOfCharactersInserted;
	unsigned long long _numberOfCharactersDeleted;
	unsigned long long _numberOfClearActions;

}
+(id)emojiSearchFieldSpecTuples;
+(id)emojiSearchEventSpec;
-(id)initWithLocale:(id)arg1 ;
-(void)endSession;
-(void)beginSessionWithInitialSearchQuery:(id)arg1 ;
-(void)emojiInserted:(id)arg1 ;
-(void)searchQueryWasChangedTo:(id)arg1 ;
-(void)clearButtonPressed;
@end

