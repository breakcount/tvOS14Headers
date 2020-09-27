/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIDelayedAction, UIInputSwitcherView, NSString;

@interface UIInputSwitcher : NSObject {

	UIDelayedAction* m_keyHoldDelay;
	UIDelayedAction* m_showSwitcherDelay;
	UIDelayedAction* m_hideSwitcherDelay;
	int m_state;
	UIInputSwitcherView* m_switcherView;
	double m_lastGlobeKeyUpTime;
	NSString* _newMode;
	BOOL _isGlobeKeyDown;
	BOOL _usingCapsLockLanguageSwitch;
	BOOL _dismissingEmojiPopover;
	NSString* _loadedIdentifier;

}

@property (nonatomic,copy) NSString * loadedIdentifier;                     //@synthesize loadedIdentifier=_loadedIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isGlobeKeyDown;                           //@synthesize isGlobeKeyDown=_isGlobeKeyDown - In the implementation block
@property (assign,nonatomic) BOOL usingCapsLockLanguageSwitch;              //@synthesize usingCapsLockLanguageSwitch=_usingCapsLockLanguageSwitch - In the implementation block
@property (assign,nonatomic) BOOL dismissingEmojiPopover;                   //@synthesize dismissingEmojiPopover=_dismissingEmojiPopover - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isVisible;
-(BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(void)setLoadedIdentifier:(NSString *)arg1 ;
-(void)clearShowSwitcherTimer;
-(void)clearHideSwitcherTimer;
-(void)hideSwitcher;
-(void)cancelHideSwitcherTimer;
-(void)cancelShowSwitcherTimer;
-(NSString *)loadedIdentifier;
-(void)cleanUpAfterHide;
-(void)setIsGlobeKeyDown:(BOOL)arg1 ;
-(BOOL)usingCapsLockLanguageSwitch;
-(void)_showSwitcherViewAsHUD;
-(void)touchHideSwitcherTimer;
-(void)handleRotate:(id)arg1 ;
-(void)showSwitcherShouldAutoHide:(BOOL)arg1 ;
-(void)showSwitcherWithAutoHide;
-(BOOL)isVisibleOrHiding;
-(void)showSwitcherWithoutAutoHide;
-(void)clearKeyHoldTimer;
-(BOOL)handleSwitchCommand:(BOOL)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 ;
-(id)inputModeIdentifierWithNextFlag:(BOOL)arg1 ;
-(void)setUsingCapsLockLanguageSwitch:(BOOL)arg1 ;
-(BOOL)handleEmojiPicker;
-(void)touchShowSwitcherTimer;
-(void)hideSwitcherIfNeeded;
-(BOOL)handleGlobeKeyEvent:(id)arg1 switcherIsVisible:(BOOL)arg2 ;
-(BOOL)handleNavigationEvent:(id)arg1 ;
-(BOOL)needsFullHUD;
-(BOOL)dismissingEmojiPopover;
-(void)setDismissingEmojiPopover:(BOOL)arg1 ;
-(void)touchKeyHoldTimer;
-(void)updateHardwareLayout;
-(BOOL)isGlobeKeyDown;
-(BOOL)handleSwitchCommand:(BOOL)arg1 ;
-(BOOL)switchMode:(id)arg1 withHUD:(BOOL)arg2 withDelay:(BOOL)arg3 fromCapsLock:(BOOL)arg4 ;
-(BOOL)handleSwitchingKeyEvent:(id)arg1 ;
-(BOOL)handleModifiersChangedEvent:(id)arg1 ;
@end

