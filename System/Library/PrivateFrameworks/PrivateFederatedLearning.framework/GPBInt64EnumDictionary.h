/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBInt64EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;
	/*function pointer*/void* _validationFunc;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) /*function pointer*/void* validationFunc;              //@synthesize validationFunc=_validationFunc - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAll;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)serializedDataForUnknownValue:(int)arg1 forKey:(/*function pointer*/void**)arg2 keyDataType:(unsigned char)arg3 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 rawValues:(const int*)arg2 forKeys:(const long long*)arg3 count:(unsigned long long)arg4 ;
-(/*function pointer*/void*)validationFunc;
-(void)enumerateKeysAndRawValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)getEnum:(int*)arg1 forKey:(long long)arg2 ;
-(BOOL)getRawValue:(int*)arg1 forKey:(long long)arg2 ;
-(void)enumerateKeysAndEnumsUsingBlock:(/*^block*/id)arg1 ;
-(void)setRawValue:(int)arg1 forKey:(long long)arg2 ;
-(void)removeEnumForKey:(long long)arg1 ;
-(void)setEnum:(int)arg1 forKey:(long long)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)addRawEntriesFromDictionary:(id)arg1 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 ;
@end

