/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAppPatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppPatch.dylib/libAppPatch.dylib-Structs.h>
@interface MIBOMWrapper : NSObject
+(BOOL)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3 ;
+(BOOL)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3 extractionProgressBlock:(/*^block*/id)arg4 ;
+(BOOL)_countFilesAndBytesInArchiveAtURL:(id)arg1 withBOMCopier:(BOMCopierRef)arg2 totalFiles:(unsigned long long*)arg3 totalUncompressedBytes:(unsigned long long*)arg4 error:(id*)arg5 ;
@end

