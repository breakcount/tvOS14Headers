/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKeyValueStore.h>

@protocol _DKKeyValueStore <_DKSimpleKeyValueStore>
@required
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(BOOL)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)dataForKey:(id)arg1;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2;
-(void)setString:(id)arg1 forKey:(id)arg2;
-(void)setArray:(id)arg1 forKey:(id)arg2;
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(void)setData:(id)arg1 forKey:(id)arg2;
-(void)setNumber:(id)arg1 forKey:(id)arg2;
-(id)numberForKey:(id)arg1;
-(id)dateForKey:(id)arg1;
-(void)setDate:(id)arg1 forKey:(id)arg2;
-(id)objectForKey:(id)arg1 havingClass:(Class)arg2;

@end


@protocol _DKSimpleKeyValueStore;
@interface _DKKeyValueStore : NSObject <_DKKeyValueStore> {

	id<_DKSimpleKeyValueStore> _store;

}
+(id)standardUserDefaultsKeyValueStore;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(id)initWithSimpleKeyValueStore:(id)arg1 ;
-(id)objectForKey:(id)arg1 havingClass:(Class)arg2 ;
@end

