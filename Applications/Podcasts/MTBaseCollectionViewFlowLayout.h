//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface MTBaseCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    unsigned long long _numberOfColumns;	// 8 = 0x8
    NSIndexPath *_expandedIndexPath;	// 16 = 0x10
    double _appliedYOffset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002a9cc
@property(nonatomic) double appliedYOffset; // @synthesize appliedYOffset=_appliedYOffset;
@property(retain, nonatomic) NSIndexPath *expandedIndexPath; // @synthesize expandedIndexPath=_expandedIndexPath;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010002a984

@end
