/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSString, NSMutableArray;

@interface MSVZipArchive : NSObject {

	BOMSysRef _bomsys;
	NSString* _archivePath;
	NSMutableArray* _filesToArchive;

}
-(id)init;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)addFileAtPath:(id)arg1 ;
-(BOOL)writeToFileAtPath:(id)arg1 withError:(id*)arg2 ;
-(BOOL)decompressToPath:(id)arg1 withError:(id*)arg2 ;
@end

