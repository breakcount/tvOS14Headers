/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSMutableData, NSMutableArray;

@interface DSMutableArchive : NSObject {

	long long _format;
	NSMutableData* _dataBuffer;
	NSMutableArray* _tableOfContents;

}

@property (nonatomic,retain) NSMutableData * dataBuffer;                    //@synthesize dataBuffer=_dataBuffer - In the implementation block
@property (nonatomic,retain) NSMutableArray * tableOfContents;              //@synthesize tableOfContents=_tableOfContents - In the implementation block
@property (assign,nonatomic) long long format;                              //@synthesize format=_format - In the implementation block
+(id)archive;
+(BOOL)extractEntry:(archiveRef)arg1 toArchive:(archiveRef)arg2 ;
+(BOOL)extractArchive:(id)arg1 toDirectory:(id)arg2 ;
-(id)init;
-(NSMutableData *)dataBuffer;
-(long long)format;
-(void)setFormat:(long long)arg1 ;
-(BOOL)addURL:(id)arg1 prefix:(id)arg2 error:(id*)arg3 ;
-(BOOL)addURL:(id)arg1 prefix:(id)arg2 flatten:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_addPathToContents:(id)arg1 searchQueue:(id)arg2 flatten:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_addDirectoryToContents:(id)arg1 searchQueue:(id)arg2 flatten:(BOOL)arg3 error:(id*)arg4 ;
-(NSMutableArray *)tableOfContents;
-(BOOL)_addFile:(id)arg1 archive:(archiveRef)arg2 error:(id*)arg3 ;
-(void)_setFormatOnArchive:(archiveRef)arg1 ;
-(BOOL)_writeArchive:(archiveRef)arg1 error:(id*)arg2 ;
-(id)archiveAsTempFileWithTemplate:(id)arg1 suffix:(id)arg2 error:(id*)arg3 ;
-(id)archiveAsTempFileWithTemplate:(id)arg1 directory:(id)arg2 suffix:(id)arg3 error:(id*)arg4 ;
-(BOOL)archiveAsFileUsingDescriptor:(int)arg1 error:(id*)arg2 ;
-(BOOL)addURL:(id)arg1 error:(id*)arg2 ;
-(id)archiveAsDataWithError:(id*)arg1 ;
-(id)archiveAsTempDirectoryWithName:(id)arg1 error:(id*)arg2 ;
-(id)archiveAsTempFileWithTemplate:(id)arg1 error:(id*)arg2 ;
-(BOOL)archiveAsFile:(id)arg1 error:(id*)arg2 ;
-(void)setDataBuffer:(NSMutableData *)arg1 ;
-(void)setTableOfContents:(NSMutableArray *)arg1 ;
@end

