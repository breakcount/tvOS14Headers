/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/TVImageLoader.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface VUIImageLoader : NSObject <TVImageLoader> {

	NSMutableDictionary* _imageLoadContextsByImageIdentifier;
	NSOperationQueue* _imageLoadOperationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * imageLoadContextsByImageIdentifier;              //@synthesize imageLoadContextsByImageIdentifier=_imageLoadContextsByImageIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * imageLoadOperationQueue;                            //@synthesize imageLoadOperationQueue=_imageLoadOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_scaledImageIdentifierWithImageIdentifier:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
-(void)_cancelAllImageLoads;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageIdentifierWithImageLoadParams:(id)arg1 ;
-(NSMutableDictionary *)imageLoadContextsByImageIdentifier;
-(NSOperationQueue *)imageLoadOperationQueue;
-(void)setImageLoadContextsByImageIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setImageLoadOperationQueue:(NSOperationQueue *)arg1 ;
@end

