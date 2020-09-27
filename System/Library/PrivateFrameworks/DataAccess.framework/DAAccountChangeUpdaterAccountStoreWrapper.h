/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAAccountChangeHandlerAccountStoreUpdater.h>

@class ACAccountStore, NSString;

@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {

	ACAccountStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccountStore:(id)arg1 ;
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

