/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFHealthFeatureObserver;
@interface WFHealthFeatureAvailability : NSObject {

	id<WFHealthFeatureObserver> _observer;

}

@property (assign,nonatomic,__weak) id<WFHealthFeatureObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepOnboardingStatus; 
-(void)setObserver:(id<WFHealthFeatureObserver>)arg1 ;
-(id<WFHealthFeatureObserver>)observer;
-(id)initWithSleepFeature:(unsigned long long)arg1 ;
-(unsigned long long)sleepOnboardingStatus;
@end

