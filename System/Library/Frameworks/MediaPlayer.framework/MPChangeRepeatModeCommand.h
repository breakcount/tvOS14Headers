/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	NSArray* _supportedRepeatTypes;
	long long _currentRepeatType;

}

@property (assign,nonatomic) long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(id)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2 ;
-(long long)currentRepeatType;
@end

