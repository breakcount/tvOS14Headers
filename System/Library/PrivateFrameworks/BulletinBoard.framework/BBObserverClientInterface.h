/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionInfo:(id)arg1;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)removeSection:(id)arg1;
-(void)updateGlobalSettings:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)noteBulletinsLoadedForSectionID:(id)arg1;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;

@end

