//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class FBSSceneIdentity;

@interface PBForegroundSceneTransaction : BSTransaction
{
    _Bool _backgroundAllOtherScenes;	// 8 = 0x8
    FBSSceneIdentity *_sceneIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100187f04
@property(readonly, nonatomic) _Bool backgroundAllOtherScenes; // @synthesize backgroundAllOtherScenes=_backgroundAllOtherScenes;
@property(readonly, nonatomic) FBSSceneIdentity *sceneIdentity; // @synthesize sceneIdentity=_sceneIdentity;
- (void)_begin;	// IMP=0x0000000100187928
- (id)initWithSceneIdentity:(id)arg1 backgroundAllOtherScenes:(_Bool)arg2;	// IMP=0x0000000100187804

@end

