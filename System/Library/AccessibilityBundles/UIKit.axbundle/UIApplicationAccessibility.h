/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIApplicationAccessibility_super.h>

@interface UIApplicationAccessibility : __UIApplicationAccessibility_super
+(BOOL)_isSerializableAccessibilityElement;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(void)sendEvent:(id)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(id)_accessibilityResponderElement;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(unsigned long long)_accessibilityAutomationType;
-(void)_accessibilityInitialize;
-(void)accessibilityDisable;
-(id)_accessibilityAllWindowsOnlyVisibleWindows:(BOOL)arg1 ;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 ;
-(BOOL)_iosAccessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2 ;
-(id)_accessibilitySpeakThisViewController;
-(id)_accessibilityMainWindow;
-(BOOL)_accessibilitySoftwareKeyboardActive;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityBundleIdentifier;
-(id)_accessibilityWindows;
-(CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(CGRect)arg1 ;
-(id)_accessibilityFirstElementForFocus;
-(id)_accessibilitySpeakThisElementsAndStrings;
-(id)_accessibilityNativeFocusPreferredElement;
-(id)_accessibilityCellWithRowIndex:(long long)arg1 column:(long long)arg2 containingView:(id)arg3 ;
-(id)_accessibilityElementsForSearchParameter:(id)arg1 ;
-(id)_accessibilityAuditIssuesWithOptions:(id)arg1 ;
-(id)_accessibilityNativeFocusableElements:(id)arg1 withQueryString:(id)arg2 ;
-(id)_accessibilityExplorerElements;
-(id)_accessibilityNativeFocusableElements:(id)arg1 ;
-(id)_accessibilityElementsWithSemanticContext:(id)arg1 ;
-(id)_accessibilityWindowSections;
-(void)setContextKitSearchEnabled:(BOOL)arg1 ;
-(id)_accessibilityFirstElementsForSpeakThis;
-(id)_accessibilitySemanticContext;
-(id)_accessibilityElementCommunityIdentifier;
-(id)_accessibilityWindowsIgnoringWindowsWithHiddenElements:(BOOL)arg1 ;
-(BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 ;
-(BOOL)_accessibilitySoftwareKeyboardCoversElement:(id)arg1 ;
-(CGRect)_accessibilitySoftwareKeyboardAccessibilityFrame;
-(BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
-(id)_accessibilityResponderElementForFocus;
-(BOOL)_accessibilityDispatchKeyboardAction:(id)arg1 ;
-(BOOL)accessibilityStartStopToggle;
-(void)_accessibilityRegisterForDictationLifecycleNotifications;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityBeginMonitoringIdleRunLoop;
-(void)_accessibilityShowEditingHUD;
-(id)_accessibilityNativeFocusElement;
-(BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 toElementMatchingQuery:(id)arg2 ;
-(id)_accessibilityNativeFocusableElements:(id)arg1 matchingBlock:(/*^block*/id)arg2 ;
-(BOOL)_accessibilityAllowsNotificationsDuringSuspension;
-(BOOL)_accessibilityOverrideStartStopExtraExtras;
-(BOOL)_accessibilityStartStopDictation;
-(void)_accessibilityAVCaptureStarted:(id)arg1 ;
-(void)_accessibilityAVCaptureStopped:(id)arg1 ;
-(void)_accessibilityKeyboardDidHide:(id)arg1 ;
-(void)_accessibilityKeyboardDidShow:(id)arg1 ;
-(id)_accessibilityResponderElement:(BOOL)arg1 ;
-(id)_axActiveEmojiSearchField;
-(id)_accessibilityValidateResponderForFocus:(id)arg1 ;
-(id)_accessibilityUIWindowFindWithGlobalPoint:(CGPoint)arg1 ;
-(id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2 focus:(BOOL)arg3 allowScrolling:(BOOL)arg4 ;
-(id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 allowScrolling:(BOOL)arg4 ;
-(id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 ;
-(id)_accessibilityActiveDictationUIKeyboard;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_axSubviews;
-(id)_accessibilitySummaryElement;
-(id)_accessibilityTypingCandidates;
-(id)_accessibilityTextReplacementCandidates;
-(id)_firstStatusBarElement;
-(id)_lastStatusBarElement;
-(id)_accessibilityTitleBarElement;
-(BOOL)_accessibilityDictationIsListening;
-(BOOL)_accessibilityDictationIsAvailable;
-(int)_accessibilityApplicationInterfaceOrientation;
-(BOOL)_accessibilityIsTappingMediaLegibilityEvents;
-(id)_accessibilityCurrentHardwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareLanguage;
-(id)_accessibilityIsolatedWindows;
-(id)_accessibilityPreviewWindow;
-(id)_accessibilityApplicationWindowFramesAndIds;
-(id)_accessibilityRealtimeElements;
-(BOOL)_accessibilityIsInitialBundleLoadFinished;
-(id)_accessibilityNativeFocusableElements:(id)arg1 matchingBlock:(/*^block*/id)arg2 forExistenceCheckOnly:(BOOL)arg3 ;
-(id)_accessibilityMLProxiedElements;
-(BOOL)_accessibilityActionIsPhysicalButton:(int)arg1 nativeUIKitTypeRef:(long long*)arg2 ;
-(id)_accessibilityMakeUIPressInfoWithType:(long long)arg1 Phase:(long long)arg2 timestamp:(double)arg3 contextID:(unsigned)arg4 ;
-(void)_accessibilityShowKeyboardHints;
-(BOOL)_accessibilityHandleFullKeyboardAccessAction:(int)arg1 value:(id)arg2 ;
-(BOOL)_accessibilityMediaPlay;
-(BOOL)_accessibilityMediaPause;
-(BOOL)_accessibilityMediaPlayPause;
-(BOOL)_accessibilityMediaNextTrack;
-(BOOL)_accessibilityMediaPreviousTrack;
-(BOOL)_accessibilityMediaSkipDuration:(id)arg1 ;
-(BOOL)_accessibilityMediaRewind;
-(BOOL)_accessibilityMediaFastForward;
-(BOOL)_accessibilityMoveFocusToTopLevel;
-(BOOL)_accessibilityApplicationDidBecomeFocused;
-(BOOL)_accessibilitySafeMoveInDirection:(unsigned long long)arg1 withSearchInfo:(id)arg2 ;
-(BOOL)_accessibilityMoveAppFocusForElementMatchingQuery:(id)arg1 heading:(unsigned long long)arg2 ;
-(id)_responderForKeyEvents;
-(id)_targetInChainForAction:(SEL)arg1 sender:(id)arg2 ;
-(id)_axAuditCheckDynamicTextSupport:(BOOL)arg1 andClippingIssues:(BOOL)arg2 spinRunloop:(BOOL)arg3 ;
-(id)_accessibilityApplicationSemanticContextWithViewController:(id)arg1 ;
-(void)_finishButtonEvent:(id)arg1 ;
-(BOOL)_accessibilityCancelRewindOrFastForward;
-(void)_accessibilitySetLastMediaRemoteCommand:(unsigned)arg1 ;
-(unsigned)_accessibilityGetLastMediaRemoteCommand;
-(unsigned)_accessibilityMachPort;
-(BOOL)contextKitSearchEnabled;
-(void)_loadAllAccessibilityInformation;
-(id)_accessibilityValidatedResponderForExistingGoodResponder:(id)arg1 forFocus:(BOOL)arg2 ;
-(void)_accessibilitySetAllowsNotificationsDuringSuspension:(BOOL)arg1 ;
-(id)_axAllSubviews;
-(BOOL)_accessibilityElementBelongsToKeyboardWindow:(id)arg1 ;
-(BOOL)_accessibilityHardwareKeyboardActive;
-(double)_accessibilityLastDictationMagicTapTime;
-(int)_accessibilityApplicationForPosition:(CGPoint)arg1 ;
-(BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(BOOL)_accessibilityMediaStop;
@end

