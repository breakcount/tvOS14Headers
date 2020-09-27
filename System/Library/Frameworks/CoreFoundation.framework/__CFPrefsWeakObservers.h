/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {

	cfobservers_t* values;
	unsigned long long count;

}
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(unsigned char)addObject:(id)arg1 ;
-(unsigned char)removeObject:(id)arg1 ;
-(unsigned long long)borrowObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)approximateCount;
@end

