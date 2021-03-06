/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK1 boundingMapRect; 
@optional
-(BOOL)intersectsMapRect:(SCD_Struct_MK1)arg1;
-(BOOL)canReplaceMapContent;

@required
-(CLLocationCoordinate2D)coordinate;
-(SCD_Struct_MK1)boundingMapRect;

@end

