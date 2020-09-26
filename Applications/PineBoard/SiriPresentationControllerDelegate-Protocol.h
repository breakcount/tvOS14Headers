//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SiriDismissalOptions, SiriPresentationOptions, SiriPunchoutRequest;
@protocol SiriPresentation;

@protocol SiriPresentationControllerDelegate <NSObject>
- (void)siriPresentation:(id <SiriPresentation>)arg1 isEnabledDidChange:(_Bool)arg2;
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsDismissalWithOptions:(SiriDismissalOptions *)arg2 withHandler:(void (^)(_Bool, NSError *))arg3;
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsPresentationWithOptions:(SiriPresentationOptions *)arg2 withHandler:(void (^)(_Bool, NSError *))arg3;

@optional
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsPunchout:(SiriPunchoutRequest *)arg2 withHandler:(void (^)(_Bool, NSError *))arg3;
- (void)siriPresentation:(id <SiriPresentation>)arg1 setHomeAffordanceSuppression:(long long)arg2;
- (void)siriPresentation:(id <SiriPresentation>)arg1 setShowsHomeAffordance:(_Bool)arg2;
@end
