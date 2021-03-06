//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionStreamable-Protocol.h"

@class BSMutableIntegerMap, NSString;

@interface BKKeyboardPerKeyCodeDestinationDictionary : NSObject <BSDescriptionStreamable>
{
    BSMutableIntegerMap *_keyCodeDownPerDestination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004a768
@property(readonly, nonatomic) BSMutableIntegerMap *keyCodeDownPerDestination; // @synthesize keyCodeDownPerDestination=_keyCodeDownPerDestination;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000010004a68c
- (void)removeDestinationsForKeyCode:(long long)arg1;	// IMP=0x000000010004a5c0
- (void)addDestination:(id)arg1 forDownKeyCode:(long long)arg2;	// IMP=0x000000010004a44c
- (void)setDestinations:(id)arg1 forDownKeyCode:(long long)arg2;	// IMP=0x000000010004a304
- (id)destinationsForDownKeyCode:(long long)arg1;	// IMP=0x000000010004a2f4
@property(readonly, nonatomic) unsigned long long keyDownCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

