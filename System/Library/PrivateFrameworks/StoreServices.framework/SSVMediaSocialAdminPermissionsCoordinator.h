/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _refreshPeriod;

}

@property (nonatomic,readonly) BOOL isCurrentUserAdmin; 
@property (assign) double refreshPeriod;                             //@synthesize refreshPeriod=_refreshPeriod - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(void)reset;
-(void)getAdminStatusWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_adminStatusForAccountID:(id)arg1 ;
-(BOOL)_statusIsFresh:(id)arg1 ;
-(void)_setAdminStatus:(id)arg1 forAccountID:(id)arg2 ;
-(void)setRefreshPeriod:(double)arg1 ;
-(double)refreshPeriod;
-(void)getAdminStatusAndWaitWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(BOOL)isCurrentUserAdmin;
@end

