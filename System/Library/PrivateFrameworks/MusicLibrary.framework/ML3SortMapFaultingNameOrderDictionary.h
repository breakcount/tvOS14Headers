/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class ML3DatabaseConnection, NSMutableDictionary;

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {

	ML3DatabaseConnection* _connection;
	NSMutableDictionary* _dirtyInserts;

}
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithConnection:(id)arg1 ;
@end
