//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSSet, UIEvent, _HBTouchablePanGestureRecognizer;

@protocol _HBTouchablePanGestureRecognizerDelegate <UIGestureRecognizerDelegate>
- (void)gestureRecognizer:(_HBTouchablePanGestureRecognizer *)arg1 touchesCanceled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)gestureRecognizer:(_HBTouchablePanGestureRecognizer *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)gestureRecognizer:(_HBTouchablePanGestureRecognizer *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end

