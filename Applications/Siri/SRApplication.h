//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "SROrientationDelegate-Protocol.h"
#import "SiriUIApplication-Protocol.h"

@class NSString;
@protocol SRApplicationDataSource;

@interface SRApplication : UIApplication <SiriUIApplication, SROrientationDelegate>
{
    long long _frontMostAppOrientation;	// 8 = 0x8
    id <SRApplicationDataSource> _dataSource;	// 16 = 0x10
}

+ (id)sharedApplication;	// IMP=0x000000010004b414
- (void).cxx_destruct;	// IMP=0x000000010004b508
@property(nonatomic) __weak id <SRApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)setFrontMostAppOrientation:(long long)arg1;	// IMP=0x000000010004b4c4
- (long long)_frontMostAppOrientation;	// IMP=0x000000010004b4b4
- (long long)launchOrientation;	// IMP=0x000000010004b4a4
@property(readonly, nonatomic) struct CGRect applicationFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
