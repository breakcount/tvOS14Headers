/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMIHomePersonManager, NSSet;


@protocol HMDCameraRecordingSessionVideoAnalyzer <NSObject>
@property (retain) HMIHomePersonManager * homePersonManager; 
@property (copy) NSSet * externalPersonManagers; 
@property (__weak) id<HMDCameraRecordingSessionVideoAnalyzerDelegate> delegate; 
@required
-(id<HMDCameraRecordingSessionVideoAnalyzerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMIHomePersonManager *)homePersonManager;
-(void)analyzeFragment:(id)arg1;
-(void)clearPendingFragments;
-(void)setHomePersonManager:(id)arg1;
-(NSSet *)externalPersonManagers;
-(void)setExternalPersonManagers:(id)arg1;

@end
