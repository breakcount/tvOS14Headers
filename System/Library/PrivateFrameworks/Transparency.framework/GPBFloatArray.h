/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBFloatArray : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	float* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)array;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)arrayWithValue:(float)arg1 ;
+(id)arrayWithValueArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addValue:(float)arg1 ;
-(float)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithValues:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)removeAll;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(float)arg2 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
-(void)addValuesFromArray:(id)arg1 ;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
@end

