/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, ACAccount, NSArray, ACDataclassAction;

@interface ACUIDataclassActionPicker : NSObject {

	NSMutableArray* _affectedDataclasses;
	ACAccount* _affectedAccount;
	NSArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * affectedDataclasses;                               //@synthesize affectedDataclasses=_affectedDataclasses - In the implementation block
@property (nonatomic,readonly) ACAccount * affectedAccount;                             //@synthesize affectedAccount=_affectedAccount - In the implementation block
@property (nonatomic,readonly) BOOL hasDestructiveActions; 
@property (nonatomic,readonly) ACDataclassAction * firstDestructiveAction; 
@property (nonatomic,readonly) long long priorityIndex; 
-(id)title;
-(id)message;
-(NSArray *)actions;
-(id)showInViewController:(id)arg1 ;
-(ACDataclassAction *)firstDestructiveAction;
-(id)actionOfType:(long long)arg1 ;
-(BOOL)hasDestructiveActions;
-(id)descriptionForDataclassAction:(id)arg1 ;
-(NSArray *)affectedDataclasses;
-(BOOL)hasActionOfType:(long long)arg1 ;
-(ACAccount *)affectedAccount;
-(id)_stringForMessage:(id)arg1 withAccountType:(id)arg2 dataclassDescription:(id)arg3 ;
-(id)initWithActions:(id)arg1 affectingAccount:(id)arg2 ;
-(void)addAffectedDataclass:(id)arg1 ;
-(long long)priorityIndex;
-(void)setAffectedDataclasses:(NSArray *)arg1 ;
@end

