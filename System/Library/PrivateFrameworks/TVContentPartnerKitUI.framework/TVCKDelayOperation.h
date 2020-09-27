/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKAsynchronousOperation.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface TVCKDelayOperation : TVCKAsynchronousOperation {

	NSObject*<OS_dispatch_source> _timerSource;
	double _delay;
	double _tolerance;

}

@property (readonly) double delay;                  //@synthesize delay=_delay - In the implementation block
@property (readonly) double tolerance;              //@synthesize tolerance=_tolerance - In the implementation block
+(id)delayOperationWithDelay:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(double)tolerance;
-(void)cancel;
-(double)delay;
-(void)_cancelTimer;
-(void)executionDidBegin;
-(id)initWithDelay:(double)arg1 tolerance:(double)arg2 ;
@end

