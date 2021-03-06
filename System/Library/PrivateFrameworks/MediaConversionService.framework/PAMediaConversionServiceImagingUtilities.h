/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaConversionService/MediaConversionService-Structs.h>
@interface PAMediaConversionServiceImagingUtilities : NSObject
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(CGSize)arg3 outputFileType:(id)arg4 error:(id*)arg5 ;
+(id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(CGSize*)arg3 ;
+(id)imagePropertiesForFileAtURL:(id)arg1 ;
+(BOOL)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(CGSize)arg3 outputFileType:(id)arg4 error:(id*)arg5 ;
+(BOOL)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(CGImageDestinationRef)arg2 maximumSize:(CGSize)arg3 error:(id*)arg4 ;
@end

