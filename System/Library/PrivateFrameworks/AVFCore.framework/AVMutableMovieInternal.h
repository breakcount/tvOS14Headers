/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFCore/AVFCore-Structs.h>
@class NSURL, NSData, NSDictionary, NSObject, NSMutableArray, AVDispatchOnce;

@interface AVMutableMovieInternal : NSObject {

	OpaqueFigMutableMovieRef figMutableMovie;
	OpaqueFigFormatReaderRef formatReader;
	OpaqueFigAssetRef figAsset;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSObject*<OS_dispatch_semaphore> trackWaitingSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataWaitingSemaphore;
	NSMutableArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

