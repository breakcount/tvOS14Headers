/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject {

	BOOL _inUse;
	AVAssetImageGenerator* _imageGenerator;

}

@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic) BOOL inUse;                                          //@synthesize inUse=_inUse - In the implementation block
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(AVAssetImageGenerator *)imageGenerator;
-(void)setImageGenerator:(AVAssetImageGenerator *)arg1 ;
-(BOOL)inUse;
@end

