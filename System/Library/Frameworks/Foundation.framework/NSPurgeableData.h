/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

	unsigned long long _length;
	int _accessCount;
	unsigned char _private[32];
	void* _reserved;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(void)_destroyMemory;
@end

