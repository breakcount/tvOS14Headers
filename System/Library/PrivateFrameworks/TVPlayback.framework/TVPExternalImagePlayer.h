/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPMediaItem;
#import <TVPlayback/TVPlayback-Structs.h>
@class NSDate, UIImage, CADisplayLink, TVPExternalImageLoader, NSObject, NSMutableArray;

@interface TVPExternalImagePlayer : NSObject {

	double _rate;
	NSDate* _playbackDate;
	UIImage* _currentImage;
	/*^block*/id _elapsedTimeUpdateBlock;
	/*^block*/id _imageUpdateBlock;
	CADisplayLink* _displayLink;
	double _previousTimestamp;
	NSDate* _referenceDate;
	TVPExternalImageLoader* _imageLoader;
	NSObject*<TVPMediaItem> _mediaItem;
	NSMutableArray* _imageInfosBeingLoaded;
	double _currentImageTime;
	double _imageInterval;
	SCD_Struct_TV4 _elapsedTime;
	SCD_Struct_TV4 _referenceTime;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                         //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double previousTimestamp;                            //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV4 referenceTime;                        //@synthesize referenceTime=_referenceTime - In the implementation block
@property (nonatomic,retain) NSDate * referenceDate;                              //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,retain) NSDate * playbackDate;                               //@synthesize playbackDate=_playbackDate - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                              //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) TVPExternalImageLoader * imageLoader;                //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                   //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageInfosBeingLoaded;              //@synthesize imageInfosBeingLoaded=_imageInfosBeingLoaded - In the implementation block
@property (assign,nonatomic) double currentImageTime;                             //@synthesize currentImageTime=_currentImageTime - In the implementation block
@property (assign,nonatomic) double imageInterval;                                //@synthesize imageInterval=_imageInterval - In the implementation block
@property (assign,nonatomic) double rate;                                         //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV4 elapsedTime;                          //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,copy) id elapsedTimeUpdateBlock;                             //@synthesize elapsedTimeUpdateBlock=_elapsedTimeUpdateBlock - In the implementation block
@property (nonatomic,copy) id imageUpdateBlock;                                   //@synthesize imageUpdateBlock=_imageUpdateBlock - In the implementation block
-(void)invalidate;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setElapsedTime:(SCD_Struct_TV4)arg1 ;
-(SCD_Struct_TV4)elapsedTime;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(TVPExternalImageLoader *)imageLoader;
-(UIImage *)currentImage;
-(void)setImageLoader:(TVPExternalImageLoader *)arg1 ;
-(NSDate *)playbackDate;
-(void)setPlaybackDate:(NSDate *)arg1 ;
-(void)setImageInterval:(double)arg1 ;
-(void)_cancelAllImageLoads;
-(double)_timeAfterRemovingInterstitials:(double)arg1 ;
-(NSMutableArray *)imageInfosBeingLoaded;
-(void)setImageInfosBeingLoaded:(NSMutableArray *)arg1 ;
-(double)imageInterval;
-(void)setPreviousTimestamp:(double)arg1 ;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(void)_updateImageIntervalWithRate:(double)arg1 ;
-(void)_loadImagesIfNecessary;
-(void)_displayLinkTimerFired:(id)arg1 ;
-(double)previousTimestamp;
-(SCD_Struct_TV4)referenceTime;
-(void)_cancelStaleImageLoadsForTime:(double)arg1 ;
-(double)currentImageTime;
-(id)imageUpdateBlock;
-(void)setCurrentImageTime:(double)arg1 ;
-(id)elapsedTimeUpdateBlock;
-(id)initWithMediaItem:(id)arg1 referenceTime:(SCD_Struct_TV4)arg2 forDate:(id)arg3 ;
-(void)setElapsedTimeUpdateBlock:(id)arg1 ;
-(void)setImageUpdateBlock:(id)arg1 ;
-(void)setReferenceTime:(SCD_Struct_TV4)arg1 ;
@end

