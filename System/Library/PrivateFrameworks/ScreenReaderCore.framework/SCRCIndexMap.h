/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCRCIndexMap : NSObject <NSCopying, NSSecureCoding> {

	CFDictionaryRef _map;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)indexes;
-(unsigned long long*)_createIndexesWithSize:(unsigned long long*)arg1 ;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(id)_initWithIndexMap:(id)arg1 ;
-(id)_initAndDeepCopyIndexMap:(id)arg1 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)initWithObjects:(const id*)arg1 andIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3 ;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForIndex:(unsigned long long)arg1 ;
-(void)addObjectsFromIndexMap:(id)arg1 ;
@end

