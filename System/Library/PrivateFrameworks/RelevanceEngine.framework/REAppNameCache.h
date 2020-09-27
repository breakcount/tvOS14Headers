/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary, NSLock;

@interface REAppNameCache : RESingleton {

	NSMutableDictionary* _nameCache;
	NSLock* _lock;

}
-(id)_init;
-(id)localizedNameForApplicationWithIdentifier:(id)arg1 ;
@end

