//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MCMSQLiteDB : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007c544
- (void).cxx_destruct;	// IMP=0x000000010007c538
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (_Bool)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)arg1;	// IMP=0x000000010007c030
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007bac8
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007b4d0
- (id)identifiersWithError:(id *)arg1;	// IMP=0x000000010007af80
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007a910
- (_Bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007a1e0
- (_Bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007a0e0
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100079d3c
- (_Bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100079c6c
- (_Bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100079734
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000792b8
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x0000000100078f80
- (_Bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100078ea4
- (_Bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100078870
- (_Bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007867c
- (_Bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000100077e34
- (_Bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100077d28
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100077d14
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id *)arg4;	// IMP=0x0000000100077cfc
- (_Bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id *)arg5;	// IMP=0x0000000100077740
- (void)closeDB;	// IMP=0x0000000100077550
- (_Bool)_sqliteExec:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100077418
- (void)dealloc;	// IMP=0x00000001000773cc
- (id)initWithParentDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000772b0

@end
