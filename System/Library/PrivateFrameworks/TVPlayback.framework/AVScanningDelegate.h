/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVScanningDelegate <NSObject>
@optional
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_TV4)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4;
-(void)stopScanningPlayerViewController:(id)arg1;
-(BOOL)playerViewController:(id)arg1 shouldHandleScanningForPlayerItem:(id)arg2;

@end

