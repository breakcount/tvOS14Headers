/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSEnumerator.h>

@interface _LSDBEnumerator : LSEnumerator {

	Context* _context;
	unsigned long long _index;
	id _lastFastObject;
	unsigned _hasReachedEnd : 1;
	unsigned _hasTriedToPrepare : 1;
	unsigned _hasPrepared : 1;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_LS11*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(BOOL)prepareIfNeeded;
-(id)_initWithContext:(LSContext*)arg1 ;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
@end

