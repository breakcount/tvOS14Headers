/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientAudioSystemServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding, SVXClientAudioSystemServiceDelegate;
@class NSString;

@interface SVXClientAudioSystemService : NSObject <SVXClientServiceConsuming, SVXClientAudioSystemServicing> {

	id<SVXPerforming> _performer;
	id<SVXClientServiceProviding> _clientServiceProvider;
	BOOL _isAudioSessionActive;
	id<SVXClientAudioSystemServiceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SVXClientAudioSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SVXClientAudioSystemServiceDelegate>)delegate;
-(void)setDelegate:(id<SVXClientAudioSystemServiceDelegate>)arg1 ;
-(id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2 ;
-(void)clientServiceDidChange;
-(void)handleAudioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)handleAudioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
@end

