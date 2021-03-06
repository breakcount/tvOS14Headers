/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKAuthenticateHostProtocol.h>

@class GKHostedAuthenticateViewController, GKGame, NSString;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol> {

	GKHostedAuthenticateViewController* _delegate;

}

@property (assign,nonatomic,__weak) GKHostedAuthenticateViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)authenticateExtension;
-(GKHostedAuthenticateViewController *)delegate;
-(void)setDelegate:(GKHostedAuthenticateViewController *)arg1 ;
-(void)viewDidLoad;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)extensionIsCanceling;
-(void)extensionIsFinishing;
@end

