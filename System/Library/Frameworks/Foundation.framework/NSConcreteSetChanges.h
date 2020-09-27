/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSetChanges.h>

@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {

	NSSet* _backing;
	NSMutableArray* _changes;
	BOOL _backingIsMutable;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)member:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithSet:(id)arg1 ;
-(unsigned long long)changeCount;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)_willChange;
-(void)filterObjectsWithTest:(/*^block*/id)arg1 ;
-(void)transformObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)_fault;
@end

