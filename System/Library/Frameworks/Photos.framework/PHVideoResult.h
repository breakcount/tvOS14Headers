/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCompositeMediaResult.h>

@class NSURL, NSString;

@interface PHVideoResult : PHCompositeMediaResult {

	NSURL* _videoURL;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,retain) NSURL * videoURL;                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(BOOL)containsValidData;
-(id)allowedInfoKeys;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg1 ;
@end

