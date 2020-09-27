/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPRatingCommand : MPRemoteCommand {

	float _minimumRating;
	float _maximumRating;

}

@property (assign,nonatomic) float minimumRating;              //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) float maximumRating;              //@synthesize maximumRating=_maximumRating - In the implementation block
-(void)setMaximumRating:(float)arg1 ;
-(void)setMinimumRating:(float)arg1 ;
-(float)minimumRating;
-(float)maximumRating;
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithRating:(float)arg1 ;
@end

