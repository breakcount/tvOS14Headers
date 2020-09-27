/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface SFSSCachingService : NSObject {

	NSCache* _memoryCache;

}

@property (nonatomic,retain) NSCache * memoryCache;              //@synthesize memoryCache=_memoryCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)clear;
-(NSCache *)memoryCache;
-(void)setMemoryCache:(NSCache *)arg1 ;
@end

