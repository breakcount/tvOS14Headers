/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1;
-(CGRect*)documentInteractionControllerRectForPreview:(id)arg1;
-(id)documentInteractionControllerViewForPreview:(id)arg1;
-(void)documentInteractionControllerWillBeginPreview:(id)arg1;
-(void)documentInteractionControllerDidEndPreview:(id)arg1;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
-(BOOL)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
-(BOOL)documentInteractionController:(id)arg1 performAction:(SEL)arg2;

@end
