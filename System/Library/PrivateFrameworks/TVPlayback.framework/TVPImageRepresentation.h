/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVPlayback/TVPlayback-Structs.h>
@class NSString;

@interface TVPImageRepresentation : NSObject {

	BOOL _fixedFrame;
	CGRect _sourceRect;
	CGRect _destinationRect;

}

@property (assign,nonatomic) CGRect sourceRect;                                //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) CGRect destinationRect;                           //@synthesize destinationRect=_destinationRect - In the implementation block
@property (assign,getter=isFixedFrame,nonatomic) BOOL fixedFrame;              //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
+(id)_loadingQueue;
+(id)imageRepresentationWithImageProxy:(id)arg1 ;
+(id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)imageRepresentationWithURL:(id)arg1 ;
+(id)imageRepresentationWithImage:(id)arg1 ;
+(id)imageRepresentationWithNamedLayerImage:(id)arg1 ;
-(NSString *)cacheKey;
-(void)setFixedFrame:(BOOL)arg1 ;
-(CGRect)destinationRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
-(void)setDestinationRect:(CGRect)arg1 ;
-(CGImageRef)_originalImage;
-(id)_originalImageCacheKey;
-(CGImageRef)_imageForOriginalImage:(CGImageRef)arg1 ;
-(CGImageRef)newImage;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isFixedFrame;
@end

