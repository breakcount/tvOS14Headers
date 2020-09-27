/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBStringInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAll;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)initWithInt64s:(const long long*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndInt64sUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getInt64:(long long*)arg1 forKey:(id)arg2 ;
-(void)removeInt64ForKey:(id)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
@end

