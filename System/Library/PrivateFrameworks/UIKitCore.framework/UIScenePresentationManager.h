/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKitCore/_UIScenePresenterOwnerDelegate.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol UIScenePresentationManagerDelegate;
@class _UISceneKeyboardProxyLayerForwardingManager, FBScene, _UIScenePresenterOwner, NSMapTable, UIScenePresentationContext, NSString;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver> {

	_UISceneKeyboardProxyLayerForwardingManager* _keyboardProxyLayerManager;
	FBScene* _scene;
	_UIScenePresenterOwner* _scenePresenterOwner;
	NSMapTable* _mapLayersToPresenterOwners;
	BOOL _invalidated;
	UIScenePresentationContext* _defaultScenePresentationContext;
	id<UIScenePresentationManagerDelegate> _delegate;
	struct {
		BOOL defaultPriorityBand;
	}  _delegateFlags;

}

@property (nonatomic,__weak,readonly) FBScene * scene;                                                    //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic,__weak) id<UIScenePresentationManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * defaultPresentationContext;              //@synthesize defaultScenePresentationContext=_defaultScenePresentationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id<UIScenePresentationManagerDelegate>)delegate;
-(void)setDelegate:(id<UIScenePresentationManagerDelegate>)arg1 ;
-(BOOL)isInvalidated;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(FBScene *)scene;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)_initWithScene:(id)arg1 ;
-(id)snapshotContext;
-(id)createPresenterWithIdentifier:(id)arg1 ;
-(long long)_defaultPresentationPriority;
-(id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2 ;
-(UIScenePresentationContext *)defaultPresentationContext;
-(void)ownerDidInvalidateLastPresenter:(id)arg1 ;
-(void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3 ;
-(id)_initWithScene:(id)arg1 keyboardProxyLayerManager:(id)arg2 ;
-(BOOL)_hasPresenterWithIdentifier:(id)arg1 ;
-(id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3 ;
-(void)modifyDefaultPresentationContext:(/*^block*/id)arg1 ;
-(id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 ;
-(id)snapshotPresentationForSnapshot:(id)arg1 ;
-(id)_presenterWithIdentifier:(id)arg1 ;
@end

