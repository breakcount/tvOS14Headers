/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLTilePlaceholderView.h>

@class UIActivityIndicatorView, UILabel, UIView, NSString;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView> {

	UIActivityIndicatorView* _loadingIndicatorView;
	UILabel* _loadingLabel;
	UIView* _loadingContainerView;
	double _lastViewPhaseChangeDate;
	BOOL _indicatorIsVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setImageRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(void)showErrorIndicator;
-(void)showLoadingIndicator;
-(void)updateCloudDownloadProgress:(double)arg1 ;
-(void)setToolbarVisible:(BOOL)arg1 ;
@end

