/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL, NSData, NSString, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject {

	NSURL* _fileSystemURL;

}

@property (nonatomic,retain) NSData * bookmarkData; 
@property (nonatomic,retain) NSString * pathRelativeToVolume; 
@property (nonatomic,retain) PLInternalResource * resource; 
+(id)entityName;
+(id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2 ;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(id)fileSystemURL;
@end

