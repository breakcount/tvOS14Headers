/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface PXPersonFaceTileImageCombiner : NSObject {

	unsigned long long _currentGeneration;

}
+(void)initialize;
+(id)_generateCombinedImageFromImages:(id)arg1 context:(id)arg2 ;
+(id)placeholderImageForNumberOfFaces:(unsigned long long)arg1 context:(id)arg2 ;
-(void)requestImageForPersons:(id)arg1 context:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_returnCombinedImage:(id)arg1 generation:(unsigned long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

