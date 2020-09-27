/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLibraryAuthServiceClientTokenProviderProtocol <NSObject>
@required
-(void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)getTokenResultForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

