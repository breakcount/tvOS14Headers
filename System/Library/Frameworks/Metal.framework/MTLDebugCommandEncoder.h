/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
@optional
-(void)stopCapture;
-(void)startCaptureWithSettings:(const char*)arg1 from:(const char*)arg2;
-(void)startCaptureWithSettings:(const char*)arg1;
-(void)startCapture;
-(void)stopCapture:(const char*)arg1;
-(unsigned)getLastStartStopCaptureResult;
-(void)dumpBuffer:(id)arg1 name:(const char*)arg2;
-(void)dumpBuffer:(id)arg1;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2 glMode:(BOOL)arg3;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2;
-(void)dumpTexture:(id)arg1;
-(void)postFinishEvent:(const char*)arg1;
-(void)postFinishEvent;

@required
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)kprintf:(id)arg1;
-(void)IOLog:(id)arg1;

@end

