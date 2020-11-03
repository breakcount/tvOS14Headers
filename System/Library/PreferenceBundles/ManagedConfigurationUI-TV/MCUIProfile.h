//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfile, NSArray;

@interface MCUIProfile : NSObject
{
    _Bool _showManagedPayloads;	// 8 = 0x8
    long long _finalInstallationWarningStyle;	// 16 = 0x10
    MCProfile *_profile;	// 24 = 0x18
    NSArray *_availableElevatedPayloadInfoTypes;	// 32 = 0x20
    NSArray *_accountSections;	// 40 = 0x28
    NSArray *_managedAppSections;	// 48 = 0x30
    NSArray *_managedBookSections;	// 56 = 0x38
    NSArray *_moreDetailsSections;	// 64 = 0x40
    NSArray *_restrictionSections;	// 72 = 0x48
    NSArray *_payloadInfoSectionSummaries;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002e29c
@property(readonly, nonatomic) NSArray *payloadInfoSectionSummaries; // @synthesize payloadInfoSectionSummaries=_payloadInfoSectionSummaries;
@property(readonly, nonatomic) NSArray *restrictionSections; // @synthesize restrictionSections=_restrictionSections;
@property(readonly, nonatomic) NSArray *moreDetailsSections; // @synthesize moreDetailsSections=_moreDetailsSections;
@property(readonly, nonatomic) NSArray *managedBookSections; // @synthesize managedBookSections=_managedBookSections;
@property(readonly, nonatomic) NSArray *managedAppSections; // @synthesize managedAppSections=_managedAppSections;
@property(readonly, nonatomic) NSArray *accountSections; // @synthesize accountSections=_accountSections;
@property(readonly, nonatomic) NSArray *availableElevatedPayloadInfoTypes; // @synthesize availableElevatedPayloadInfoTypes=_availableElevatedPayloadInfoTypes;
@property(readonly, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) long long finalInstallationWarningStyle; // @synthesize finalInstallationWarningStyle=_finalInstallationWarningStyle;
@property(nonatomic) _Bool showManagedPayloads; // @synthesize showManagedPayloads=_showManagedPayloads;
- (void)_profileListChanged:(id)arg1;	// IMP=0x000000000002e060
- (void)_managedBooksChanged:(id)arg1;	// IMP=0x000000000002df68
- (void)_managedAppsChanged:(id)arg1;	// IMP=0x000000000002de70
- (long long)numberOfRestrictions;	// IMP=0x000000000002ddf4
- (long long)numberOfManagedBooks;	// IMP=0x000000000002dd78
- (long long)numberOfManagedApps;	// IMP=0x000000000002dcfc
- (long long)numberOfAccounts;	// IMP=0x000000000002dc80
- (long long)_numberOfItemsInSectionsArray:(id)arg1;	// IMP=0x000000000002daa0
- (_Bool)managesBook:(id)arg1;	// IMP=0x000000000002d6b8
- (_Bool)managesAppID:(id)arg1;	// IMP=0x000000000002d31c
- (_Bool)isMDMProfile;	// IMP=0x000000000002d1cc
- (_Bool)isInstalledMDMProfile;	// IMP=0x000000000002d018
- (id)_localizedPayloadSummaryByType:(id)arg1;	// IMP=0x000000000002ccc8
- (id)_sortedPayloads:(id)arg1;	// IMP=0x000000000002c564
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;	// IMP=0x000000000002c358
- (void)reloadProfile:(id)arg1;	// IMP=0x000000000002a524
- (void)_determineAvailableElevatedPayloadInfoTypes;	// IMP=0x000000000002a330
- (void)setProfile:(id)arg1 managedPayloads:(_Bool)arg2;	// IMP=0x000000000002a270
- (void)dealloc;	// IMP=0x000000000002a1dc
- (id)initWithProfile:(id)arg1 managedPayloads:(_Bool)arg2;	// IMP=0x0000000000029fa0

@end
