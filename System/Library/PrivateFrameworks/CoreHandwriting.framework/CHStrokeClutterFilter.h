/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject <NSCopying> {

	CHCanvasHeatmap* _heatMap;
	NSDictionary* _CHStrokeID2HeatmapItemID;
	NSDictionary* _heatmapItemID2CHStrokeID;

}

@property (nonatomic,readonly) long long highDensityStrokeCount; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)debugQuickLookObject;
-(id)initWithCanvasHeatmap:(CHCanvasHeatmap*)arg1 stroke2ItemMapping:(id)arg2 item2StrokeMapping:(id)arg3 ;
-(id)clutterFilterByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 affectedStrokeIdentifiers:(id*)arg3 ;
-(BOOL)isHighDensityStroke:(id)arg1 ;
-(long long)highDensityStrokeCount;
-(id)strokeIDsWithinRectangleRegion:(CGRect*)arg1 ;
@end

