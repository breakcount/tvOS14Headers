/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class CALayer;

@interface PXImageLayerModulator : NSObject {

	BOOL _displayingVideoComplement;
	CALayer* _layer;

}

@property (nonatomic,readonly) CALayer * layer;                                                                //@synthesize layer=_layer - In the implementation block
@property (getter=isDisplayingVideoComplement,nonatomic,readonly) BOOL displayingVideoComplement;              //@synthesize displayingVideoComplement=_displayingVideoComplement - In the implementation block
-(id)init;
-(CALayer *)layer;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isDisplayingVideoComplement;
@end
