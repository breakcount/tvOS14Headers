/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle;

@interface ATFileBuffer : NSObject {

	NSFileHandle* _bufferFileHandle;
	unsigned long long _currentReadLocation;
	unsigned long long _length;

}
-(id)init;
-(unsigned long long)length;
-(void)appendData:(id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)rewindData:(id)arg1 ;
-(void)rewind:(unsigned long long)arg1 ;
@end

