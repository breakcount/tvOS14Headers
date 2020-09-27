/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapLayoutResult.h>

@class NSOrderedSet, PXPlacesMapViewPort, NSMutableOrderedSet, NSString;

@interface PXPlacesMapLayoutResultImpl : NSObject <PXPlacesMapLayoutResult> {

	PXPlacesMapViewPort* _viewPort;
	NSMutableOrderedSet* _items;

}

@property (nonatomic,retain) NSMutableOrderedSet * items;                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) PXPlacesMapViewPort * viewPort;              //@synthesize viewPort=_viewPort - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * layoutItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)removeItem:(id)arg1 ;
-(NSMutableOrderedSet *)items;
-(void)addItem:(id)arg1 ;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(void)addItems:(id)arg1 ;
-(NSOrderedSet *)layoutItems;
-(PXPlacesMapViewPort *)viewPort;
-(void)setViewPort:(PXPlacesMapViewPort *)arg1 ;
@end

