/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlayerRateCommand <MPCPlayerCommand>
@property (nonatomic,readonly) float minimumValue; 
@property (nonatomic,readonly) float maximumValue; 
@required
-(float)minimumValue;
-(float)maximumValue;
-(id)changeValue:(float)arg1;

@end
