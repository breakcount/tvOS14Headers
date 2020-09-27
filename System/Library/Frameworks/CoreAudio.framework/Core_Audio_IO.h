/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Core_Audio_IO
@required
-(void)handle_io_message:(Device_Token)arg1 with:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stop_before_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)start_after_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2;

@end

