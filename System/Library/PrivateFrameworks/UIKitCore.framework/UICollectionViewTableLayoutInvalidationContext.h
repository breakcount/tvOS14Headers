/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateTableLayoutDelegateMetrics;
	BOOL _skipSectionInvalidation;

}

@property (assign,nonatomic) BOOL invalidateTableLayoutDelegateMetrics;              //@synthesize invalidateTableLayoutDelegateMetrics=_invalidateTableLayoutDelegateMetrics - In the implementation block
@property (assign,nonatomic) BOOL skipSectionInvalidation;                           //@synthesize skipSectionInvalidation=_skipSectionInvalidation - In the implementation block
-(void)setSkipSectionInvalidation:(BOOL)arg1 ;
-(BOOL)invalidateTableLayoutDelegateMetrics;
-(BOOL)skipSectionInvalidation;
-(void)setInvalidateTableLayoutDelegateMetrics:(BOOL)arg1 ;
@end

