/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>
@required
-(oneway void)revokeAccessClaimForID:(id)arg1;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
-(oneway void)removePresenterWithID:(id)arg1;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7;
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)prepareToArbitrateForURLs:(id)arg1;
-(void)startArbitratingWithReply:(/*^block*/id)arg1;
-(void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1;

@end

