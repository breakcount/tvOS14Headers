/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface PLXPCShMemData : NSData {

	void* _buffer;
	unsigned long long _dataLength;
	unsigned long long _bufferLength;

}
-(id)description;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithXPCShmem:(id)arg1 ;
-(id)initWithXPCShmem:(id)arg1 length:(long long)arg2 ;
@end
