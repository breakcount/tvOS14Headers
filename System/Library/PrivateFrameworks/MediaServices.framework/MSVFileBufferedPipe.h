/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSFileHandle, NSPipe, NSObject, NSData, NSMutableSet;

@interface MSVFileBufferedPipe : NSObject {

	NSFileHandle* _writeBufferFileHandle;
	NSFileHandle* _readBufferFileHandle;
	NSPipe* _inputPipe;
	NSPipe* _outputPipe;
	NSObject*<OS_dispatch_source> _writeSource;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readyForData;
	BOOL _hasBufferedData;
	BOOL _readSourceClosed;
	NSData* _dataPendingWrite;
	unsigned _dataPendingOffset;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _uniqueWriteErrors;
	long long _writeSourceState;
	NSFileHandle* _fileHandleForReading;
	NSFileHandle* _fileHandleForWriting;

}

@property (retain,readonly) NSFileHandle * fileHandleForReading;              //@synthesize fileHandleForReading=_fileHandleForReading - In the implementation block
@property (retain,readonly) NSFileHandle * fileHandleForWriting;              //@synthesize fileHandleForWriting=_fileHandleForWriting - In the implementation block
+(id)pipe;
-(id)init;
-(NSFileHandle *)fileHandleForWriting;
-(NSFileHandle *)fileHandleForReading;
-(void)_outputReadyForWriting:(unsigned long long)arg1 ;
-(void)_inputReadyForReading:(unsigned long long)arg1 ;
-(void)_writeBufferedData;
-(void)_createBufferFiles;
@end

