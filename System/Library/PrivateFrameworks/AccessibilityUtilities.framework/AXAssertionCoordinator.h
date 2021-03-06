/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAssertionCoordinatorDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSHashTable;

@interface AXAssertionCoordinator : NSObject {

	id<AXAssertionCoordinatorDelegate> _delegate;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSHashTable* _assertions;

}

@property (assign,nonatomic,__weak) id<AXAssertionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assertionQueue;                     //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * assertions;                                        //@synthesize assertions=_assertions - In the implementation block
-(id<AXAssertionCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<AXAssertionCoordinatorDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSHashTable *)assertions;
-(void)setAssertions:(NSHashTable *)arg1 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stopTrackingPoorMansAssertion:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(id)acquireAssertionWithReason:(id)arg1 ;
@end

