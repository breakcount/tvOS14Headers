/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl {

	NSString* _filterType;
	UIColor* _inputColor1;
	UIColor* _inputColor2;
	UIColor* _compositingColor;
	BOOL _inputReversed;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(id)initWithFilter:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 compositingColor:(id)arg4 inputReversed:(BOOL)arg5 ;
-(id)implementationReplacingTintColor:(id)arg1 ;
@end

