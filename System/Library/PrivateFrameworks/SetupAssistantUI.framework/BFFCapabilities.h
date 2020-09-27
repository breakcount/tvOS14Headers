/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	BOOL _shouldShowWalletInitialized;
	BOOL _shouldShowWallet;
	NSObject*<OS_dispatch_queue> _fetchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWalletInitialized;                     //@synthesize shouldShowWalletInitialized=_shouldShowWalletInitialized - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWallet;                                //@synthesize shouldShowWallet=_shouldShowWallet - In the implementation block
+(id)sharedCapabilities;
-(id)init;
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(BOOL)isAppleTV;
-(BOOL)hasSecureElement;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)shouldShowWallet:(/*^block*/id)arg1 ;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldShowWalletInitialized;
-(void)setShouldShowWalletInitialized:(BOOL)arg1 ;
-(BOOL)shouldShowWallet;
-(void)setShouldShowWallet:(BOOL)arg1 ;
@end

