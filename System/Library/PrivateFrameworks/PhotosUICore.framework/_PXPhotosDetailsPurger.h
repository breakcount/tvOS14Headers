/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSHashTable, NSPointerArray;

@interface _PXPhotosDetailsPurger : NSObject {

	NSHashTable* _allViewControllers;
	NSPointerArray* _lastUsedViewControllers;

}
+(id)sharedPurger;
-(id)init;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)purgeOldViewControllers;
-(void)detailsViewControllerDidAppear:(id)arg1 ;
-(void)_purgeAllViewControllers;
@end

