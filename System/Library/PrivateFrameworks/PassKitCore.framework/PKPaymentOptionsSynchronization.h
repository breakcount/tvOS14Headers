/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentOptionsSynchronizationDelegate;
@interface PKPaymentOptionsSynchronization : NSObject {

	BOOL _shouldSyncToCloud;
	id<PKPaymentOptionsSynchronizationDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldSyncToCloud;                                                   //@synthesize shouldSyncToCloud=_shouldSyncToCloud - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentOptionsSynchronizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)shouldSyncToCloud;
-(id)init;
-(id<PKPaymentOptionsSynchronizationDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentOptionsSynchronizationDelegate>)arg1 ;
-(BOOL)shouldSyncToCloud;
-(void)_updateSynchronizationBehavior;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)setShouldSyncToCloud:(BOOL)arg1 ;
@end

