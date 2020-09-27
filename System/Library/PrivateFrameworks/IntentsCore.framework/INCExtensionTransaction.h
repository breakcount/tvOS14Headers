/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSUserActivity, INCExtensionRequest, INIntent, INIntentResponse, NSString, INCExtensionTransactionState;

@interface INCExtensionTransaction : NSObject {

	NSMutableDictionary* _userActivitiesByIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _donateInteraction;
	BOOL _shouldResetRequestAfterHandle;
	NSUserActivity* _currentUserActivity;
	INCExtensionRequest* _request;
	INIntent* _currentIntent;
	INIntentResponse* _currentIntentResponse;
	NSString* _groupIdentifier;
	INCExtensionTransactionState* _state;

}

@property (setter=_setCurrentIntent:,nonatomic,retain) INIntent * currentIntent;                                      //@synthesize currentIntent=_currentIntent - In the implementation block
@property (setter=_setCurrentIntentResponse:,nonatomic,retain) INIntentResponse * currentIntentResponse;              //@synthesize currentIntentResponse=_currentIntentResponse - In the implementation block
@property (nonatomic,readonly) BOOL donateInteraction;                                                                //@synthesize donateInteraction=_donateInteraction - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                                                       //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) INCExtensionRequest * request;                                                         //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * currentUserActivity;                                             //@synthesize currentUserActivity=_currentUserActivity - In the implementation block
@property (nonatomic,retain) INCExtensionTransactionState * state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldResetRequestAfterHandle;                                                      //@synthesize shouldResetRequestAfterHandle=_shouldResetRequestAfterHandle - In the implementation block
+(void)initialize;
-(id)description;
-(INCExtensionRequest *)request;
-(INCExtensionTransactionState *)state;
-(void)setState:(INCExtensionTransactionState *)arg1 ;
-(NSString *)groupIdentifier;
-(NSUserActivity *)currentUserActivity;
-(id)initWithIntent:(id)arg1 donateInteraction:(BOOL)arg2 groupIdentifier:(id)arg3 ;
-(id)userActivityWithIdentifier:(id)arg1 ;
-(void)_setCurrentIntent:(id)arg1 ;
-(void)_updateCurrentUserActivityForType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 ;
-(void)_addUserActivities:(id)arg1 ;
-(INIntent *)currentIntent;
-(INIntentResponse *)currentIntentResponse;
-(void)_setCurrentIntentResponse:(id)arg1 ;
-(BOOL)donateInteraction;
-(BOOL)shouldResetRequestAfterHandle;
-(void)setShouldResetRequestAfterHandle:(BOOL)arg1 ;
@end

