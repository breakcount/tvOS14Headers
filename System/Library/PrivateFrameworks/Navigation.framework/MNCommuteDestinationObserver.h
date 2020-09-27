/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCommuteDestinationObserver <NSObject>
@optional
-(void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2;
-(void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didUpdateTrafficForRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastMatchedLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingDistance:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRerouting:(BOOL)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeScore:(long long)arg2;
-(void)commuteDestination:(id)arg1 didChangeScores:(id)arg2;

@end
