/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SFRSSIQueue : NSObject {

	NSMutableArray* _rssiValues;
	NSMutableArray* _tickValues;

}

@property (nonatomic,readonly) double velocity; 
@property (nonatomic,readonly) double velocitySmoothed; 
-(double)velocity;
-(double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2 ;
-(void)addSample:(double)arg1 atTicks:(unsigned long long)arg2 ;
-(double)velocitySmoothed;
@end

