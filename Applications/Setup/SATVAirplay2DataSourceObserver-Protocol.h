//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SATVAirplay2DataSource;

@protocol SATVAirplay2DataSourceObserver <NSObject>

@optional
- (void)airplay2DataSourceDidUpdate:(id <SATVAirplay2DataSource>)arg1;
- (void)airplay2DataSource:(id <SATVAirplay2DataSource>)arg1 readyStateDidChange:(_Bool)arg2;
@end

