/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XBSnapshotManifestStore <NSObject>
@optional
-(void)beginAccessBlockForBundleIdentifier:(id)arg1;
-(void)endAccessBlockForBundleIdentifier:(id)arg1;

@required
-(void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)clearManifestDataForBundleIdentifier:(id)arg1;
-(id)loadManifestDataForBundleIdentifier:(id)arg1;
-(void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
