/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSMutableArray;

@interface VCPMovieCurationResults : NSObject {

	PHAsset* _phAsset;
	NSMutableArray* _highlights;

}

@property (nonatomic,readonly) PHAsset * phAsset;                               //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * highlights;              //@synthesize highlights=_highlights - In the implementation block
-(id)initWithPHAsset:(id)arg1 ;
-(PHAsset *)phAsset;
-(NSMutableArray *)highlights;
@end

