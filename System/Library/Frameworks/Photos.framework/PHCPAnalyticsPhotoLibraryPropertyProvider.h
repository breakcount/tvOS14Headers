/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPAnalyticsPhotoKitPropertyProvider.h>

@class PHPhotoLibrary, CPLStatus, NSString;

@interface PHCPAnalyticsPhotoLibraryPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider> {

	PHPhotoLibrary* _photoLibrary;
	CPLStatus* _cplStatus;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,__weak,readonly) CPLStatus * cplStatus;                      //@synthesize cplStatus=_cplStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(CPLStatus *)cplStatus;
-(void)registerSystemProperties:(id)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(id)_fetchLibrarySummary;
-(id)_librarySizeRange:(long long)arg1 ;
@end

