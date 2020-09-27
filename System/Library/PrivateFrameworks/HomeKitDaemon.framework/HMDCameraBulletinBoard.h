/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCameraBulletinBoard <NSObject>
@optional
-(void)updateBulletinWithRecordID:(id)arg1 forChangedCharacteristics:(id)arg2 snapshotData:(id)arg3;

@required
-(void)removeBulletinWithRecordID:(id)arg1;
-(void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)insertCameraClipSignificantEventBulletin:(id)arg1;
-(id)doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;

@end
