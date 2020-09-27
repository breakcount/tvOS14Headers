/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface AMSThreadSafeDictionary : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSObject*<OS_dispatch_queue> _backingDictionaryAccessQueue;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;                                //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingDictionaryAccessQueue;              //@synthesize backingDictionaryAccessQueue=_backingDictionaryAccessQueue - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allValues; 
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)backingDictionary;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)backingDictionaryAccessQueue;
-(void)setBackingDictionaryAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

