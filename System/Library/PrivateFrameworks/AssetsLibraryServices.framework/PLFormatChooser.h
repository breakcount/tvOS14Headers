/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class PLDeviceConfiguration, PLImageFormat, NSArray;

@interface PLFormatChooser : NSObject {

	PLDeviceConfiguration* _deviceConfiguration;
	PLImageFormat* _posterThumbnailFormat;
	NSArray* _supportedDerivativeFormats;
	PLImageFormat* _fullScreenFormatForCurrentDevice;
	PLImageFormat* _indexSheetUnbakedFormat;
	PLImageFormat* _largestUncroppedNonJPEGThumbnailFormat;
	PLImageFormat* _masterThumbnailFormat;
	PLImageFormat* _portraitScrubberThumbnailFormat;
	PLImageFormat* _landscapeScrubberThumbnailFormat;

}

@property (nonatomic,readonly) NSArray * supportedDerivativeFormats;                                //@synthesize supportedDerivativeFormats=_supportedDerivativeFormats - In the implementation block
@property (nonatomic,readonly) PLImageFormat * fullScreenFormatForCurrentDevice;                    //@synthesize fullScreenFormatForCurrentDevice=_fullScreenFormatForCurrentDevice - In the implementation block
@property (nonatomic,readonly) PLImageFormat * indexSheetUnbakedFormat;                             //@synthesize indexSheetUnbakedFormat=_indexSheetUnbakedFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * largestUncroppedNonJPEGThumbnailFormat;              //@synthesize largestUncroppedNonJPEGThumbnailFormat=_largestUncroppedNonJPEGThumbnailFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * masterThumbnailFormat;                               //@synthesize masterThumbnailFormat=_masterThumbnailFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * portraitScrubberThumbnailFormat;                     //@synthesize portraitScrubberThumbnailFormat=_portraitScrubberThumbnailFormat - In the implementation block
@property (nonatomic,readonly) PLImageFormat * landscapeScrubberThumbnailFormat;                    //@synthesize landscapeScrubberThumbnailFormat=_landscapeScrubberThumbnailFormat - In the implementation block
+(CGSize)_desiredImageSizeForRequestedViewSizeInPixels:(CGSize)arg1 isAspectFill:(BOOL)arg2 srcAspectRatio:(double)arg3 ;
+(id)_suppportedFullSizeFormatIDs;
+(id)defaultFormatChooser;
-(id)initWithDeviceConfiguration:(id)arg1 ;
-(id)derivativeFormatThatFitsSize:(CGSize)arg1 contentMode:(long long)arg2 demoteFactor:(double)arg3 srcAspectRatio:(double)arg4 desiredImagePixelSize:(CGSize*)arg5 ;
-(id)_bestFormatWithSize:(CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 hasAdjustmentsHandler:(/*^block*/id)arg6 desiredImagePixelSize:(CGSize*)arg7 ;
-(id)_nextLargestAcceptableFormatForFormat:(id)arg1 ;
-(id)_standardDegradedFormatFallingBackFromFormat:(id)arg1 ;
-(id)_fastestDegradedFormatFallingBackFromFormat:(id)arg1 ;
-(void)chooseFormatsForSize:(CGSize)arg1 specificVersionType:(long long)arg2 contentMode:(long long)arg3 demoteFactor:(double)arg4 srcAspectRatio:(double)arg5 degradedFormatPolicy:(long long)arg6 hasAdjustmentsHandler:(/*^block*/id)arg7 desiredImagePixelSize:(CGSize*)arg8 bestFormat:(id*)arg9 degradedFormat:(id*)arg10 ;
-(CGSize)posterThumbnailSize;
-(NSArray *)supportedDerivativeFormats;
-(PLImageFormat *)fullScreenFormatForCurrentDevice;
-(PLImageFormat *)indexSheetUnbakedFormat;
-(PLImageFormat *)largestUncroppedNonJPEGThumbnailFormat;
-(PLImageFormat *)masterThumbnailFormat;
-(PLImageFormat *)portraitScrubberThumbnailFormat;
-(PLImageFormat *)landscapeScrubberThumbnailFormat;
@end

