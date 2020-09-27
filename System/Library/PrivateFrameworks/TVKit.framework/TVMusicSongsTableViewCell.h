/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVMusicTableViewCell.h>

@class UIView, UILabel;

@interface TVMusicSongsTableViewCell : TVMusicTableViewCell {

	BOOL _playable;
	BOOL _showsTrackNumber;
	UIView* _accessoryViewForFocus;
	unsigned long long _trackNumber;
	UILabel* _trackNumberLabel;

}

@property (nonatomic,retain) UILabel * trackNumberLabel;                  //@synthesize trackNumberLabel=_trackNumberLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryViewForFocus;              //@synthesize accessoryViewForFocus=_accessoryViewForFocus - In the implementation block
@property (assign,nonatomic) BOOL playable;                               //@synthesize playable=_playable - In the implementation block
@property (assign,nonatomic) BOOL showsTrackNumber;                       //@synthesize showsTrackNumber=_showsTrackNumber - In the implementation block
@property (assign,nonatomic) unsigned long long trackNumber;              //@synthesize trackNumber=_trackNumber - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)trackNumber;
-(void)setTrackNumber:(unsigned long long)arg1 ;
-(void)setPlayable:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)playable;
-(void)_updateTrackNumberLabel;
-(id)_textLabelColor;
-(id)_detailTextLabelColor;
-(void)_updateColorsWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2 ;
-(UILabel *)trackNumberLabel;
-(BOOL)showsTrackNumber;
-(id)_trackNumberLabel;
-(void)setTrackNumberLabel:(UILabel *)arg1 ;
-(void)setShowsTrackNumber:(BOOL)arg1 ;
-(UIView *)accessoryViewForFocus;
-(void)setAccessoryViewForFocus:(UIView *)arg1 ;
@end

