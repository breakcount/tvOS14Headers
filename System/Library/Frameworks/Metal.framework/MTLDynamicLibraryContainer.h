/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class MTLLoadedFile, NSObject, NSArray, NSString, NSData;

@interface MTLDynamicLibraryContainer : NSObject {

	MTLLoadedFile* _fileMapping;
	id<MTLDevice> _device;
	NSObject*<OS_dispatch_data> _vendorData;
	NSArray* _exportedFunctions;
	NSArray* _exportedVariables;
	NSArray* _importedSymbols;
	NSArray* _importedLibraries;
	NSString* _installName;
	NSData* _airData;
	unsigned long long _airOffset;
	unsigned long long _airSize;
	int _airVersion;
	SCD_Struct_MT6 _libraryUUID;

}
-(oneway void)release;
-(void)dealloc;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)airData;
-(id)initWithLibrary:(MTLLibraryData*)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
@end

