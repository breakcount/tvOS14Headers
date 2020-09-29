/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/CPAnalyticsDestinationProtocol.h>

@class PHPhotoLibrary, NSString;

@interface PXAnalyticsFeatureUsageCountDestination : NSObject <CPAnalyticsDestinationProtocol> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)processEvent:(id)arg1 ;
@end
