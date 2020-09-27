/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIScenePresenter.h>

@protocol NSCopying_UIComparable;
@class NSString, FBScene, UIScenePresentationContext, _UIScenePresenterOwner, BSMonotonicReferenceTime, _UIScenePresentationView;

@interface _UIScenePresenter : NSObject <BSDescriptionProviding, UIScenePresenter> {

	_UIScenePresenterOwner* _owner;
	UIScenePresentationContext* _presentationContext;
	BSMonotonicReferenceTime* _initializeTime;
	id<NSCopying><_UIComparable> _sortContext;
	NSString* _identifier;
	BOOL _invalidated;
	BOOL _visibilityPropagationEnabled;
	_UIScenePresentationView* _view;
	BOOL _enabled;
	BOOL _hosting;

}

@property (nonatomic,retain) BSMonotonicReferenceTime * _initializeTime;                                           //@synthesize initializeTime=_initializeTime - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHosting,nonatomic) BOOL hosting;                                                        //@synthesize hosting=_hosting - In the implementation block
@property (assign,getter=isVisibilityPropagationEnabled,nonatomic) BOOL visibilityPropagationEnabled;              //@synthesize visibilityPropagationEnabled=_visibilityPropagationEnabled - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying> sortContext;                                                     //@synthesize sortContext=_sortContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,__weak,readonly) FBScene * scene; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext;                              //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,readonly) UIView*<UIScenePresentation> presentationView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(long long)compare:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(BOOL)isInvalidated;
-(void)activate;
-(BOOL)isActive;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)deactivate;
-(FBScene *)scene;
-(UIScenePresentationContext *)presentationContext;
-(void)modifyPresentationContext:(/*^block*/id)arg1 ;
-(UIView*<UIScenePresentation>)presentationView;
-(void)setVisibilityPropagationEnabled:(BOOL)arg1 ;
-(BOOL)isHosting;
-(id<NSCopying>)sortContext;
-(BSMonotonicReferenceTime *)_initializeTime;
-(id)newSnapshotContext;
-(id)newSnapshot;
-(id)newSnapshotPresentationView;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3 ;
-(void)set_initializeTime:(BSMonotonicReferenceTime *)arg1 ;
-(void)setHosting:(BOOL)arg1 ;
-(BOOL)isVisibilityPropagationEnabled;
@end

