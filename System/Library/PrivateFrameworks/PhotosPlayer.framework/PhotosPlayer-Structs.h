/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IS0;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IS1;

typedef struct CGImage* CGImageRef;

typedef struct {
	BOOL videoPlayer;
	BOOL videoPlayerVolume;
	BOOL contentFromPlayerItem;
	BOOL willPlayToEndObserver;
	BOOL willPlayToPhotoObserver;
	BOOL status;
} SCD_Struct_IS3;

typedef struct {
	BOOL didChangeWithAnimationDuration;
} SCD_Struct_IS4;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	SCD_Struct_IS1 start;
	SCD_Struct_IS1 duration;
} SCD_Struct_IS8;

typedef struct {
	BOOL scale;
	BOOL apertureMode;
} SCD_Struct_IS9;

typedef struct {
	BOOL playbackStateDidChange;
	BOOL interactingDidChange;
	BOOL gestureRecognizerDidChange;
} SCD_Struct_IS10;

typedef struct {
	BOOL playerItemLoadingTarget;
	BOOL playerPlayerItem;
	BOOL playerView;
	BOOL playerMuted;
	BOOL status;
	BOOL readyForDisplay;
	BOOL playbackState;
} SCD_Struct_IS11;

