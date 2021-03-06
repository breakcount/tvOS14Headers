/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UINamedLayerStack;
@class _UIAssetManager, NSObject;

@interface TVVolatileNamedLayerStack : NSObject {

	_UIAssetManager* _assetManager;
	NSObject*<UINamedLayerStack> _namedLayerStack;

}

@property (nonatomic,readonly) NSObject*<UINamedLayerStack> namedLayerStack;              //@synthesize namedLayerStack=_namedLayerStack - In the implementation block
+(id)volatileNamedLayerStackWithNamedLayerStack:(id)arg1 fromAssetManager:(id)arg2 ;
+(id)volatileNamedLayerStackWithNamedLayerStack:(id)arg1 ;
-(id)init;
-(id)_init;
-(NSObject*<UINamedLayerStack>)namedLayerStack;
@end

