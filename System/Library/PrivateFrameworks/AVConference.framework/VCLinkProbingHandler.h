/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCLinkProbingHandlerDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class VCDispatchTimer, NSObject, NSMutableDictionary, NSArray, NSMutableSet, NSSet;

@interface VCLinkProbingHandler : NSObject {

	id<VCLinkProbingHandlerDelegate> _linkProbingHandlerDelegate;
	VCDispatchTimer* _queryProbingResultsTimer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* _aggregatedProbingResults;
	NSArray* _linkPreferenceOrder;
	unsigned char _linkProbingCapabilityVersion;
	unsigned _linkProbingInterval;
	unsigned _linkProbingTimeout;
	unsigned _linkProbingQueryResultsInterval;
	unsigned _minSentRequestCountThreshold;
	unsigned char _linkProbingState;
	double _lastLinkPreferenceUpdateNotificationTime;
	double _linkProbingConnectionLockdownPeriod;
	double _expMovMeanFactor;
	double _plrEnvelopeAttackFactor;
	double _plrEnvelopeDecayFactor;
	NSArray* _plrBuckets;
	SCD_Struct_VC177 _linkProbingResultConfig;
	NSMutableSet* _activelyProbingLinkIDs;

}

@property (assign) id<VCLinkProbingHandlerDelegate> linkProbingHandlerDelegate; 
@property (assign) unsigned char linkProbingCapabilityVersion;                               //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
@property (readonly) BOOL isLinkProbingActive; 
@property (readonly) NSSet * activelyProbingLinkIDs;                                         //@synthesize activelyProbingLinkIDs=_activelyProbingLinkIDs - In the implementation block
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(unsigned char)linkProbingCapabilityVersion;
-(void)startActiveProbingOnLinks:(id)arg1 ;
-(void)stopActiveProbingOnLinks:(id)arg1 ;
-(void)updateProbingResults:(id)arg1 ;
-(id)getProbingResultsForLinkID:(id)arg1 ;
-(BOOL)isLinkProbingActive;
-(void)loadStorebagValues;
-(void)setLinkProbingHandlerDelegate:(id<VCLinkProbingHandlerDelegate>)arg1 ;
-(void)queryProbingResults;
-(id<VCLinkProbingHandlerDelegate>)linkProbingHandlerDelegate;
-(void)setLinkProbingResultConfig;
-(void)resetAggregatedProbingResults;
-(void)removeProbingResultsForLinks:(id)arg1 ;
-(void)flushProbingResults:(id)arg1 ;
-(void)dispatchedUpdateProbingResults:(id)arg1 ;
-(BOOL)isValidProbingResult:(id)arg1 ;
-(void)updateLinkPreferenceOrder;
-(NSSet *)activelyProbingLinkIDs;
@end

