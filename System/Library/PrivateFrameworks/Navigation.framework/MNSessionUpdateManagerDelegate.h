/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSessionUpdateManagerDelegate <NSObject>
@required
-(void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
-(void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
-(void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
-(void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
-(BOOL)wantsETAUpdates;
-(id)routeInfoForUpdateManager:(id)arg1;
-(id)userLocationForUpdateManager:(id)arg1;

@end

