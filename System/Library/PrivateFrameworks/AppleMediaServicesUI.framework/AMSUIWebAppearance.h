/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying> {

	UIColor* _backgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)systemBackgroundColor;
+(id)secondarySystemBackgroundColor;
+(id)tertiarySystemBackgroundColor;
+(id)systemGroupedBackgroundColor;
+(id)secondarySystemGroupedBackgroundColor;
+(id)tertiarySystemGroupedBackgroundColor;
+(id)defaultAppearance;
+(id)tableViewAppearance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)_convertHexString:(id)arg1 ;
-(void)updateBackgroundColorWithJSString:(id)arg1 ;
@end

