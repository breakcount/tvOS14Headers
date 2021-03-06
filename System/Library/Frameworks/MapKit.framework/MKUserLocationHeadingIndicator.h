/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITraitCollection;


@protocol MKUserLocationHeadingIndicator <NSObject>
@property (assign,nonatomic) double minimumAccuracyRadius; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@property (assign,nonatomic) unsigned long long mapType; 
@required
-(void)setMapType:(unsigned long long)arg1;
-(unsigned long long)mapType;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(id)arg1;
-(void)updateTintColor:(id)arg1;
-(void)setAccuracyRadius:(double)arg1 duration:(double)arg2;
-(void)setMinimumAccuracyRadius:(double)arg1;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
-(void)updateHeading:(double)arg1;
-(double)minimumAccuracyRadius;

@end

