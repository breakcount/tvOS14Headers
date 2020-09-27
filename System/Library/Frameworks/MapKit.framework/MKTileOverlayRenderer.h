/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@protocol OS_dispatch_queue;
@class GEOTileKeyList, NSObject;

@interface MKTileOverlayRenderer : MKOverlayRenderer {

	GEOTileKeyList* _pendingRequests;
	NSObject*<OS_dispatch_queue> _pendingRequestsLock;

}
-(void)reloadData;
-(void)drawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithOverlay:(id)arg1 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(BOOL)_mayExtendOutsideBounds;
-(id)initWithTileOverlay:(id)arg1 ;
@end

