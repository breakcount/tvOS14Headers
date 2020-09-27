/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (readonly) unsigned long long offsetInFile; 
@property (copy,readonly) NSData * availableData; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)fileHandleWithNullDevice;
+(id)fileHandleWithStandardInput;
+(id)fileHandleWithStandardOutput;
+(id)fileHandleWithStandardError;
+(id)fileHandleForReadingAtPath:(id)arg1 ;
+(id)fileHandleForWritingAtPath:(id)arg1 ;
+(id)fileHandleForUpdatingAtPath:(id)arg1 ;
+(id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)closeFile;
-(int)fileDescriptor;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 ;
-(id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(id)readDataToEndOfFile;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)offsetInFile;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(id)initWithFileDescriptor:(int)arg1 ;
-(NSData *)availableData;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(void)_closeOnDealloc;
@end
