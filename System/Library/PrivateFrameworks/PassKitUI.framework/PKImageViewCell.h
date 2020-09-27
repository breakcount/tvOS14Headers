/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIImage;

@interface PKImageViewCell : UITableViewCell {

	BOOL _matchCellBackgroundToImage;
	long long _imageViewContentMode;

}

@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long imageViewContentMode;               //@synthesize imageViewContentMode=_imageViewContentMode - In the implementation block
@property (assign,nonatomic) BOOL matchCellBackgroundToImage;              //@synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(long long)imageViewContentMode;
-(void)setMatchCellBackgroundToImage:(BOOL)arg1 ;
-(void)setImageViewContentMode:(long long)arg1 ;
-(BOOL)matchCellBackgroundToImage;
@end

