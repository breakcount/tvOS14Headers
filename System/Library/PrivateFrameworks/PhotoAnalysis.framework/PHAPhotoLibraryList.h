/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject {

	NSMutableDictionary* _photoLibrariesByPath;

}

@property (retain) NSMutableDictionary * photoLibrariesByPath;              //@synthesize photoLibrariesByPath=_photoLibrariesByPath - In the implementation block
@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)saveToPersistentStorage;
-(void)addPhotoLibraryAtURL:(id)arg1 ;
-(void)removePhotoLibraryAtURL:(id)arg1 ;
-(void)removeAllPhotoLibraries;
-(void)enumeratePhotoLibrariesWithBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)photoLibrariesByPath;
-(void)setPhotoLibrariesByPath:(NSMutableDictionary *)arg1 ;
@end

