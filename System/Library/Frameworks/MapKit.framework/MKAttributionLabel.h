/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString;

@interface MKAttributionLabel : UIView {

	NSAttributedString* _strokeText;
	NSAttributedString* _innerText;
	unsigned long long _mapType;
	BOOL _useDarkText;

}

@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(void)drawRect:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateTextColor;
-(void)_prepareLabel;
-(id)_attributesWithStroke:(BOOL)arg1 ;
@end

