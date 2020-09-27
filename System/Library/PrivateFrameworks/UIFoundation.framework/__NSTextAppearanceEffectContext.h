/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, CUICatalog, CUIStyleEffectConfiguration, UIFont, UIColor;

@interface __NSTextAppearanceEffectContext : NSObject {

	NSString* _effectName;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _effectConfiguration;
	UIFont* _font;
	UIColor* _color;

}
-(void)dealloc;
-(id)initWithTextEffectName:(id)arg1 catalog:(id)arg2 styleEffectConfiguration:(id)arg3 font:(id)arg4 color:(id)arg5 applicationFrameworkContext:(long long)arg6 useSimplifiedEffect:(BOOL)arg7 ;
-(void)drawGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 context:(CGContextRef)arg4 ;
@end

