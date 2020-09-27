/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;
@interface _UISEOrthogonalHysteresisGestureFeature : _UISEGestureFeature {

	id<_UISEGestureFeatureSettings> _settings;
	id<_UISETouchedEdgesProvider> _provider;
	CGPoint _initialLocation;
	double _initialTimestamp;

}
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 ;
@end

