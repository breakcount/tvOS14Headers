/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedSelectionManagerSnapshotValidator.h>

@protocol PXSelectionCoordinatorDelegate;
@class PXSectionedSelectionManager, NSNumber, NSMutableOrderedSet, NSMapTable, NSOrderedSet, NSString;

@interface PXSelectionCoordinator : NSObject <PXChangeObserver, PXSectionedSelectionManagerSnapshotValidator> {

	PXSectionedSelectionManager* _currentlyMutatingSelectionManager;
	long long _currentlyMutatingObservationCount;
	SCD_Struct_PX50 _delegateRespondsTo;
	BOOL _selectionLimitReached;
	NSNumber* _selectionCountLimit;
	id<PXSelectionCoordinatorDelegate> _delegate;
	NSMutableOrderedSet* _mutableSelectedObjectIDs;
	NSMapTable* _stateByManager;

}

@property (nonatomic,readonly) NSMutableOrderedSet * mutableSelectedObjectIDs;                //@synthesize mutableSelectedObjectIDs=_mutableSelectedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMapTable * stateByManager;                                   //@synthesize stateByManager=_stateByManager - In the implementation block
@property (assign,nonatomic) BOOL selectionLimitReached;                                      //@synthesize selectionLimitReached=_selectionLimitReached - In the implementation block
@property (nonatomic,retain) NSNumber * selectionCountLimit;                                  //@synthesize selectionCountLimit=_selectionCountLimit - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * selectedObjectIDs; 
@property (assign,nonatomic,__weak) id<PXSelectionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXSelectionCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<PXSelectionCoordinatorDelegate>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setSelectionLimitReached:(BOOL)arg1 ;
-(id)selectionManager:(id)arg1 validateSnapshot:(id)arg2 ;
-(id)initWithSelectedOIDs:(id)arg1 ;
-(void)setSelectionCountLimit:(NSNumber *)arg1 ;
-(NSOrderedSet *)selectedObjectIDs;
-(void)_updateSelectionLimitReached;
-(void)_startMutatingSelectionManager:(id)arg1 ;
-(void)_stopMutatingSelectionManager:(id)arg1 ;
-(id)checkOutSelectionManagerForDataSourceManager:(id)arg1 ;
-(void)checkInSelectionManager:(id)arg1 ;
-(BOOL)modifySelectionWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 ;
-(void)_updateSelectionManagerToGlobalState:(id)arg1 managerState:(id)arg2 ;
-(void)_handleDataSourceChangeToSelectionManager:(id)arg1 state:(id)arg2 ;
-(void)_handleSelectionChangeToSelectionManager:(id)arg1 state:(id)arg2 ;
-(void)_modifySelectionWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 originatingSelectionManager:(id)arg3 ;
-(void)_performChangesToCoordinatedSelectionManagersWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 originatingSelectionManager:(id)arg3 ;
-(BOOL)test_validateInternalState;
-(NSNumber *)selectionCountLimit;
-(BOOL)selectionLimitReached;
-(NSMutableOrderedSet *)mutableSelectedObjectIDs;
-(NSMapTable *)stateByManager;
@end
