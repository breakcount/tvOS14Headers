/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStore.h>
#import <libobjc.A.dylib/RTEnumerableStore.h>

@class NSString;

@interface RTHintStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForSourceFilter:(id)arg1 ;
+(BOOL)batchInsertHintsDictionary:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForHintEnumerationOptions:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestFromOptions:(id)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)_clearHintsForSourceFilter:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_regenerateLOIHintsWithHandler:(/*^block*/id)arg1 ;
-(void)clearHintsForSourceFilter:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_purgeHintsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchHintStatsNearLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchHintStatsNearLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)storeHints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)regenerateLOIHintsWithHandler:(/*^block*/id)arg1 ;
-(void)enumerateStoredHintsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)purgeHintsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchIsHintNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

