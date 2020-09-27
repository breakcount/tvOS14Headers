/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject {

	CFDictionaryRef _dictionary;
	unsigned long long _maxCount;
	TILRUDictionaryNode* _head;
	TILRUDictionaryNode* _tail;

}
+(id)dictionaryWithMaximumCapacity:(unsigned long long)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(void)_addNodeToFront:(id)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(unsigned long long)linkedListCount;
-(id)allKeysInLRUOrder;
-(id)allValuesInLRUOrder;
-(id)objectForKeyWithoutAffectingLRU:(id)arg1 ;
@end

