/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PPPaths : NSObject
+(id)logDirectory;
+(id)topDirectory;
+(id)subdirectory:(id)arg1 ;
+(id)filename:(id)arg1 subdirectory:(id)arg2 ;
+(id)topDirectoryCreateIfNeeded:(BOOL)arg1 ;
+(id)subdirectory:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)filename:(id)arg1 subdirectory:(id)arg2 createIfNeeded:(BOOL)arg3 ;
+(id)logSubdirectory:(id)arg1 ;
+(id)filename:(id)arg1 logSubdirectory:(id)arg2 ;
+(id)logDirectoryCreateIfNeeded:(BOOL)arg1 ;
+(id)logSubdirectory:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(id)filename:(id)arg1 logSubdirectory:(id)arg2 createIfNeeded:(BOOL)arg3 ;
+(id)resourcesDirectory;
+(id)defaultAssetPathForNamespaceId:(unsigned)arg1 factorName:(id)arg2 ;
@end

