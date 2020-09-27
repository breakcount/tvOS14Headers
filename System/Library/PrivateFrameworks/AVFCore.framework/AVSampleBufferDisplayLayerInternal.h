/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class CALayer, NSError, NSString, AVMediaDataRequester, NSObject, AVWeakReference, AVSampleBufferVideoOutput, NSMutableArray;

@interface AVSampleBufferDisplayLayerInternal : NSObject {

	CALayer* contentLayer;
	OpaqueFigVideoQueueRef videoQueue;
	BOOL outputObscured;
	long long status;
	NSError* error;
	NSString* videoGravity;
	CGSize presentationSize;
	CGRect bounds;
	BOOL preventsDisplaySleepDuringVideoPlayback;
	BOOL requiresFlushToResumeDecoding;
	BOOL isRequestingMediaData;
	AVMediaDataRequester* mediaDataRequester;
	BOOL aboveHighWaterLevel;
	NSObject*<OS_dispatch_queue> serialQueue;
	AVWeakReference* weakReferenceToSelf;
	AVWeakReference* weakReferenceToSynchronizer;
	BOOL addedToSynchronizer;
	BOOL controlTimebaseSetByUserIsInUse;
	OpaqueCMTimebaseRef controlTimebaseSetByUser;
	OpaqueCMTimebaseRef readOnlyVideoQueueTimebase;
	OpaqueCMTimebaseRef readOnlyRenderingTimebase;
	AVSampleBufferVideoOutput* videoOutput;
	NSObject*<OS_dispatch_queue> flushCallbackListQueue;
	NSObject*<OS_dispatch_queue> flushCallbackQueue;
	NSMutableArray* flushCallbacks;
	NSObject*<OS_dispatch_queue> queueForProtectingPrerollCompleteCallback;
	/*^block*/id pendingPrerollCompleteCallback;
	int pendingPrerollRequestID;
	NSObject*<OS_dispatch_queue> queueForCallingPrerollCompleteCallback;
	int upcomingPTSExpectation;
	SCD_Struct_AV6 minimumUpcomingPTS;
	id didFinishSuspensionNotificationToken;

}
@end

