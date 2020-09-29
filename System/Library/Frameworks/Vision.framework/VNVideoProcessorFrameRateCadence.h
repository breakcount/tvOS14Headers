/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:45 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/VNVideoProcessorCadence.h>

@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence {

	long long _frameRate;

}

@property (readonly) long long frameRate;              //@synthesize frameRate=_frameRate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)frameRate;
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg1 ;
-(id)initWithFrameRate:(long long)arg1 ;
@end
