/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSMutableArray, ENArchive, NSMutableData;

@interface ENProtobufCoder : NSObject {

	unsigned char _staticBuffer[256];
	NSMutableArray* _subCoders;
	ENArchive* _readArchive;
	const char* _readBase;
	const char* _readSrc;
	const char* _readEnd;
	char* _writeBase;
	char* _writeDst;
	char* _writeLim;
	_sFILE* _fileHandle;
	NSMutableData* _bufferData;
	unsigned long long _bufferOffset;
	unsigned long long _bufferMaxSize;

}

@property (nonatomic,readonly) ENArchive * readArchive;                     //@synthesize readArchive=_readArchive - In the implementation block
@property (nonatomic,readonly) const char* readBase;                        //@synthesize readBase=_readBase - In the implementation block
@property (nonatomic,readonly) const char* readSrc;                         //@synthesize readSrc=_readSrc - In the implementation block
@property (nonatomic,readonly) const char* readEnd;                         //@synthesize readEnd=_readEnd - In the implementation block
@property (nonatomic,readonly) char* writeBase;                             //@synthesize writeBase=_writeBase - In the implementation block
@property (nonatomic,readonly) char* writeDst;                              //@synthesize writeDst=_writeDst - In the implementation block
@property (nonatomic,readonly) char* writeLim;                              //@synthesize writeLim=_writeLim - In the implementation block
@property (nonatomic,readonly) _sFILE* fileHandle;                          //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,readonly) NSMutableData * bufferData;                  //@synthesize bufferData=_bufferData - In the implementation block
@property (assign,nonatomic) unsigned long long bufferOffset;               //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long bufferMaxSize;              //@synthesize bufferMaxSize=_bufferMaxSize - In the implementation block
-(id)init;
-(_sFILE*)fileHandle;
-(unsigned long long)bufferOffset;
-(void)prepareForReuse;
-(NSMutableData *)bufferData;
-(void)setFileHandle:(_sFILE*)arg1 ;
-(char*)writeBase;
-(void)setReadArchive:(ENArchive *)arg1 ;
-(BOOL)readType:(char*)arg1 tag:(unsigned long long*)arg2 eofOkay:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)readFixedUInt64:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)readNSStringAndReturnError:(id*)arg1 ;
-(BOOL)readVarIntUInt32:(unsigned*)arg1 error:(id*)arg2 ;
-(BOOL)skipType:(unsigned char)arg1 error:(id*)arg2 ;
-(void)setWriteMutableData:(id)arg1 ;
-(BOOL)writeFixedUInt64:(unsigned long long)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeNSString:(id)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeVarIntUInt32:(unsigned)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(const char*)readLengthDelimited:(unsigned long long*)arg1 error:(id*)arg2 ;
-(void)setReadMemory:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)readVarIntSInt32:(int*)arg1 error:(id*)arg2 ;
-(id)readNSDataAndReturnError:(id*)arg1 ;
-(void)setWriteMemory:(void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)writeVarIntSInt32:(int)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeNSData:(id)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(char*)writeDst;
-(BOOL)writeLengthDelimitedPtr:(const void*)arg1 length:(unsigned long long)arg2 tag:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)readVarInt:(unsigned long long*)arg1 eofOkay:(BOOL)arg2 error:(id*)arg3 ;
-(const char*)_readLength:(unsigned long long)arg1 eofOkay:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)writeVarInt:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_writeBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_skipLength:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)dequeueOrCreateSubCoder;
-(void)enqueueSubCoder:(id)arg1 ;
-(BOOL)readVarIntInt32:(int*)arg1 error:(id*)arg2 ;
-(BOOL)readVarIntSInt64:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)writeVarIntSInt64:(long long)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)readVarIntUInt64:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)writeVarIntUInt64:(unsigned long long)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)readFixedFloat:(float*)arg1 error:(id*)arg2 ;
-(BOOL)writeFixedFloat:(float)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)readFixedSInt32:(int*)arg1 error:(id*)arg2 ;
-(BOOL)writeFixedSInt32:(int)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)readFixedUInt32:(unsigned*)arg1 error:(id*)arg2 ;
-(BOOL)writeFixedUInt32:(unsigned)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)readFixedDouble:(double*)arg1 error:(id*)arg2 ;
-(BOOL)writeFixedDouble:(double)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)readFixedSInt64:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)writeFixedSInt64:(long long)arg1 tag:(unsigned long long)arg2 error:(id*)arg3 ;
-(ENArchive *)readArchive;
-(const char*)readBase;
-(const char*)readSrc;
-(const char*)readEnd;
-(char*)writeLim;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)bufferMaxSize;
-(void)setBufferMaxSize:(unsigned long long)arg1 ;
@end

