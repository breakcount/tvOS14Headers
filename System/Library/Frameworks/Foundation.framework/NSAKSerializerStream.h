/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSerializerStream.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream> {

	void* memory;
	unsigned long long current;
	unsigned long long max;
	CFDictionaryRef roomForIntLocations;

}
-(void)dealloc;
-(void)copySerializationInto:(void*)arg1 ;
-(unsigned long long)writeInt:(unsigned long long)arg1 ;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1 ;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)writeRoomForInt:(int*)arg1 ;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2 ;
-(BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2 ;
@end

