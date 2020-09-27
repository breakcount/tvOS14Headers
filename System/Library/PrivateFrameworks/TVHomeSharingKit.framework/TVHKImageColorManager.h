/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface TVHKImageColorManager : NSObject {

	NSCache* _imageColorsCache;
	NSObject*<OS_dispatch_queue> _imageColorsCacheDispatchQueue;

}

@property (nonatomic,retain) NSCache * imageColorsCache;                                              //@synthesize imageColorsCache=_imageColorsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageColorsCacheDispatchQueue;              //@synthesize imageColorsCacheDispatchQueue=_imageColorsCacheDispatchQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_cachedAnyalzedImageColorsForImageIdentifier:(id)arg1 ;
-(void)_cacheAnyalzedImageColors:(id)arg1 forImageIdentifier:(id)arg2 ;
-(NSCache *)imageColorsCache;
-(id)imageColorsForImage:(id)arg1 imageIdentifier:(id)arg2 ;
-(void)setImageColorsCache:(NSCache *)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageColorsCacheDispatchQueue;
-(void)setImageColorsCacheDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

