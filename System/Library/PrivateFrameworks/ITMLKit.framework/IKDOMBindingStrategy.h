/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKDOMBindingStrategy.h>

@protocol IKDOMBindingStrategy <NSObject>
@optional
-(void)didResolveKeys:(id)arg1;
-(id)keysAffectingChildren;
-(id)keysAffectingSubtree;
-(id)prototypeDependentKeys;
-(void)valueDidChangeForKey:(id)arg1 propertyPath:(id)arg2 extraInfo:(id)arg3;

@required
-(BOOL)applyValue:(id)arg1 forKey:(id)arg2;

@end


@class IKDOMBindingController, NSString, IKChangeSet, NSMutableSet, IKJSDataSourceView, NSArray;

@interface IKDOMBindingStrategy : NSObject <IKDOMBindingStrategy> {

	IKDOMBindingController* _domBindingController;
	NSString* _itemsBindingKey;
	IKChangeSet* _sourceItemsChangeSet;
	NSMutableSet* _updatedItemIDs;
	IKChangeSet* _filteredChangeSet;
	IKJSDataSourceView* _dataSourceView;

}

@property (nonatomic,retain) IKChangeSet * sourceItemsChangeSet;                                  //@synthesize sourceItemsChangeSet=_sourceItemsChangeSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedItemIDs;                                       //@synthesize updatedItemIDs=_updatedItemIDs - In the implementation block
@property (nonatomic,retain) IKChangeSet * filteredChangeSet;                                     //@synthesize filteredChangeSet=_filteredChangeSet - In the implementation block
@property (nonatomic,retain) IKJSDataSourceView * dataSourceView;                                 //@synthesize dataSourceView=_dataSourceView - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMBindingController * domBindingController;              //@synthesize domBindingController=_domBindingController - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemsBindingKey;                                   //@synthesize itemsBindingKey=_itemsBindingKey - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(id)initWithDOMBindingController:(id)arg1 itemsBindingKey:(id)arg2 ;
-(void)didResolveKeys:(id)arg1 ;
-(IKDOMBindingController *)domBindingController;
-(NSRange)visibleItemsRange;
-(id)keysAffectingChildren;
-(id)prototypeDependentKeys;
-(void)valueDidChangeForKey:(id)arg1 propertyPath:(id)arg2 extraInfo:(id)arg3 ;
-(BOOL)applyValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)itemsBindingKey;
-(void)setSourceItemsChangeSet:(IKChangeSet *)arg1 ;
-(IKChangeSet *)sourceItemsChangeSet;
-(NSMutableSet *)updatedItemIDs;
-(void)_applyItemsValueWithDataSource:(id)arg1 ;
-(IKJSDataSourceView *)dataSourceView;
-(IKChangeSet *)filteredChangeSet;
-(id)_adjustedIndexTitlesFromDataSource:(id)arg1 filteredItems:(id)arg2 filteredChangeSet:(id)arg3 ;
-(void)setFilteredChangeSet:(IKChangeSet *)arg1 ;
-(void)setUpdatedItemIDs:(NSMutableSet *)arg1 ;
-(void)setDataSourceView:(IKJSDataSourceView *)arg1 ;
@end

