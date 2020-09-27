/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBlurEffectImpl.h>

@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {

	long long _style;
	NSString* _lightMaterial;
	NSString* _darkMaterial;
	NSBundle* _bundle;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(id)tintColor;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
@end

