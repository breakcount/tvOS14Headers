/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMAccessoryBrowserDelegate;
@class HMFUnfairLock, _HMContext, NSUUID, HMMutableArray, NSArray, NSString;

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	BOOL _browsing;
	id<HMAccessoryBrowserDelegate> _delegate;
	_HMContext* _context;
	NSUUID* _uuid;
	HMMutableArray* _accessories;
	unsigned long long _generationCounter;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * accessories;                                    //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                            //@synthesize generationCounter=_generationCounter - In the implementation block
@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;                                 //@synthesize browsing=_browsing - In the implementation block
@property (assign,nonatomic,__weak) id<HMAccessoryBrowserDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredAccessories; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<HMAccessoryBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMAccessoryBrowserDelegate>)arg1 ;
-(_HMContext *)context;
-(void)_start;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)generationCounter;
-(HMMutableArray *)accessories;
-(void)setBrowsing:(BOOL)arg1 ;
-(void)stopSearchingForNewAccessories;
-(void)startSearchingForNewAccessories;
-(BOOL)isBrowsing;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_registerNotificationHandlers;
-(void)handleStartWithError:(id)arg1 response:(id)arg2 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)setAccessories:(HMMutableArray *)arg1 ;
-(void)_startSearchingForNewAccessories;
-(void)_fetchNewAccessoriesWithPrivacyCheck;
-(void)stopSearchingForNewAccessoriesWithError:(id)arg1 ;
-(void)_stopSearchingForNewAccessoriesWithError:(id)arg1 ;
-(NSArray *)discoveredAccessories;
-(void)_updateNewAccessories:(id)arg1 ;
-(void)_fetchNewAccessories;
-(void)_handleNewAccessoriesFound:(id)arg1 ;
-(void)_handleNewAccessoriesRemoved:(id)arg1 ;
@end

