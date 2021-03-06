/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKTrackableAnnotationPresentation <NSObject>
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) BOOL tracking; 
@property (assign,getter=isAnimatingAccuracy,nonatomic) BOOL animatingAccuracy; 
@property (assign,nonatomic) double presentationAccuracy; 
@property (nonatomic,readonly) double minimumAccuracy; 
@property (nonatomic,readonly) VKEdgeInsets annotationTrackingEdgeInsets; 
@required
-(void)setTracking:(BOOL)arg1;
-(CGSize)presentationCoordinate;
-(void)setPresentationCoordinate:(CGSize)arg1;
-(BOOL)tracking;
-(BOOL)isAnimatingAccuracy;
-(void)setAnimatingAccuracy:(BOOL)arg1;
-(double)presentationAccuracy;
-(void)setPresentationAccuracy:(double)arg1;
-(double)minimumAccuracy;
-(VKEdgeInsets)annotationTrackingEdgeInsets;

@end

