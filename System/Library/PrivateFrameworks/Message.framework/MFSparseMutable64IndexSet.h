/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned _count;
	unsigned _storageSize;
	unsigned _cursor;
	unsigned long long* _storage;

}
+(id)indexSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(void)addIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(void)addIndexes:(id)arg1 ;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(void)removeIndex:(unsigned long long)arg1 ;
-(void)enumerateIndexesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionPositionOfIndex:(unsigned long long)arg1 ;
-(void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1 ;
-(unsigned long long)_positionOfIndex:(unsigned long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
@end

