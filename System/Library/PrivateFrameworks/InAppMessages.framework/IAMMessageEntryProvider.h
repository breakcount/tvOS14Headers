/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IAMMessageEntryProvider <NSObject>
@property (assign,nonatomic,__weak) id<IAMMessageEntryProviderDelegate> delegate; 
@required
-(id<IAMMessageEntryProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3;

@end

