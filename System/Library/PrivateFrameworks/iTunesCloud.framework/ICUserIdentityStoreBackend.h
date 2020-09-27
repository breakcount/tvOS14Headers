/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)synchronize;
-(id)activeAccountDSIDWithError:(id*)arg1;
-(BOOL)updateActiveAccountDSID:(id)arg1 error:(id*)arg2;
-(id)activeLockerAccountDSIDWithError:(id*)arg1;
-(BOOL)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2;
-(id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
-(BOOL)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
-(id)localStoreAccountPropertiesWithError:(id*)arg1;
-(BOOL)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2;
-(id)verificationContextForDSID:(id)arg1 error:(id*)arg2;
-(id)verificationContextForAccountEstablishmentWithError:(id*)arg1;

@end

