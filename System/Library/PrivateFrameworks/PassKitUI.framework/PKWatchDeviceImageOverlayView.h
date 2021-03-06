/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface PKWatchDeviceImageOverlayView : UIView {

	UIImageView* _watchImageView;
	UIImageView* _overlayImageView;
	UIImage* _overlayImage;

}

@property (nonatomic,retain) UIImage * overlayImage;              //@synthesize overlayImage=_overlayImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
@end

