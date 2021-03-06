/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXContentFilterFooterViewDelegate.h>

@class PXActionManager, PXContentFilterFooterView, PXContentFilterState, UIView, NSString;

@interface PXContentFilterFooterController : NSObject <PXContentFilterFooterViewDelegate> {

	PXActionManager* _actionManager;
	PXContentFilterFooterView* _footerFilterView;
	PXContentFilterState* _filterState;
	UIView* _view;

}

@property (nonatomic,readonly) PXContentFilterFooterView * footerFilterView; 
@property (nonatomic,copy) PXContentFilterState * filterState;                            //@synthesize filterState=_filterState - In the implementation block
@property (nonatomic,retain) UIView * view;                                               //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)contentFilterFooterViewDidTapShowFilter:(id)arg1 sender:(id)arg2 ;
-(id)initWithActionManager:(id)arg1 ;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(PXContentFilterFooterView *)footerFilterView;
-(PXContentFilterState *)filterState;
@end

