/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableArray, NSArray, NSString, NSDictionary;

@interface AVCaptureMovieFileOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* recordingDelegatesArray;
	NSMutableArray* connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
	SCD_Struct_AV0 movieFragmentInterval;
	NSArray* metadata;
	NSArray* availableVideoCodecs;
	NSString* videoCodec;
	NSDictionary* videoCompressionProperties;
	BOOL sendLastVideoPreviewFrame;
	BOOL recording;
	BOOL paused;
	NSString* bravoCameraSelectionBehaviorForRecording;

}
-(id)init;
-(void)dealloc;
@end

