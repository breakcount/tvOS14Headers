/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConstantDictionary;

@interface __NSConstantDictionaryEnumerator : NSEnumerator {

	NSConstantDictionary* _underlyingDictionary;
	unsigned long long _currentIndex;
	BOOL _isForKeys;

}
-(id)nextObject;
-(id)initWithConstantDictionary:(id)arg1 enumerateKeys:(BOOL)arg2 ;
@end

