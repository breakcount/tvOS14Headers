/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKStoreExtensionClientInterface.h>

@protocol SKStoreRemoteViewControllerDelegate;
@class NSString;

@interface SKStoreRemoteViewController : _UIRemoteViewController <SKStoreExtensionClientInterface> {

	id<SKStoreRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKStoreRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<SKStoreRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKStoreRemoteViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNeedsTabSelection;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

