/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutSpacing, NSArray;

@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <NSCopying> {

	BOOL _hasCheckedIfDecorationItemRequiresRegistration;
	BOOL __hasDecorationItemRequiringRegistration;
	NSCollectionLayoutSpacing* _interItemSpacing;
	NSArray* _subitems;
	long long _layoutDirection;
	NSArray* _visualFormats;
	/*^block*/id _customGroupItemProvider;
	/*^block*/id _itemsProvider;
	/*^block*/id _visualFormatItemProvider;
	long long _count;
	long long _groupOptions;

}

@property (nonatomic,copy) NSArray * subitems;                                          //@synthesize subitems=_subitems - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                 //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,copy) NSArray * visualFormats;                                     //@synthesize visualFormats=_visualFormats - In the implementation block
@property (nonatomic,copy) id customGroupItemProvider;                                  //@synthesize customGroupItemProvider=_customGroupItemProvider - In the implementation block
@property (nonatomic,copy) id itemsProvider;                                            //@synthesize itemsProvider=_itemsProvider - In the implementation block
@property (nonatomic,copy) id visualFormatItemProvider;                                 //@synthesize visualFormatItemProvider=_visualFormatItemProvider - In the implementation block
@property (assign,nonatomic) long long count;                                           //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL _hasDecorationItemRequiringRegistration;              //@synthesize _hasDecorationItemRequiringRegistration=__hasDecorationItemRequiringRegistration - In the implementation block
@property (assign,nonatomic) long long groupOptions;                                    //@synthesize groupOptions=_groupOptions - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems; 
@property (nonatomic,copy) NSCollectionLayoutSpacing * interItemSpacing;                //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
+(id)verticalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2 ;
+(id)horizontalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3 ;
+(id)verticalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3 ;
+(id)horizontalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2 ;
+(id)customGroupWithLayoutSize:(id)arg1 itemProvider:(/*^block*/id)arg2 ;
+(id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(/*^block*/id)arg2 ;
+(id)verticalGroupWithSize:(id)arg1 subitemsProvider:(/*^block*/id)arg2 ;
+(id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)setInterItemSpacing:(NSCollectionLayoutSpacing *)arg1 ;
-(NSCollectionLayoutSpacing *)interItemSpacing;
-(unsigned long long)layoutAxis;
-(id)visualDescription;
-(long long)groupOptions;
-(void)setGroupOptions:(long long)arg1 ;
-(NSArray *)subitems;
-(id)customGroupItemProvider;
-(BOOL)isCustomGroup;
-(id)_effectiveCopiedSubitemsForSubitems:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3 ;
-(id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 visualFormats:(id)arg9 itemsProvider:(/*^block*/id)arg10 visualFormatItemProvider:(/*^block*/id)arg11 customGroupItemProvider:(/*^block*/id)arg12 options:(long long)arg13 name:(id)arg14 identifier:(id)arg15 ;
-(BOOL)isVerticalGroup;
-(BOOL)isHorizontalGroup;
-(id)itemsProvider;
-(NSArray *)visualFormats;
-(id)visualFormatItemProvider;
-(id)_effectiveSizeForSize:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3 ;
-(BOOL)hasItemProvider;
-(BOOL)hasVisualFormat;
-(BOOL)_hasDecorationItemRequiringRegistration;
-(BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1 ;
-(void)setSubitems:(NSArray *)arg1 ;
-(void)setVisualFormats:(NSArray *)arg1 ;
-(void)setCustomGroupItemProvider:(id)arg1 ;
-(void)setItemsProvider:(id)arg1 ;
-(void)setVisualFormatItemProvider:(id)arg1 ;
-(void)set_hasDecorationItemRequiringRegistration:(BOOL)arg1 ;
@end

