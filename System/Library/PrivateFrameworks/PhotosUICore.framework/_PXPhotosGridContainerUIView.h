/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIView.h>

@protocol _PXPhotosGridContainerDelegate;
@interface _PXPhotosGridContainerUIView : UIView {

	id<_PXPhotosGridContainerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PXPhotosGridContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_PXPhotosGridContainerDelegate>)delegate;
-(void)setDelegate:(id<_PXPhotosGridContainerDelegate>)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

