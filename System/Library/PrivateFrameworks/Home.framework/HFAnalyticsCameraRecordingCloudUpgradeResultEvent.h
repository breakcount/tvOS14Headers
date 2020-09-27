/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent {

	unsigned long long _numCamerasWithRecording;
	unsigned long long _iCloudUpgradeOfferPresented;
	unsigned long long _iCloudPlanUpgradeState;

}

@property (assign,nonatomic) unsigned long long numCamerasWithRecording;                  //@synthesize numCamerasWithRecording=_numCamerasWithRecording - In the implementation block
@property (assign,nonatomic) unsigned long long iCloudUpgradeOfferPresented;              //@synthesize iCloudUpgradeOfferPresented=_iCloudUpgradeOfferPresented - In the implementation block
@property (assign,nonatomic) unsigned long long iCloudPlanUpgradeState;                   //@synthesize iCloudPlanUpgradeState=_iCloudPlanUpgradeState - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(unsigned long long)numCamerasWithRecording;
-(unsigned long long)iCloudUpgradeOfferPresented;
-(unsigned long long)iCloudPlanUpgradeState;
-(void)setNumCamerasWithRecording:(unsigned long long)arg1 ;
-(void)setICloudUpgradeOfferPresented:(unsigned long long)arg1 ;
-(void)setICloudPlanUpgradeState:(unsigned long long)arg1 ;
@end

