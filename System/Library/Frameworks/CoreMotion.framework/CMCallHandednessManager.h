/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMCallHandednessDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCallHandednessManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMCallHandednessDelegate> _delegate;

}

@property (assign,nonatomic) id<CMCallHandednessDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isCallHandednessAvailable;
-(id)init;
-(void)dealloc;
-(id<CMCallHandednessDelegate>)delegate;
-(void)setDelegate:(id<CMCallHandednessDelegate>)arg1 ;
-(void)onCallHandednessStateUpdated:(const Sample*)arg1 ;
-(void)startCallHandednessUpdates;
-(void)stopCallHandednessUpdates;
@end
