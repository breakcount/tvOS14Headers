/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIImageTile.h>

@class PXTitleSubtitleUILabel, PXImageTitleSubtitleSpec, NSString;

@interface PXUIImageTitleSubtitleTile : PXUIImageTile {

	PXTitleSubtitleUILabel* _label;
	PXImageTitleSubtitleSpec* _spec;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)view;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
@end
