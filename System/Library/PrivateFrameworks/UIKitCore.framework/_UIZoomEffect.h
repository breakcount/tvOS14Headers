/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@interface _UIZoomEffect : UIVisualEffect {

	double _zoomAmount;
	BOOL _isUnderlay;

}
+(BOOL)supportsSecureCoding;
+(id)zoomEffectWithMagnitude:(double)arg1 ;
+(id)_underlayZoomEffectWithMagnitude:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)_viewEntry;
@end

