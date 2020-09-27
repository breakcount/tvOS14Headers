/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface REKeyMultiValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long keyCount; 
@property (nonatomic,readonly) unsigned long long valueCount; 
-(id)init;
-(void)removeKey:(id)arg1 ;
-(unsigned long long)keyCount;
-(void)insertValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeValue:(id)arg1 forKey:(id)arg2 ;
-(id)keyForValue:(id)arg1 ;
-(id)valuesForKey:(id)arg1 ;
-(unsigned long long)valueCount;
-(id)initWithValuePointFunctionOptions:(unsigned long long)arg1 ;
-(void)addKey:(id)arg1 withValues:(id)arg2 ;
-(void)enumerateValuesForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

