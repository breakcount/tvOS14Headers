/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRTransferBrowserDelegate.h>

@protocol TRDeviceSetupBrowserDelegate;
@class TRTransferBrowser, TRDeviceSetupPeripheral, NSString;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {

	id<TRDeviceSetupBrowserDelegate> _delegate;
	TRTransferBrowser* _transferBrowser;
	TRDeviceSetupPeripheral* _peripheral;

}

@property (nonatomic,retain) TRTransferBrowser * transferBrowser;                           //@synthesize transferBrowser=_transferBrowser - In the implementation block
@property (nonatomic,retain) TRDeviceSetupPeripheral * peripheral;                          //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic,__weak) id<TRDeviceSetupBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TRDeviceSetupBrowserDelegate>)delegate;
-(void)setDelegate:(id<TRDeviceSetupBrowserDelegate>)arg1 ;
-(long long)state;
-(void)start;
-(void)stop;
-(TRDeviceSetupPeripheral *)peripheral;
-(void)defer;
-(void)setPeripheral:(TRDeviceSetupPeripheral *)arg1 ;
-(void)browser:(id)arg1 didStartTransferWithSendDataHandler:(/*^block*/id)arg2 ;
-(void)browserDidDisconnect:(id)arg1 ;
-(void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)browserDidChangeState:(id)arg1 ;
-(TRTransferBrowser *)transferBrowser;
-(void)setTransferBrowser:(TRTransferBrowser *)arg1 ;
@end

