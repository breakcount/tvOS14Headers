/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UICollectionViewDiffableDataSourceSectionSnapshotHandlers : NSObject <NSCopying> {

	/*^block*/id _shouldExpandItemHandler;
	/*^block*/id _willExpandItemHandler;
	/*^block*/id _shouldCollapseItemHandler;
	/*^block*/id _willCollapseItemHandler;
	/*^block*/id _snapshotForExpandingParentItemHandler;

}

@property (nonatomic,copy) id shouldExpandItemHandler;                            //@synthesize shouldExpandItemHandler=_shouldExpandItemHandler - In the implementation block
@property (nonatomic,copy) id willExpandItemHandler;                              //@synthesize willExpandItemHandler=_willExpandItemHandler - In the implementation block
@property (nonatomic,copy) id shouldCollapseItemHandler;                          //@synthesize shouldCollapseItemHandler=_shouldCollapseItemHandler - In the implementation block
@property (nonatomic,copy) id willCollapseItemHandler;                            //@synthesize willCollapseItemHandler=_willCollapseItemHandler - In the implementation block
@property (nonatomic,copy) id snapshotForExpandingParentItemHandler;              //@synthesize snapshotForExpandingParentItemHandler=_snapshotForExpandingParentItemHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldExpandItemHandler:(id)arg1 ;
-(void)setWillExpandItemHandler:(id)arg1 ;
-(void)setShouldCollapseItemHandler:(id)arg1 ;
-(void)setWillCollapseItemHandler:(id)arg1 ;
-(void)setSnapshotForExpandingParentItemHandler:(id)arg1 ;
-(id)shouldExpandItemHandler;
-(id)willExpandItemHandler;
-(id)shouldCollapseItemHandler;
-(id)willCollapseItemHandler;
-(id)snapshotForExpandingParentItemHandler;
-(id)initWithShouldExpandItemHandler:(/*^block*/id)arg1 willExpandItemHandler:(/*^block*/id)arg2 shouldCollapseItemHandler:(/*^block*/id)arg3 willCollapseItemHandler:(/*^block*/id)arg4 snapshotForExpandingParentItemHandler:(/*^block*/id)arg5 ;
@end

