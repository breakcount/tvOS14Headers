/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface FigFlatToNSDictionaryWrapper : NSDictionary {

	OpaqueFigFlatDictionaryRef _flatDictionary;
	OpaqueFigFlatDictionaryKeySpecRef _keySpec;
	int _keySpace;
	void* _dictionaryBacking;
	void* _exportedKeySpec;
	/*^block*/id _deallocatorBlock;
	os_unfair_lock_s _lazyInitializationMutex;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initLazilyWithFlatDictionaryBacking:(void*)arg1 exportedKeySpec:(void*)arg2 deallocatorBlock:(/*^block*/id)arg3 ;
-(BOOL)_ensureFlatDictionaryIsInitialized;
-(id)arrayForFlatDictionaryArrayDataKey:(SCD_Struct_Fi124*)arg1 ;
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 keySpec:(OpaqueFigFlatDictionaryKeySpecRef)arg2 ;
@end
