/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject {

	BOOL _visible;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) BOOL visible;                 //@synthesize visible=_visible - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_colorFromShapeEffectValue:(/*function pointer*/void*)arg1 ;
-(unsigned)effectType;
@end

