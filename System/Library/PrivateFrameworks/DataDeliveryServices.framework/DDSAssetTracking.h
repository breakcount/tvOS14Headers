/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSAssetTracking <NSObject>
@property (nonatomic,retain) id<DDSAssetTrackingDelegate> delegate; 
@required
-(id<DDSAssetTrackingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)assertionIDsForClientID:(id)arg1;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)removeAssertionWithID:(id)arg1;
-(void)didUpdateAssertion:(id)arg1 atDate:(id)arg2;
-(id)assertionDueForUpdateSinceDate:(id)arg1;
-(id)allAssertions;
-(id)trackedAssetTypes;

@end

