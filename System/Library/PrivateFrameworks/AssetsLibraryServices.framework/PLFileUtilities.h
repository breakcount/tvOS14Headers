/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileUtilities : NSObject
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)fileManager;
+(id)defaultSystemPhotoDataDirectory;
+(id)defaultSystemPhotoDataCPLDirectory;
+(id)defaultSystemPhotoDataMiscDirectory;
+(id)defaultSystemPhotoDCIMDirectory;
+(id)proxyLockFilePathForDatabasePath:(id)arg1 ;
+(id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2 ;
+(id)defaultSystemLibraryURL;
+(id)systemLibraryURL;
+(id)_defaultSystemLibraryPath;
+(BOOL)setPhotoLibraryBasePath:(id)arg1 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id*)arg4 ;
+(BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(long long)directoryEntryCountAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3 progress:(/*^block*/id)arg4 ;
+(BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id*)arg2 ;
+(id)descriptionForFileIngestionType:(long long)arg1 ;
+(BOOL)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id*)arg6 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)isFileExistsError:(id)arg1 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)_mobileOwnerAttributes;
+(long long)fileLengthForFilePath:(id)arg1 ;
+(BOOL)fileURL:(id)arg1 isEqualToFileURL:(id)arg2 ;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)filePath:(id)arg1 isEqualToFilePath:(id)arg2 ;
+(BOOL)URLIsInTrash:(id)arg1 ;
+(id)redactedDescriptionForFileURL:(id)arg1 ;
+(id)redactedDescriptionForPath:(id)arg1 ;
@end

