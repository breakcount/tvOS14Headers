/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesMapUpdatePlanResult <NSObject>
@property (readonly) NSSet * annotationsToAddImmediately; 
@property (readonly) NSSet * annotationsToRemoveImmediately; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasStarted; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasEnded; 
@property (readonly) NSSet * annotationsToRedraw; 
@property (readonly) NSSet * annotationsWithUpdatedIndex; 
@property (readonly) NSSet * overlaysToAddImmediately; 
@property (readonly) NSSet * overlaysToRemoveImmediately; 
@required
-(NSSet *)annotationsToAddImmediately;
-(NSSet *)annotationsToRemoveImmediately;
-(NSSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSSet *)annotationsToRedraw;
-(NSSet *)annotationsWithUpdatedIndex;
-(NSSet *)overlaysToAddImmediately;
-(NSSet *)overlaysToRemoveImmediately;

@end

