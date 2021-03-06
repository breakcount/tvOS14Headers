/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class OKWidgetView;

@interface OKWidgetGridViewCell : UICollectionViewCell {

	OKWidgetView* _widgetView;

}

@property (nonatomic,retain) OKWidgetView * widgetView;              //@synthesize widgetView=_widgetView - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setWidgetView:(OKWidgetView *)arg1 ;
-(OKWidgetView *)widgetView;
@end

