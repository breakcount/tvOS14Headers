/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:55 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMIHomePersonManagerDataSource <HMIPersonManagerDataSource>
@optional
-(void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addFaceCrops:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPersons:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2;

@end

