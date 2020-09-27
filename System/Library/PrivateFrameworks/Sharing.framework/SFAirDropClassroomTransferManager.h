/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFAirDropClassroomTransferManagerProtocol.h>

@protocol SFAirDropClassroomTransferDelegate;
@class NSString;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol> {

	id<SFAirDropClassroomTransferDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFAirDropClassroomTransferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<SFAirDropClassroomTransferDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropClassroomTransferDelegate>)arg1 ;
-(void)activate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)transferWithIdentifierWasAccepted:(id)arg1 ;
-(void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2 ;
@end
