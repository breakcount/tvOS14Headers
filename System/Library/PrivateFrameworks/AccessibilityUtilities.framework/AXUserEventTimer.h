/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface AXUserEventTimer : NSObject {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSHashTable* _assertions;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopTrackingPoorMansAssertion:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg1 ;
-(void)userEventOccurred;
-(BOOL)_canUseIdleTimerServices;
-(id)acquireAssertionToDisableIdleTimerWithReason:(id)arg1 ;
@end

