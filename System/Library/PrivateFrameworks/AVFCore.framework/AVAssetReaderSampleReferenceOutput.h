/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {

	AVAssetReaderSampleReferenceOutputInternal* _sampleReferenceOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
+(id)assetReaderSampleReferenceOutputWithTrack:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(AVAssetTrack *)track;
-(id)mediaType;
-(id)_asset;
-(id)initWithTrack:(id)arg1 ;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
@end

