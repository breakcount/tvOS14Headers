/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {

	BOOL _done;
	NSString* _string;
	unsigned long long _indexOfCurrentComposedCharacter;

}
-(id)allObjects;
-(id)nextObject;
-(id)initWithString:(id)arg1 ;
@end

