/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKContactlessCardIngesterDelegate, OS_dispatch_queue;
@class NSString, PKPaymentProvisioningMethodMetadata, NSNumberFormatter, NSObject;

@interface PKContactlessCardIngester : NSObject {

	BOOL _listening;
	NSString* _pushTopic;
	PKPaymentProvisioningMethodMetadata* _readerModeProvisioningMetadata;
	NSNumberFormatter* _currencyNumberFormatter;
	id<PKContactlessCardIngesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _contactlessCardIngesterQueue;
	/*^block*/id _cardSessionTokenCompletionHandler;
	/*^block*/id _disableCardCompletionHandler;

}
+(BOOL)isSupported;
+(id)debugDescriptionForStatus:(unsigned long long)arg1 ;
-(void)invalidate;
-(void)_cancelCardIngestion;
-(void)_stopListeningToRemoteAdminEvents;
-(void)_startListeningToRemoteAdminEventsIfRequired;
-(void)_ingestCardWithCompletion:(/*^block*/id)arg1 ;
-(void)_ingestCardWithCardSessionToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2 ;
-(void)ingestCardWithSuccessHandler:(/*^block*/id)arg1 ;
-(void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(/*^block*/id)arg2 ;
-(id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2 ;
@end

