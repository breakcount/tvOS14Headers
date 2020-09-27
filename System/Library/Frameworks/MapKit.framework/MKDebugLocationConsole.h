/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class MKMapView, NSTimer, NSString, UIColor, NSDateFormatter;

@interface MKDebugLocationConsole : UILabel {

	MKMapView* _parentMapView;
	NSTimer* _updateTimer;
	unsigned long long _pageIndex;
	NSString* _customText;
	UIColor* _customTextColor;
	BOOL _customTextEnabled;
	NSDateFormatter* _timeStampFormatter;

}

@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) BOOL customTextEnabled;                    //@synthesize customTextEnabled=_customTextEnabled - In the implementation block
-(void)setText:(id)arg1 ;
-(void)update;
-(void)updateFrameWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(CGRect)_debugViewFrameWithMapView:(id)arg1 ;
-(void)_consoleTapped:(id)arg1 ;
-(void)_updateGPSInfo;
-(void)_updateVehicleInfo;
-(void)_updateCustomText;
-(void)_showNextPage;
-(id)timeStampFormatter;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)updateCustomText:(id)arg1 textColor:(id)arg2 ;
-(unsigned long long)pageIndex;
-(BOOL)customTextEnabled;
-(void)setCustomTextEnabled:(BOOL)arg1 ;
@end

