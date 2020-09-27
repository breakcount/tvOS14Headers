/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject {

	ARUISpriteTexture* _defaultSpriteTexture;
	ARUISpriteTexture* _wheelchairSpriteTexture;
	ARUISpriteTexture* _sharingSpriteTexture;
	ARUISpriteTexture* _wheelchairSharingSpriteTexture;

}
+(id)sharedInstance;
+(id)defaultSpriteSheet;
+(id)wheelchairSpriteSheet;
+(id)spriteSheetForRingType:(long long)arg1 ;
+(id)wheelchairSpriteSheetForRingType:(long long)arg1 ;
+(id)sharingSpriteSheet;
+(id)wheelchairSharingSpriteSheet;
-(id)defaultSpriteTexture;
-(id)wheelchairSpriteTexture;
-(id)sharingSpriteTexture;
-(id)wheelchairSharingSpriteTexture;
@end
