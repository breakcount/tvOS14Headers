/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardModel/HeadBoardModel-Structs.h>
#import <libobjc.A.dylib/PBSAppInfoControllerObserver.h>
#import <libobjc.A.dylib/HBMDataSourceDelegate.h>
#import <libobjc.A.dylib/PBSMigrationHandling.h>

@protocol HBMDataSourceCoordinatorDelegate, HBMDataSource;
@class HBMStoreCollection, HBMDataSourceConfiguration, PBSAppInfoController, NSString;

@interface HBMDataSourceCoordinator : NSObject <PBSAppInfoControllerObserver, HBMDataSourceDelegate, PBSMigrationHandling> {

	os_unfair_lock_s _lock;
	HBMStoreCollection* _collection;
	HBMDataSourceConfiguration* _configuration;
	id<HBMDataSourceCoordinatorDelegate> _delegate;
	PBSAppInfoController* _appInfoController;
	id<HBMDataSource> _dataSource;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) PBSAppInfoController * appInfoController;                        //@synthesize appInfoController=_appInfoController - In the implementation block
@property (nonatomic,readonly) id<HBMDataSource> dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) HBMDataSourceConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<HBMDataSourceCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) HBMStoreCollection * collection;                            //@synthesize collection=_collection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)migrateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(os_unfair_lock_s)lock;
-(id<HBMDataSourceCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<HBMDataSourceCoordinatorDelegate>)arg1 ;
-(HBMDataSourceConfiguration *)configuration;
-(HBMStoreCollection *)collection;
-(id<HBMDataSource>)dataSource;
-(void)setCollection:(HBMStoreCollection *)arg1 ;
-(void)dataSourceContentDidChange:(id)arg1 ;
-(void)_updateDataSourceWithAppInfoConfiguration:(id)arg1 ;
-(void)_lock_setDataSource:(id)arg1 ;
-(void)appInfoController:(id)arg1 didUpdate:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 appInfoController:(id)arg2 ;
-(BOOL)loadWithReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveWithReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyCollectionChangeSet:(id)arg1 ;
-(PBSAppInfoController *)appInfoController;
@end

