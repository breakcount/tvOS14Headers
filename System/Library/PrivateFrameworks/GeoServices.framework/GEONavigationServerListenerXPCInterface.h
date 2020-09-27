/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationServerListenerXPCInterface <NSObject>
@required
-(void)navigationStateChanged:(unsigned long long)arg1 transportType:(int)arg2;
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
-(void)routeSummaryUpdatedWithStepNameInfoData:(id)arg1;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromSignData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromManeuverData:(id)arg1;
-(void)routeSummaryUpdatedWithPositionFromDestinationData:(id)arg1;
-(void)navigationUpdatedWithVoiceVolumeData:(id)arg1;
-(void)currentRoadNameUpdated:(id)arg1;

@end
