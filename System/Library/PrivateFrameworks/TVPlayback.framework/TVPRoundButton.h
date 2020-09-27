/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPFloatingButton.h>

@class UIImageView, NSMutableDictionary;

@interface TVPRoundButton : TVPFloatingButton {

	UIImageView* _imageView;
	NSMutableDictionary* _imagesForControlState;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * imagesForControlState;              //@synthesize imagesForControlState=_imagesForControlState - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(NSMutableDictionary *)imagesForControlState;
-(void)_updateImageForCurrentControlState;
-(id)imageForControlState:(unsigned long long)arg1 ;
-(id)initWithDiameter:(double)arg1 ;
-(void)setImage:(id)arg1 forControlState:(unsigned long long)arg2 ;
@end

