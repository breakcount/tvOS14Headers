/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {

	int _cd_rc;
	NSArray* _underlyingArray;
	_PFWeakReference* _weakmoc;

}
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectEnumerator;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allObjects;
-(Class)classForCoder;
-(BOOL)containsObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)array;
-(void)getObjects:(id*)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 andContext:(id)arg2 ;
@end

