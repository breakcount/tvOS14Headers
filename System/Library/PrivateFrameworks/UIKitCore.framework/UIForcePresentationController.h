/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView;


@protocol UIForcePresentationController <NSObject>
@property (nonatomic,copy) id presentationPhaseCompletionBlock; 
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer; 
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; 
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; 
@optional
-(void)_willCommitPresentation;

@required
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(BOOL)_canDismissPresentation;
-(BOOL)_canCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(id)arg1;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;
-(UIView *)_revealContainerView;
-(void)setForcePresentationControllerDelegate:(id)arg1;

@end

