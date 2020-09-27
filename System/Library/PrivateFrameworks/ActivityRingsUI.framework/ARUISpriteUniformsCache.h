/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface ARUISpriteUniformsCache : NSObject {

	NSCache* _cache;

}
+(id)defaultCache;
+(id)cacheWithLimit:(unsigned long long)arg1 ;
-(void)clearCache;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)uniformsForSprite:(id)arg1 renderedInContext:(id)arg2 ;
@end
