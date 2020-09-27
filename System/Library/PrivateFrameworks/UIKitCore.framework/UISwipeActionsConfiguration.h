/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface UISwipeActionsConfiguration : NSObject {

	BOOL _performsFirstActionWithFullSwipe;
	BOOL _autosizesButtons;
	NSArray* _actions;
	long long __swipeActionsStyle;

}

@property (assign,setter=_setAutosizesButtons:,getter=_autosizesButtons,nonatomic) BOOL autosizesButtons;                       //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (assign,setter=_setSwipeActionsStyle:,getter=_swipeActionsStyle,nonatomic) long long _swipeActionsStyle;              //@synthesize _swipeActionsStyle=__swipeActionsStyle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                                                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL performsFirstActionWithFullSwipe;                                                             //@synthesize performsFirstActionWithFullSwipe=_performsFirstActionWithFullSwipe - In the implementation block
+(id)configurationWithActions:(id)arg1 ;
-(id)description;
-(id)init;
-(NSArray *)actions;
-(void)_setAutosizesButtons:(BOOL)arg1 ;
-(void)setPerformsFirstActionWithFullSwipe:(BOOL)arg1 ;
-(BOOL)performsFirstActionWithFullSwipe;
-(BOOL)_autosizesButtons;
-(long long)_swipeActionsStyle;
-(void)_setSwipeActionsStyle:(long long)arg1 ;
@end

