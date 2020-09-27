/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAccelerometerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class CMMotionManager;

@interface UIAccelerometer : NSObject {

	double _updateInterval;
	id<UIAccelerometerDelegate> _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;
	CMMotionManager* _motionManager;

}

@property (assign,nonatomic) double updateInterval;                                    //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic,__weak) id<UIAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(id)init;
-(void)dealloc;
-(id<UIAccelerometerDelegate>)delegate;
-(void)setDelegate:(id<UIAccelerometerDelegate>)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(id)_motionManager;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(void)_startAccelerometerIfNecessary;
-(void)_stopAccelerometer;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
@end

