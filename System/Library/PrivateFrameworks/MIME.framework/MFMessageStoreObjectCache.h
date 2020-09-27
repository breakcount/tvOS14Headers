/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MIME/MIME-Structs.h>
@class NSLock;

@interface MFMessageStoreObjectCache : NSObject {

	NSLock* _lock;
	long long _capacity;
	CFDictionaryRef _cache;
	/*^block*/id _keyGenerator;
	/*^block*/id _comparator;

}

@property (nonatomic,copy) id keyGenerator;              //@synthesize keyGenerator=_keyGenerator - In the implementation block
@property (nonatomic,copy) id comparator;                //@synthesize comparator=_comparator - In the implementation block
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)comparator;
-(void)flush;
-(void)setComparator:(id)arg1 ;
-(void)_nts_evictObject;
-(void)_nts_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3 ;
-(id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3 ;
-(void)removeObjectForMessage:(id)arg1 kind:(long long)arg2 ;
-(id)objectForMessage:(id)arg1 kind:(long long)arg2 ;
-(id)keyGenerator;
-(void)setKeyGenerator:(id)arg1 ;
@end

