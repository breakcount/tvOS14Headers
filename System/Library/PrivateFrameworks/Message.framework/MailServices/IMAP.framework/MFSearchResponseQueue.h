/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <IMAP/MFBaseSyncResponseQueue.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {

	NSMutableIndexSet* indexSet;
	unsigned limit;

}

@property (nonatomic,retain,readonly) NSIndexSet * indexSet; 
-(id)init;
-(void)dealloc;
-(NSIndexSet *)indexSet;
-(BOOL)addItem:(id)arg1 ;
-(BOOL)flush;
-(unsigned long long)uidForItem:(id)arg1 ;
-(unsigned long long)flagsForItem:(id)arg1 ;
@end

