/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFUserInterfaceHost <NSObject>
@property (nonatomic,readonly) NSString * userInterfaceType; 
@optional
-(BOOL)requestedFromAnotherDevice;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showPreviewForContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)shouldNotHandoff;
-(id)dialogTransformer;
-(BOOL)openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(NSString *)userInterfaceType;
-(void)presentAlert:(id)arg1;

@end
