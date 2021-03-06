/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLCounterSet.h>

@class NSString, NSArray;

@interface MTLCounterSetInternal : NSObject <MTLCounterSet> {

	NSString* _name;
	NSString* _description;
	NSArray* _counters;

}

@property (copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * counters;                       //@synthesize counters=_counters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(NSArray *)counters;
-(id)initWithName:(id)arg1 description:(id)arg2 counters:(id)arg3 ;
@end

