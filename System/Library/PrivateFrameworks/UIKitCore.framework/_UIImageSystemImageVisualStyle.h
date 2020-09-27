/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSCache;

@interface _UIImageSystemImageVisualStyle : NSObject {

	UIImage* _closeImage;
	UIImage* _cameraImage;
	UIImage* _actionsImage;
	UIImage* _checkmarkImage;
	UIImage* _strokedCheckmarkImage;
	NSCache* __systemImageCache;

}

@property (nonatomic,retain) NSCache * _systemImageCache;                                                  //@synthesize _systemImageCache=__systemImageCache - In the implementation block
@property (nonatomic,readonly) UIImage * closeImage;                                                       //@synthesize closeImage=_closeImage - In the implementation block
@property (nonatomic,readonly) UIImage * cameraImage;                                                      //@synthesize cameraImage=_cameraImage - In the implementation block
@property (nonatomic,readonly) UIImage * actionsImage;                                                     //@synthesize actionsImage=_actionsImage - In the implementation block
@property (nonatomic,readonly) UIImage * addImage; 
@property (nonatomic,readonly) UIImage * removeImage; 
@property (nonatomic,readonly) UIImage * checkmarkImage;                                                   //@synthesize checkmarkImage=_checkmarkImage - In the implementation block
@property (nonatomic,readonly) UIImage * strokedCheckmarkImage;                                            //@synthesize strokedCheckmarkImage=_strokedCheckmarkImage - In the implementation block
@property (nonatomic,readonly) UIImage * systemTableViewCellDisclosureIndicatorImage; 
@property (nonatomic,readonly) UIImage * systemTableViewCellDetailedDisclosureIndicatorImage; 
+(id)styleForConfiguration:(id)arg1 ;
+(id)_iosVisualStyle;
+(id)styleForThemeKey:(id)arg1 ;
-(id)init;
-(UIImage *)closeImage;
-(UIImage *)cameraImage;
-(UIImage *)addImage;
-(UIImage *)removeImage;
-(UIImage *)actionsImage;
-(UIImage *)checkmarkImage;
-(UIImage *)strokedCheckmarkImage;
-(id)addImageWithColor:(id)arg1 ;
-(id)removeImageWithColor:(id)arg1 ;
-(void)set_systemImageCache:(NSCache *)arg1 ;
-(void)_contentSizeCategoryChanged;
-(NSCache *)_systemImageCache;
-(id)_addImageWithColor:(id)arg1 name:(id)arg2 ;
-(id)_removeImageWithColor:(id)arg1 name:(id)arg2 ;
-(id)_cachedSystemImageForType:(id)arg1 withColor:(id)arg2 ;
-(UIImage *)systemTableViewCellDisclosureIndicatorImage;
-(UIImage *)systemTableViewCellDetailedDisclosureIndicatorImage;
@end

