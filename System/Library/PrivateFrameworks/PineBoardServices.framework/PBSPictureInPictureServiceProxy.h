/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSPictureInPictureServiceInterface.h>

@protocol PBSPictureInPictureServiceInterface;
@class NSMapTable, NSString;

@interface PBSPictureInPictureServiceProxy : NSObject <PBSPictureInPictureServiceInterface> {

	/*^block*/id _interruptionHandler;
	id<PBSPictureInPictureServiceInterface> _remoteProxy;
	NSMapTable* _pendingReplies;

}

@property (nonatomic,retain) id<PBSPictureInPictureServiceInterface> remoteProxy;              //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingReplies;                                    //@synthesize pendingReplies=_pendingReplies - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                             //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(void)cancelPictureInPictureFromPlayerInterface:(long long)arg1 ;
-(id<PBSPictureInPictureServiceInterface>)remoteProxy;
-(void)setRemoteProxy:(id<PBSPictureInPictureServiceInterface>)arg1 ;
-(void)setServiceDelegate:(id)arg1 ;
-(void)fetchCurrentPictureInPictureStateWithReply:(/*^block*/id)arg1 ;
-(void)applyPictureInPictureInsetsValue:(id)arg1 fromSource:(id)arg2 withAnimationSettings:(id)arg3 usingAnimationFence:(id)arg4 ;
-(void)movePictureInPicture;
-(void)expandPictureInPicture;
-(void)mutePictureInPicture:(BOOL)arg1 ;
-(id)initWithRemoteServiceProxy:(id)arg1 ;
-(void)handleConnectionInterruption:(id)arg1 ;
-(NSMapTable *)pendingReplies;
@end

