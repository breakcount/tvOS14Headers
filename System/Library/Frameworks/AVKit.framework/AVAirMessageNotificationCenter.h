/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVBonjourServiceDelegate.h>
#import <AVKit/AVAirTransportDelegate.h>

@protocol AVAirMessageNotificationCenterDelegate, OS_dispatch_queue;
@class AVBonjourService, AVPlayerItem, NSObject, NSMutableSet, NSString;

@interface AVAirMessageNotificationCenter : NSObject <AVBonjourServiceDelegate, AVAirTransportDelegate> {

	BOOL _started;
	id<AVAirMessageNotificationCenterDelegate> _delegate;
	AVBonjourService* _mainService;
	AVPlayerItem* _nowPlayingPlayerItem;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeChannels;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeChannels;                                           //@synthesize activeChannels=_activeChannels - In the implementation block
@property (assign,nonatomic,__weak) id<AVAirMessageNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVBonjourService * mainService;                                        //@synthesize mainService=_mainService - In the implementation block
@property (nonatomic,retain) AVPlayerItem * nowPlayingPlayerItem;                                     //@synthesize nowPlayingPlayerItem=_nowPlayingPlayerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
+(void)prepare;
+(BOOL)_isNotificationCenterEnabled;
+(BOOL)isPrepared;
-(id)init;
-(void)dealloc;
-(id<AVAirMessageNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<AVAirMessageNotificationCenterDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(id)_initPrivate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)airTransport:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)airTransportInputDidClose:(id)arg1 ;
-(id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1 ;
-(void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2 ;
-(void)bonjourService:(id)arg1 didCloseChannel:(id)arg2 ;
-(id)playerItemForIdentifier:(id)arg1 ;
-(void)handleCommandMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AVBonjourService *)mainService;
-(AVPlayerItem *)nowPlayingPlayerItem;
-(void)setNowPlayingPlayerItem:(AVPlayerItem *)arg1 ;
-(NSMutableSet *)activeChannels;
-(void)setActiveChannels:(NSMutableSet *)arg1 ;
@end
