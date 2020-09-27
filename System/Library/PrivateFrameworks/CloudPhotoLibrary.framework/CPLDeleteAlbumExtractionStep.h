/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@interface CPLDeleteAlbumExtractionStep : CPLBatchExtractionStep {

	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) unsigned long long maximumCount;              //@synthesize maximumCount=_maximumCount - In the implementation block
-(id)shortDescription;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(unsigned long long)maximumCount;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3 ;
@end

