/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PKPhysicalCardArtworkView;

@interface PKOrderPhysicalCardHeroView : UIView {

	UIImageView* _backgroundView;
	PKPhysicalCardArtworkView* _artworkView;

}

@property (nonatomic,readonly) PKPhysicalCardArtworkView * artworkView;              //@synthesize artworkView=_artworkView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_backgroundImage;
-(PKPhysicalCardArtworkView *)artworkView;
@end

